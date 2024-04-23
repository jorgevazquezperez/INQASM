// Generated from NetQASMParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link NetQASMParser}.
 */
public interface NetQASMParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(NetQASMParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(NetQASMParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#preamble}.
	 * @param ctx the parse tree
	 */
	void enterPreamble(NetQASMParser.PreambleContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#preamble}.
	 * @param ctx the parse tree
	 */
	void exitPreamble(NetQASMParser.PreambleContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#line}.
	 * @param ctx the parse tree
	 */
	void enterLine(NetQASMParser.LineContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#line}.
	 * @param ctx the parse tree
	 */
	void exitLine(NetQASMParser.LineContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterInstruction(NetQASMParser.InstructionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitInstruction(NetQASMParser.InstructionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegInstr(NetQASMParser.RegInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegInstr(NetQASMParser.RegInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regRegInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegRegInstr(NetQASMParser.RegRegInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regRegInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegRegInstr(NetQASMParser.RegRegInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regImmImmInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegImmImmInstr(NetQASMParser.RegImmImmInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regImmImmInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegImmImmInstr(NetQASMParser.RegImmImmInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regRegRegInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegRegRegInstr(NetQASMParser.RegRegRegInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regRegRegInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegRegRegInstr(NetQASMParser.RegRegRegInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regRegRegRegInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegRegRegRegInstr(NetQASMParser.RegRegRegRegInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regRegRegRegInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegRegRegRegInstr(NetQASMParser.RegRegRegRegInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#immInstr}.
	 * @param ctx the parse tree
	 */
	void enterImmInstr(NetQASMParser.ImmInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#immInstr}.
	 * @param ctx the parse tree
	 */
	void exitImmInstr(NetQASMParser.ImmInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regRegImmInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegRegImmInstr(NetQASMParser.RegRegImmInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regRegImmInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegRegImmInstr(NetQASMParser.RegRegImmInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regImmInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegImmInstr(NetQASMParser.RegImmInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regImmInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegImmInstr(NetQASMParser.RegImmInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regEntryInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegEntryInstr(NetQASMParser.RegEntryInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regEntryInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegEntryInstr(NetQASMParser.RegEntryInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#regAddrInstr}.
	 * @param ctx the parse tree
	 */
	void enterRegAddrInstr(NetQASMParser.RegAddrInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#regAddrInstr}.
	 * @param ctx the parse tree
	 */
	void exitRegAddrInstr(NetQASMParser.RegAddrInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#arrayEntryInstr}.
	 * @param ctx the parse tree
	 */
	void enterArrayEntryInstr(NetQASMParser.ArrayEntryInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#arrayEntryInstr}.
	 * @param ctx the parse tree
	 */
	void exitArrayEntryInstr(NetQASMParser.ArrayEntryInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#arraySliceInstr}.
	 * @param ctx the parse tree
	 */
	void enterArraySliceInstr(NetQASMParser.ArraySliceInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#arraySliceInstr}.
	 * @param ctx the parse tree
	 */
	void exitArraySliceInstr(NetQASMParser.ArraySliceInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#addrInstr}.
	 * @param ctx the parse tree
	 */
	void enterAddrInstr(NetQASMParser.AddrInstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#addrInstr}.
	 * @param ctx the parse tree
	 */
	void exitAddrInstr(NetQASMParser.AddrInstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#reg5Instr}.
	 * @param ctx the parse tree
	 */
	void enterReg5Instr(NetQASMParser.Reg5InstrContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#reg5Instr}.
	 * @param ctx the parse tree
	 */
	void exitReg5Instr(NetQASMParser.Reg5InstrContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#classicalReg}.
	 * @param ctx the parse tree
	 */
	void enterClassicalReg(NetQASMParser.ClassicalRegContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#classicalReg}.
	 * @param ctx the parse tree
	 */
	void exitClassicalReg(NetQASMParser.ClassicalRegContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#version}.
	 * @param ctx the parse tree
	 */
	void enterVersion(NetQASMParser.VersionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#version}.
	 * @param ctx the parse tree
	 */
	void exitVersion(NetQASMParser.VersionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#appid}.
	 * @param ctx the parse tree
	 */
	void enterAppid(NetQASMParser.AppidContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#appid}.
	 * @param ctx the parse tree
	 */
	void exitAppid(NetQASMParser.AppidContext ctx);
	/**
	 * Enter a parse tree produced by {@link NetQASMParser#define}.
	 * @param ctx the parse tree
	 */
	void enterDefine(NetQASMParser.DefineContext ctx);
	/**
	 * Exit a parse tree produced by {@link NetQASMParser#define}.
	 * @param ctx the parse tree
	 */
	void exitDefine(NetQASMParser.DefineContext ctx);
}