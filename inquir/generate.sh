LOCATION=antlr-4.7.2-complete.jar
java -jar $LOCATION -Dlanguage=Cpp -listener -o generated/ -package oqasm OQASM2.g4