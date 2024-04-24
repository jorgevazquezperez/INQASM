// Generated from InQuIRParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link InQuIRParser}.
 */
public interface InQuIRParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#mainprogram}.
	 * @param ctx the parse tree
	 */
	void enterMainprogram(InQuIRParser.MainprogramContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#mainprogram}.
	 * @param ctx the parse tree
	 */
	void exitMainprogram(InQuIRParser.MainprogramContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#system}.
	 * @param ctx the parse tree
	 */
	void enterSystem(InQuIRParser.SystemContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#system}.
	 * @param ctx the parse tree
	 */
	void exitSystem(InQuIRParser.SystemContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#process}.
	 * @param ctx the parse tree
	 */
	void enterProcess(InQuIRParser.ProcessContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#process}.
	 * @param ctx the parse tree
	 */
	void exitProcess(InQuIRParser.ProcessContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterInstruction(InQuIRParser.InstructionContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitInstruction(InQuIRParser.InstructionContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#function}.
	 * @param ctx the parse tree
	 */
	void enterFunction(InQuIRParser.FunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#function}.
	 * @param ctx the parse tree
	 */
	void exitFunction(InQuIRParser.FunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#quantum_instruction}.
	 * @param ctx the parse tree
	 */
	void enterQuantum_instruction(InQuIRParser.Quantum_instructionContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#quantum_instruction}.
	 * @param ctx the parse tree
	 */
	void exitQuantum_instruction(InQuIRParser.Quantum_instructionContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(InQuIRParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(InQuIRParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#value}.
	 * @param ctx the parse tree
	 */
	void enterValue(InQuIRParser.ValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#value}.
	 * @param ctx the parse tree
	 */
	void exitValue(InQuIRParser.ValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#gate}.
	 * @param ctx the parse tree
	 */
	void enterGate(InQuIRParser.GateContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#gate}.
	 * @param ctx the parse tree
	 */
	void exitGate(InQuIRParser.GateContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#session}.
	 * @param ctx the parse tree
	 */
	void enterSession(InQuIRParser.SessionContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#session}.
	 * @param ctx the parse tree
	 */
	void exitSession(InQuIRParser.SessionContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#participant}.
	 * @param ctx the parse tree
	 */
	void enterParticipant(InQuIRParser.ParticipantContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#participant}.
	 * @param ctx the parse tree
	 */
	void exitParticipant(InQuIRParser.ParticipantContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#label}.
	 * @param ctx the parse tree
	 */
	void enterLabel(InQuIRParser.LabelContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#label}.
	 * @param ctx the parse tree
	 */
	void exitLabel(InQuIRParser.LabelContext ctx);
	/**
	 * Enter a parse tree produced by {@link InQuIRParser#qubit}.
	 * @param ctx the parse tree
	 */
	void enterQubit(InQuIRParser.QubitContext ctx);
	/**
	 * Exit a parse tree produced by {@link InQuIRParser#qubit}.
	 * @param ctx the parse tree
	 */
	void exitQubit(InQuIRParser.QubitContext ctx);
}