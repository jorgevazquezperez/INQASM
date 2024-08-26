#include <iostream>
#include <fstream>
#include <cxxopts.hpp>
#include "InQuIRCompiler.hpp"

using namespace std;
//using namespace antlr4;

const char * description = R"""(
  InquIR compiler to NetQASM.
)""";

int main(int argc, char** argv)
{
    cxxopts::Options options("cuqui", description);

    options.add_options()
        ("f,file", "File to compile", cxxopts::value<string>())
        ("h,help", "Print usage")
    ;

    auto result = options.parse(argc, argv);

    if (result.count("help"))
    {
      cout << options.help() << "\n";
      exit(0);
    }
    string filePath;
    if (result.count("file")){
      filePath = result["file"].as<std::string>();
      ifstream file(filePath);

      // confirm file opening
      if (!file.is_open()) {
          // print error message and return
          cerr << "Failed to open file: " << filePath << endl;
          return 1;
      }

      // Read the file line by line into a string
      string line;
      string file_content = "";
      while (getline(file, line)) {
          file_content += line + "\n";
      }

      // Close the file
      file.close();

      compile(file_content);
      cout << "File compiled successfully!\n";
    }

    return 0;
}