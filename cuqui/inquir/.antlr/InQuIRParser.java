// Generated from /home/jorge.vazquez.perez/Nextcloud/Proyectos/InQuIR_Compiler/cuqui/inquir/InQuIRParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class InQuIRParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		OPEN=1, CLOSE=2, INIT=3, FREE=4, MEASURE=5, GENENT=6, ENTSWAP=7, RECV=8, 
		SEND=9, RCXC=10, RCXT=11, H=12, X=13, Y=14, Z=15, CX=16, CZ=17, SWAP=18, 
		ID=19, REAL=20, INT=21, STRING=22, AND=23, OR=24, XOR=25, IF=26, ELSE=27, 
		THEN=28, LCURLY=29, RCURLY=30, LPAREN=31, RPAREN=32, LBRACK=33, RBRACK=34, 
		COMMA=35, COLON=36, SEMICOLON=37, DOT=38, VERT=39, EQUAL=40, EXCLAM=41, 
		QUESTION=42, WS=43, EOL=44;
	public static final int
		RULE_mainprogram = 0, RULE_system = 1, RULE_process = 2, RULE_line = 3, 
		RULE_function = 4, RULE_quantum_instruction = 5, RULE_expression = 6, 
		RULE_value = 7, RULE_gate = 8, RULE_session = 9, RULE_participant = 10, 
		RULE_label = 11, RULE_qubit = 12;
	private static String[] makeRuleNames() {
		return new String[] {
			"mainprogram", "system", "process", "line", "function", "quantum_instruction", 
			"expression", "value", "gate", "session", "participant", "label", "qubit"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'open'", "'close'", "'init'", "'free'", null, "'genEnt'", "'entSwap'", 
			"'recv'", "'send'", "'rcxc'", "'rcxt'", "'H'", "'X'", "'Y'", "'Z'", "'CX'", 
			"'CZ'", "'SWAP'", null, null, null, null, "'&&'", "'||'", "'^'", "'if'", 
			"'else'", "'then'", "'{'", "'}'", "'('", "')'", "'['", "']'", "','", 
			"':'", "';'", "'.'", "'|'", "'='", "'!'", "'?'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "OPEN", "CLOSE", "INIT", "FREE", "MEASURE", "GENENT", "ENTSWAP", 
			"RECV", "SEND", "RCXC", "RCXT", "H", "X", "Y", "Z", "CX", "CZ", "SWAP", 
			"ID", "REAL", "INT", "STRING", "AND", "OR", "XOR", "IF", "ELSE", "THEN", 
			"LCURLY", "RCURLY", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "COMMA", 
			"COLON", "SEMICOLON", "DOT", "VERT", "EQUAL", "EXCLAM", "QUESTION", "WS", 
			"EOL"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "InQuIRParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public InQuIRParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MainprogramContext extends ParserRuleContext {
		public SystemContext system() {
			return getRuleContext(SystemContext.class,0);
		}
		public MainprogramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mainprogram; }
	}

	public final MainprogramContext mainprogram() throws RecognitionException {
		MainprogramContext _localctx = new MainprogramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_mainprogram);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(26);
			system();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SystemContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(InQuIRParser.EOF, 0); }
		public List<ProcessContext> process() {
			return getRuleContexts(ProcessContext.class);
		}
		public ProcessContext process(int i) {
			return getRuleContext(ProcessContext.class,i);
		}
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public List<SystemContext> system() {
			return getRuleContexts(SystemContext.class);
		}
		public SystemContext system(int i) {
			return getRuleContext(SystemContext.class,i);
		}
		public TerminalNode VERT() { return getToken(InQuIRParser.VERT, 0); }
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public SystemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_system; }
	}

	public final SystemContext system() throws RecognitionException {
		SystemContext _localctx = new SystemContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_system);
		int _la;
		try {
			setState(42);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EOF:
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(31);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==INT) {
					{
					{
					setState(28);
					process();
					}
					}
					setState(33);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(34);
				match(EOF);
				}
				break;
			case LPAREN:
				enterOuterAlt(_localctx, 2);
				{
				setState(35);
				match(LPAREN);
				setState(36);
				system();
				setState(37);
				match(VERT);
				setState(38);
				system();
				setState(39);
				match(RPAREN);
				setState(40);
				match(EOF);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProcessContext extends ParserRuleContext {
		public ParticipantContext participant() {
			return getRuleContext(ParticipantContext.class,0);
		}
		public TerminalNode LCURLY() { return getToken(InQuIRParser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(InQuIRParser.RCURLY, 0); }
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public ProcessContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_process; }
	}

	public final ProcessContext process() throws RecognitionException {
		ProcessContext _localctx = new ProcessContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_process);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			participant();
			setState(45);
			match(LCURLY);
			setState(49);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2150629140L) != 0)) {
				{
				{
				setState(46);
				line();
				}
				}
				setState(51);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(52);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LineContext extends ParserRuleContext {
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
	 
		public LineContext() { }
		public void copyFrom(LineContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class QuantumInstructionLineContext extends LineContext {
		public Quantum_instructionContext quantum_instruction() {
			return getRuleContext(Quantum_instructionContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(InQuIRParser.SEMICOLON, 0); }
		public QuantumInstructionLineContext(LineContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FunctionLineContext extends LineContext {
		public FunctionContext function() {
			return getRuleContext(FunctionContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(InQuIRParser.SEMICOLON, 0); }
		public FunctionLineContext(LineContext ctx) { copyFrom(ctx); }
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_line);
		try {
			setState(60);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLOSE:
			case FREE:
			case RECV:
			case SEND:
			case RCXC:
			case RCXT:
			case ID:
			case INT:
			case LPAREN:
				_localctx = new FunctionLineContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(54);
				function();
				setState(55);
				match(SEMICOLON);
				}
				break;
			case H:
			case X:
			case Y:
			case Z:
			case CX:
			case CZ:
			case SWAP:
				_localctx = new QuantumInstructionLineContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(57);
				quantum_instruction();
				setState(58);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionContext extends ParserRuleContext {
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
	 
		public FunctionContext() { }
		public void copyFrom(FunctionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RecvContext extends FunctionContext {
		public TerminalNode RECV() { return getToken(InQuIRParser.RECV, 0); }
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public SessionContext session() {
			return getRuleContext(SessionContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(InQuIRParser.COMMA, 0); }
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public TerminalNode COLON() { return getToken(InQuIRParser.COLON, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public RecvContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class GenEntContext extends FunctionContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(InQuIRParser.EQUAL, 0); }
		public TerminalNode GENENT() { return getToken(InQuIRParser.GENENT, 0); }
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public ParticipantContext participant() {
			return getRuleContext(ParticipantContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public GenEntContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class InitContext extends FunctionContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(InQuIRParser.EQUAL, 0); }
		public TerminalNode INIT() { return getToken(InQuIRParser.INIT, 0); }
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public InitContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class EntSwapContext extends FunctionContext {
		public List<TerminalNode> LPAREN() { return getTokens(InQuIRParser.LPAREN); }
		public TerminalNode LPAREN(int i) {
			return getToken(InQuIRParser.LPAREN, i);
		}
		public List<ValueContext> value() {
			return getRuleContexts(ValueContext.class);
		}
		public ValueContext value(int i) {
			return getRuleContext(ValueContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(InQuIRParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(InQuIRParser.COMMA, i);
		}
		public List<TerminalNode> RPAREN() { return getTokens(InQuIRParser.RPAREN); }
		public TerminalNode RPAREN(int i) {
			return getToken(InQuIRParser.RPAREN, i);
		}
		public TerminalNode EQUAL() { return getToken(InQuIRParser.EQUAL, 0); }
		public TerminalNode ENTSWAP() { return getToken(InQuIRParser.ENTSWAP, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public EntSwapContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MeasureContext extends FunctionContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(InQuIRParser.EQUAL, 0); }
		public TerminalNode MEASURE() { return getToken(InQuIRParser.MEASURE, 0); }
		public QubitContext qubit() {
			return getRuleContext(QubitContext.class,0);
		}
		public MeasureContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CloseContext extends FunctionContext {
		public TerminalNode CLOSE() { return getToken(InQuIRParser.CLOSE, 0); }
		public SessionContext session() {
			return getRuleContext(SessionContext.class,0);
		}
		public CloseContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RCXCContext extends FunctionContext {
		public TerminalNode RCXC() { return getToken(InQuIRParser.RCXC, 0); }
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public ParticipantContext participant() {
			return getRuleContext(ParticipantContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public SessionContext session() {
			return getRuleContext(SessionContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(InQuIRParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(InQuIRParser.COMMA, i);
		}
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public RCXCContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RCXTContext extends FunctionContext {
		public TerminalNode RCXT() { return getToken(InQuIRParser.RCXT, 0); }
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public ParticipantContext participant() {
			return getRuleContext(ParticipantContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public SessionContext session() {
			return getRuleContext(SessionContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(InQuIRParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(InQuIRParser.COMMA, i);
		}
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public RCXTContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FreeContext extends FunctionContext {
		public TerminalNode FREE() { return getToken(InQuIRParser.FREE, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public FreeContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OpenContext extends FunctionContext {
		public SessionContext session() {
			return getRuleContext(SessionContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(InQuIRParser.EQUAL, 0); }
		public TerminalNode OPEN() { return getToken(InQuIRParser.OPEN, 0); }
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public List<ParticipantContext> participant() {
			return getRuleContexts(ParticipantContext.class);
		}
		public ParticipantContext participant(int i) {
			return getRuleContext(ParticipantContext.class,i);
		}
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public List<TerminalNode> COMMA() { return getTokens(InQuIRParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(InQuIRParser.COMMA, i);
		}
		public OpenContext(FunctionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SendContext extends FunctionContext {
		public TerminalNode SEND() { return getToken(InQuIRParser.SEND, 0); }
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public ParticipantContext participant() {
			return getRuleContext(ParticipantContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public SessionContext session() {
			return getRuleContext(SessionContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(InQuIRParser.COMMA, 0); }
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public TerminalNode COLON() { return getToken(InQuIRParser.COLON, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public SendContext(FunctionContext ctx) { copyFrom(ctx); }
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_function);
		int _la;
		try {
			setState(163);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				_localctx = new OpenContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(62);
				session();
				setState(63);
				match(EQUAL);
				setState(64);
				match(OPEN);
				setState(65);
				match(LBRACK);
				setState(66);
				participant();
				setState(71);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(67);
					match(COMMA);
					setState(68);
					participant();
					}
					}
					setState(73);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(74);
				match(RBRACK);
				}
				break;
			case 2:
				_localctx = new CloseContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(76);
				match(CLOSE);
				{
				setState(77);
				session();
				}
				}
				break;
			case 3:
				_localctx = new InitContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(78);
				value();
				setState(79);
				match(EQUAL);
				setState(80);
				match(INIT);
				setState(81);
				match(LPAREN);
				setState(82);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new FreeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(84);
				match(FREE);
				setState(85);
				value();
				}
				break;
			case 5:
				_localctx = new MeasureContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(86);
				value();
				setState(87);
				match(EQUAL);
				setState(88);
				match(MEASURE);
				setState(89);
				qubit();
				}
				break;
			case 6:
				_localctx = new GenEntContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(91);
				value();
				setState(92);
				match(EQUAL);
				setState(93);
				match(GENENT);
				setState(94);
				match(LBRACK);
				setState(95);
				participant();
				setState(96);
				match(RBRACK);
				setState(97);
				match(LPAREN);
				setState(98);
				label();
				setState(99);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new EntSwapContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(101);
				match(LPAREN);
				setState(102);
				value();
				setState(103);
				match(COMMA);
				setState(104);
				value();
				setState(105);
				match(RPAREN);
				setState(106);
				match(EQUAL);
				setState(107);
				match(ENTSWAP);
				setState(108);
				match(LPAREN);
				setState(109);
				expression(0);
				setState(110);
				match(COMMA);
				setState(111);
				expression(0);
				setState(112);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new RecvContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(114);
				match(RECV);
				setState(115);
				match(LPAREN);
				setState(116);
				session();
				setState(117);
				match(COMMA);
				setState(118);
				label();
				setState(119);
				match(COLON);
				setState(120);
				value();
				setState(121);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new SendContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(123);
				match(SEND);
				setState(124);
				match(LBRACK);
				setState(125);
				participant();
				setState(126);
				match(RBRACK);
				setState(127);
				match(LPAREN);
				setState(128);
				session();
				setState(129);
				match(COMMA);
				setState(130);
				label();
				setState(131);
				match(COLON);
				setState(132);
				value();
				setState(133);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new RCXCContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(135);
				match(RCXC);
				setState(136);
				match(LBRACK);
				setState(137);
				participant();
				setState(138);
				match(RBRACK);
				setState(139);
				match(LPAREN);
				setState(140);
				session();
				setState(141);
				match(COMMA);
				setState(142);
				label();
				setState(143);
				match(COMMA);
				setState(144);
				expression(0);
				setState(145);
				match(COMMA);
				setState(146);
				expression(0);
				setState(147);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new RCXTContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(149);
				match(RCXT);
				setState(150);
				match(LBRACK);
				setState(151);
				participant();
				setState(152);
				match(RBRACK);
				setState(153);
				match(LPAREN);
				setState(154);
				session();
				setState(155);
				match(COMMA);
				setState(156);
				label();
				setState(157);
				match(COMMA);
				setState(158);
				expression(0);
				setState(159);
				match(COMMA);
				setState(160);
				expression(0);
				setState(161);
				match(RPAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Quantum_instructionContext extends ParserRuleContext {
		public Quantum_instructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantum_instruction; }
	 
		public Quantum_instructionContext() { }
		public void copyFrom(Quantum_instructionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ConditionalGateContext extends Quantum_instructionContext {
		public GateContext gate() {
			return getRuleContext(GateContext.class,0);
		}
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public List<QubitContext> qubit() {
			return getRuleContexts(QubitContext.class);
		}
		public QubitContext qubit(int i) {
			return getRuleContext(QubitContext.class,i);
		}
		public ConditionalGateContext(Quantum_instructionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UsualGateContext extends Quantum_instructionContext {
		public GateContext gate() {
			return getRuleContext(GateContext.class,0);
		}
		public List<QubitContext> qubit() {
			return getRuleContexts(QubitContext.class);
		}
		public QubitContext qubit(int i) {
			return getRuleContext(QubitContext.class,i);
		}
		public UsualGateContext(Quantum_instructionContext ctx) { copyFrom(ctx); }
	}

	public final Quantum_instructionContext quantum_instruction() throws RecognitionException {
		Quantum_instructionContext _localctx = new Quantum_instructionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_quantum_instruction);
		int _la;
		try {
			setState(184);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new UsualGateContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(165);
				gate();
				setState(166);
				qubit();
				setState(170);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ID) {
					{
					{
					setState(167);
					qubit();
					}
					}
					setState(172);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				_localctx = new ConditionalGateContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(173);
				gate();
				setState(174);
				match(LBRACK);
				setState(175);
				value();
				setState(176);
				match(RBRACK);
				setState(177);
				qubit();
				setState(181);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ID) {
					{
					{
					setState(178);
					qubit();
					}
					}
					setState(183);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public TerminalNode AND() { return getToken(InQuIRParser.AND, 0); }
		public TerminalNode OR() { return getToken(InQuIRParser.OR, 0); }
		public TerminalNode XOR() { return getToken(InQuIRParser.XOR, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 12;
		enterRecursionRule(_localctx, 12, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case INT:
				{
				setState(187);
				value();
				}
				break;
			case LPAREN:
				{
				setState(188);
				match(LPAREN);
				setState(189);
				expression(0);
				setState(190);
				match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(205);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(203);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(194);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(195);
						match(AND);
						setState(196);
						expression(5);
						}
						break;
					case 2:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(197);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(198);
						match(OR);
						setState(199);
						expression(4);
						}
						break;
					case 3:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(200);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(201);
						match(XOR);
						setState(202);
						expression(3);
						}
						break;
					}
					} 
				}
				setState(207);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueContext extends ParserRuleContext {
		public QubitContext qubit() {
			return getRuleContext(QubitContext.class,0);
		}
		public TerminalNode INT() { return getToken(InQuIRParser.INT, 0); }
		public TerminalNode ID() { return getToken(InQuIRParser.ID, 0); }
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_value);
		try {
			setState(211);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(208);
				qubit();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(209);
				match(INT);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(210);
				match(ID);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GateContext extends ParserRuleContext {
		public TerminalNode X() { return getToken(InQuIRParser.X, 0); }
		public TerminalNode Y() { return getToken(InQuIRParser.Y, 0); }
		public TerminalNode Z() { return getToken(InQuIRParser.Z, 0); }
		public TerminalNode H() { return getToken(InQuIRParser.H, 0); }
		public TerminalNode CX() { return getToken(InQuIRParser.CX, 0); }
		public TerminalNode CZ() { return getToken(InQuIRParser.CZ, 0); }
		public TerminalNode SWAP() { return getToken(InQuIRParser.SWAP, 0); }
		public GateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_gate; }
	}

	public final GateContext gate() throws RecognitionException {
		GateContext _localctx = new GateContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_gate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(213);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 520192L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SessionContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(InQuIRParser.ID, 0); }
		public SessionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_session; }
	}

	public final SessionContext session() throws RecognitionException {
		SessionContext _localctx = new SessionContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_session);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(215);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParticipantContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(InQuIRParser.INT, 0); }
		public ParticipantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_participant; }
	}

	public final ParticipantContext participant() throws RecognitionException {
		ParticipantContext _localctx = new ParticipantContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_participant);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			match(INT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LabelContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(InQuIRParser.ID, 0); }
		public LabelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_label; }
	}

	public final LabelContext label() throws RecognitionException {
		LabelContext _localctx = new LabelContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_label);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(219);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QubitContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(InQuIRParser.ID, 0); }
		public QubitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qubit; }
	}

	public final QubitContext qubit() throws RecognitionException {
		QubitContext _localctx = new QubitContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_qubit);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(221);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 6:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 4);
		case 1:
			return precpred(_ctx, 3);
		case 2:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001,\u00e0\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0001\u0000\u0001\u0000\u0001\u0001\u0005\u0001\u001e\b\u0001"+
		"\n\u0001\f\u0001!\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001+\b\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0005\u00020\b\u0002\n\u0002\f\u0002"+
		"3\t\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003=\b\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0005\u0004F\b\u0004\n\u0004\f\u0004I\t\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u00a4\b\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0005\u0005\u00a9\b\u0005\n\u0005\f\u0005\u00ac"+
		"\t\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0005\u0005\u00b4\b\u0005\n\u0005\f\u0005\u00b7\t\u0005\u0003\u0005"+
		"\u00b9\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0003\u0006\u00c1\b\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0005\u0006\u00cc\b\u0006\n\u0006\f\u0006\u00cf\t\u0006\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0003\u0007\u00d4\b\u0007\u0001\b\u0001\b\u0001\t\u0001"+
		"\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0000"+
		"\u0001\f\r\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016"+
		"\u0018\u0000\u0001\u0001\u0000\f\u0012\u00ea\u0000\u001a\u0001\u0000\u0000"+
		"\u0000\u0002*\u0001\u0000\u0000\u0000\u0004,\u0001\u0000\u0000\u0000\u0006"+
		"<\u0001\u0000\u0000\u0000\b\u00a3\u0001\u0000\u0000\u0000\n\u00b8\u0001"+
		"\u0000\u0000\u0000\f\u00c0\u0001\u0000\u0000\u0000\u000e\u00d3\u0001\u0000"+
		"\u0000\u0000\u0010\u00d5\u0001\u0000\u0000\u0000\u0012\u00d7\u0001\u0000"+
		"\u0000\u0000\u0014\u00d9\u0001\u0000\u0000\u0000\u0016\u00db\u0001\u0000"+
		"\u0000\u0000\u0018\u00dd\u0001\u0000\u0000\u0000\u001a\u001b\u0003\u0002"+
		"\u0001\u0000\u001b\u0001\u0001\u0000\u0000\u0000\u001c\u001e\u0003\u0004"+
		"\u0002\u0000\u001d\u001c\u0001\u0000\u0000\u0000\u001e!\u0001\u0000\u0000"+
		"\u0000\u001f\u001d\u0001\u0000\u0000\u0000\u001f \u0001\u0000\u0000\u0000"+
		" \"\u0001\u0000\u0000\u0000!\u001f\u0001\u0000\u0000\u0000\"+\u0005\u0000"+
		"\u0000\u0001#$\u0005\u001f\u0000\u0000$%\u0003\u0002\u0001\u0000%&\u0005"+
		"\'\u0000\u0000&\'\u0003\u0002\u0001\u0000\'(\u0005 \u0000\u0000()\u0005"+
		"\u0000\u0000\u0001)+\u0001\u0000\u0000\u0000*\u001f\u0001\u0000\u0000"+
		"\u0000*#\u0001\u0000\u0000\u0000+\u0003\u0001\u0000\u0000\u0000,-\u0003"+
		"\u0014\n\u0000-1\u0005\u001d\u0000\u0000.0\u0003\u0006\u0003\u0000/.\u0001"+
		"\u0000\u0000\u000003\u0001\u0000\u0000\u00001/\u0001\u0000\u0000\u0000"+
		"12\u0001\u0000\u0000\u000024\u0001\u0000\u0000\u000031\u0001\u0000\u0000"+
		"\u000045\u0005\u001e\u0000\u00005\u0005\u0001\u0000\u0000\u000067\u0003"+
		"\b\u0004\u000078\u0005%\u0000\u00008=\u0001\u0000\u0000\u00009:\u0003"+
		"\n\u0005\u0000:;\u0005%\u0000\u0000;=\u0001\u0000\u0000\u0000<6\u0001"+
		"\u0000\u0000\u0000<9\u0001\u0000\u0000\u0000=\u0007\u0001\u0000\u0000"+
		"\u0000>?\u0003\u0012\t\u0000?@\u0005(\u0000\u0000@A\u0005\u0001\u0000"+
		"\u0000AB\u0005!\u0000\u0000BG\u0003\u0014\n\u0000CD\u0005#\u0000\u0000"+
		"DF\u0003\u0014\n\u0000EC\u0001\u0000\u0000\u0000FI\u0001\u0000\u0000\u0000"+
		"GE\u0001\u0000\u0000\u0000GH\u0001\u0000\u0000\u0000HJ\u0001\u0000\u0000"+
		"\u0000IG\u0001\u0000\u0000\u0000JK\u0005\"\u0000\u0000K\u00a4\u0001\u0000"+
		"\u0000\u0000LM\u0005\u0002\u0000\u0000M\u00a4\u0003\u0012\t\u0000NO\u0003"+
		"\u000e\u0007\u0000OP\u0005(\u0000\u0000PQ\u0005\u0003\u0000\u0000QR\u0005"+
		"\u001f\u0000\u0000RS\u0005 \u0000\u0000S\u00a4\u0001\u0000\u0000\u0000"+
		"TU\u0005\u0004\u0000\u0000U\u00a4\u0003\u000e\u0007\u0000VW\u0003\u000e"+
		"\u0007\u0000WX\u0005(\u0000\u0000XY\u0005\u0005\u0000\u0000YZ\u0003\u0018"+
		"\f\u0000Z\u00a4\u0001\u0000\u0000\u0000[\\\u0003\u000e\u0007\u0000\\]"+
		"\u0005(\u0000\u0000]^\u0005\u0006\u0000\u0000^_\u0005!\u0000\u0000_`\u0003"+
		"\u0014\n\u0000`a\u0005\"\u0000\u0000ab\u0005\u001f\u0000\u0000bc\u0003"+
		"\u0016\u000b\u0000cd\u0005 \u0000\u0000d\u00a4\u0001\u0000\u0000\u0000"+
		"ef\u0005\u001f\u0000\u0000fg\u0003\u000e\u0007\u0000gh\u0005#\u0000\u0000"+
		"hi\u0003\u000e\u0007\u0000ij\u0005 \u0000\u0000jk\u0005(\u0000\u0000k"+
		"l\u0005\u0007\u0000\u0000lm\u0005\u001f\u0000\u0000mn\u0003\f\u0006\u0000"+
		"no\u0005#\u0000\u0000op\u0003\f\u0006\u0000pq\u0005 \u0000\u0000q\u00a4"+
		"\u0001\u0000\u0000\u0000rs\u0005\b\u0000\u0000st\u0005\u001f\u0000\u0000"+
		"tu\u0003\u0012\t\u0000uv\u0005#\u0000\u0000vw\u0003\u0016\u000b\u0000"+
		"wx\u0005$\u0000\u0000xy\u0003\u000e\u0007\u0000yz\u0005 \u0000\u0000z"+
		"\u00a4\u0001\u0000\u0000\u0000{|\u0005\t\u0000\u0000|}\u0005!\u0000\u0000"+
		"}~\u0003\u0014\n\u0000~\u007f\u0005\"\u0000\u0000\u007f\u0080\u0005\u001f"+
		"\u0000\u0000\u0080\u0081\u0003\u0012\t\u0000\u0081\u0082\u0005#\u0000"+
		"\u0000\u0082\u0083\u0003\u0016\u000b\u0000\u0083\u0084\u0005$\u0000\u0000"+
		"\u0084\u0085\u0003\u000e\u0007\u0000\u0085\u0086\u0005 \u0000\u0000\u0086"+
		"\u00a4\u0001\u0000\u0000\u0000\u0087\u0088\u0005\n\u0000\u0000\u0088\u0089"+
		"\u0005!\u0000\u0000\u0089\u008a\u0003\u0014\n\u0000\u008a\u008b\u0005"+
		"\"\u0000\u0000\u008b\u008c\u0005\u001f\u0000\u0000\u008c\u008d\u0003\u0012"+
		"\t\u0000\u008d\u008e\u0005#\u0000\u0000\u008e\u008f\u0003\u0016\u000b"+
		"\u0000\u008f\u0090\u0005#\u0000\u0000\u0090\u0091\u0003\f\u0006\u0000"+
		"\u0091\u0092\u0005#\u0000\u0000\u0092\u0093\u0003\f\u0006\u0000\u0093"+
		"\u0094\u0005 \u0000\u0000\u0094\u00a4\u0001\u0000\u0000\u0000\u0095\u0096"+
		"\u0005\u000b\u0000\u0000\u0096\u0097\u0005!\u0000\u0000\u0097\u0098\u0003"+
		"\u0014\n\u0000\u0098\u0099\u0005\"\u0000\u0000\u0099\u009a\u0005\u001f"+
		"\u0000\u0000\u009a\u009b\u0003\u0012\t\u0000\u009b\u009c\u0005#\u0000"+
		"\u0000\u009c\u009d\u0003\u0016\u000b\u0000\u009d\u009e\u0005#\u0000\u0000"+
		"\u009e\u009f\u0003\f\u0006\u0000\u009f\u00a0\u0005#\u0000\u0000\u00a0"+
		"\u00a1\u0003\f\u0006\u0000\u00a1\u00a2\u0005 \u0000\u0000\u00a2\u00a4"+
		"\u0001\u0000\u0000\u0000\u00a3>\u0001\u0000\u0000\u0000\u00a3L\u0001\u0000"+
		"\u0000\u0000\u00a3N\u0001\u0000\u0000\u0000\u00a3T\u0001\u0000\u0000\u0000"+
		"\u00a3V\u0001\u0000\u0000\u0000\u00a3[\u0001\u0000\u0000\u0000\u00a3e"+
		"\u0001\u0000\u0000\u0000\u00a3r\u0001\u0000\u0000\u0000\u00a3{\u0001\u0000"+
		"\u0000\u0000\u00a3\u0087\u0001\u0000\u0000\u0000\u00a3\u0095\u0001\u0000"+
		"\u0000\u0000\u00a4\t\u0001\u0000\u0000\u0000\u00a5\u00a6\u0003\u0010\b"+
		"\u0000\u00a6\u00aa\u0003\u0018\f\u0000\u00a7\u00a9\u0003\u0018\f\u0000"+
		"\u00a8\u00a7\u0001\u0000\u0000\u0000\u00a9\u00ac\u0001\u0000\u0000\u0000"+
		"\u00aa\u00a8\u0001\u0000\u0000\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000"+
		"\u00ab\u00b9\u0001\u0000\u0000\u0000\u00ac\u00aa\u0001\u0000\u0000\u0000"+
		"\u00ad\u00ae\u0003\u0010\b\u0000\u00ae\u00af\u0005!\u0000\u0000\u00af"+
		"\u00b0\u0003\u000e\u0007\u0000\u00b0\u00b1\u0005\"\u0000\u0000\u00b1\u00b5"+
		"\u0003\u0018\f\u0000\u00b2\u00b4\u0003\u0018\f\u0000\u00b3\u00b2\u0001"+
		"\u0000\u0000\u0000\u00b4\u00b7\u0001\u0000\u0000\u0000\u00b5\u00b3\u0001"+
		"\u0000\u0000\u0000\u00b5\u00b6\u0001\u0000\u0000\u0000\u00b6\u00b9\u0001"+
		"\u0000\u0000\u0000\u00b7\u00b5\u0001\u0000\u0000\u0000\u00b8\u00a5\u0001"+
		"\u0000\u0000\u0000\u00b8\u00ad\u0001\u0000\u0000\u0000\u00b9\u000b\u0001"+
		"\u0000\u0000\u0000\u00ba\u00bb\u0006\u0006\uffff\uffff\u0000\u00bb\u00c1"+
		"\u0003\u000e\u0007\u0000\u00bc\u00bd\u0005\u001f\u0000\u0000\u00bd\u00be"+
		"\u0003\f\u0006\u0000\u00be\u00bf\u0005 \u0000\u0000\u00bf\u00c1\u0001"+
		"\u0000\u0000\u0000\u00c0\u00ba\u0001\u0000\u0000\u0000\u00c0\u00bc\u0001"+
		"\u0000\u0000\u0000\u00c1\u00cd\u0001\u0000\u0000\u0000\u00c2\u00c3\n\u0004"+
		"\u0000\u0000\u00c3\u00c4\u0005\u0017\u0000\u0000\u00c4\u00cc\u0003\f\u0006"+
		"\u0005\u00c5\u00c6\n\u0003\u0000\u0000\u00c6\u00c7\u0005\u0018\u0000\u0000"+
		"\u00c7\u00cc\u0003\f\u0006\u0004\u00c8\u00c9\n\u0002\u0000\u0000\u00c9"+
		"\u00ca\u0005\u0019\u0000\u0000\u00ca\u00cc\u0003\f\u0006\u0003\u00cb\u00c2"+
		"\u0001\u0000\u0000\u0000\u00cb\u00c5\u0001\u0000\u0000\u0000\u00cb\u00c8"+
		"\u0001\u0000\u0000\u0000\u00cc\u00cf\u0001\u0000\u0000\u0000\u00cd\u00cb"+
		"\u0001\u0000\u0000\u0000\u00cd\u00ce\u0001\u0000\u0000\u0000\u00ce\r\u0001"+
		"\u0000\u0000\u0000\u00cf\u00cd\u0001\u0000\u0000\u0000\u00d0\u00d4\u0003"+
		"\u0018\f\u0000\u00d1\u00d4\u0005\u0015\u0000\u0000\u00d2\u00d4\u0005\u0013"+
		"\u0000\u0000\u00d3\u00d0\u0001\u0000\u0000\u0000\u00d3\u00d1\u0001\u0000"+
		"\u0000\u0000\u00d3\u00d2\u0001\u0000\u0000\u0000\u00d4\u000f\u0001\u0000"+
		"\u0000\u0000\u00d5\u00d6\u0007\u0000\u0000\u0000\u00d6\u0011\u0001\u0000"+
		"\u0000\u0000\u00d7\u00d8\u0005\u0013\u0000\u0000\u00d8\u0013\u0001\u0000"+
		"\u0000\u0000\u00d9\u00da\u0005\u0015\u0000\u0000\u00da\u0015\u0001\u0000"+
		"\u0000\u0000\u00db\u00dc\u0005\u0013\u0000\u0000\u00dc\u0017\u0001\u0000"+
		"\u0000\u0000\u00dd\u00de\u0005\u0013\u0000\u0000\u00de\u0019\u0001\u0000"+
		"\u0000\u0000\r\u001f*1<G\u00a3\u00aa\u00b5\u00b8\u00c0\u00cb\u00cd\u00d3";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}