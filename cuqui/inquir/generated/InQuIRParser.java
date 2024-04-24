// Generated from InQuIRParser.g4 by ANTLR 4.13.1
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
		RULE_mainprogram = 0, RULE_system = 1, RULE_process = 2, RULE_instruction = 3, 
		RULE_function = 4, RULE_quantum_instruction = 5, RULE_expression = 6, 
		RULE_value = 7, RULE_gate = 8, RULE_session = 9, RULE_participant = 10, 
		RULE_label = 11, RULE_qubit = 12;
	private static String[] makeRuleNames() {
		return new String[] {
			"mainprogram", "system", "process", "instruction", "function", "quantum_instruction", 
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterMainprogram(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitMainprogram(this);
		}
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterSystem(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitSystem(this);
		}
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
		public List<InstructionContext> instruction() {
			return getRuleContexts(InstructionContext.class);
		}
		public InstructionContext instruction(int i) {
			return getRuleContext(InstructionContext.class,i);
		}
		public ProcessContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_process; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterProcess(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitProcess(this);
		}
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
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2217738004L) != 0)) {
				{
				{
				setState(46);
				instruction();
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
	public static class InstructionContext extends ParserRuleContext {
		public FunctionContext function() {
			return getRuleContext(FunctionContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(InQuIRParser.SEMICOLON, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(InQuIRParser.EQUAL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Quantum_instructionContext quantum_instruction() {
			return getRuleContext(Quantum_instructionContext.class,0);
		}
		public TerminalNode IF() { return getToken(InQuIRParser.IF, 0); }
		public TerminalNode THEN() { return getToken(InQuIRParser.THEN, 0); }
		public List<ProcessContext> process() {
			return getRuleContexts(ProcessContext.class);
		}
		public ProcessContext process(int i) {
			return getRuleContext(ProcessContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(InQuIRParser.ELSE, 0); }
		public SessionContext session() {
			return getRuleContext(SessionContext.class,0);
		}
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public TerminalNode EXCLAM() { return getToken(InQuIRParser.EXCLAM, 0); }
		public TerminalNode LPAREN() { return getToken(InQuIRParser.LPAREN, 0); }
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public TerminalNode COLON() { return getToken(InQuIRParser.COLON, 0); }
		public TerminalNode RPAREN() { return getToken(InQuIRParser.RPAREN, 0); }
		public TerminalNode QUESTION() { return getToken(InQuIRParser.QUESTION, 0); }
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterInstruction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitInstruction(this);
		}
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_instruction);
		try {
			setState(93);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(54);
				function();
				setState(55);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(57);
				value();
				setState(58);
				match(EQUAL);
				setState(59);
				expression(0);
				setState(60);
				match(SEMICOLON);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(62);
				quantum_instruction();
				setState(63);
				match(SEMICOLON);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(65);
				match(IF);
				setState(66);
				expression(0);
				setState(67);
				match(THEN);
				setState(68);
				process();
				setState(69);
				match(ELSE);
				setState(70);
				process();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(72);
				session();
				setState(73);
				match(LBRACK);
				setState(74);
				process();
				setState(75);
				match(RBRACK);
				setState(76);
				match(EXCLAM);
				setState(77);
				match(LPAREN);
				setState(78);
				label();
				setState(79);
				match(COLON);
				setState(80);
				expression(0);
				setState(81);
				match(RPAREN);
				setState(82);
				match(SEMICOLON);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(84);
				session();
				setState(85);
				match(QUESTION);
				setState(86);
				match(LPAREN);
				setState(87);
				label();
				setState(88);
				match(COLON);
				setState(89);
				expression(0);
				setState(90);
				match(RPAREN);
				setState(91);
				match(SEMICOLON);
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
	public static class FunctionContext extends ParserRuleContext {
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
		public TerminalNode CLOSE() { return getToken(InQuIRParser.CLOSE, 0); }
		public List<ValueContext> value() {
			return getRuleContexts(ValueContext.class);
		}
		public ValueContext value(int i) {
			return getRuleContext(ValueContext.class,i);
		}
		public TerminalNode INIT() { return getToken(InQuIRParser.INIT, 0); }
		public List<TerminalNode> LPAREN() { return getTokens(InQuIRParser.LPAREN); }
		public TerminalNode LPAREN(int i) {
			return getToken(InQuIRParser.LPAREN, i);
		}
		public List<TerminalNode> RPAREN() { return getTokens(InQuIRParser.RPAREN); }
		public TerminalNode RPAREN(int i) {
			return getToken(InQuIRParser.RPAREN, i);
		}
		public TerminalNode FREE() { return getToken(InQuIRParser.FREE, 0); }
		public TerminalNode MEASURE() { return getToken(InQuIRParser.MEASURE, 0); }
		public QubitContext qubit() {
			return getRuleContext(QubitContext.class,0);
		}
		public TerminalNode GENENT() { return getToken(InQuIRParser.GENENT, 0); }
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public TerminalNode ENTSWAP() { return getToken(InQuIRParser.ENTSWAP, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode RECV() { return getToken(InQuIRParser.RECV, 0); }
		public TerminalNode COLON() { return getToken(InQuIRParser.COLON, 0); }
		public TerminalNode SEND() { return getToken(InQuIRParser.SEND, 0); }
		public TerminalNode RCXC() { return getToken(InQuIRParser.RCXC, 0); }
		public TerminalNode RCXT() { return getToken(InQuIRParser.RCXT, 0); }
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterFunction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitFunction(this);
		}
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_function);
		int _la;
		try {
			setState(201);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(95);
				session();
				setState(96);
				match(EQUAL);
				setState(97);
				match(OPEN);
				setState(98);
				match(LBRACK);
				setState(99);
				participant();
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(100);
					match(COMMA);
					setState(101);
					participant();
					}
					}
					setState(106);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(107);
				match(RBRACK);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(109);
				match(CLOSE);
				{
				setState(110);
				session();
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(111);
				value();
				setState(112);
				match(EQUAL);
				setState(113);
				match(INIT);
				setState(114);
				match(LPAREN);
				setState(115);
				match(RPAREN);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(117);
				match(FREE);
				setState(118);
				value();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(119);
				value();
				setState(120);
				match(EQUAL);
				setState(121);
				match(MEASURE);
				setState(122);
				qubit();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(124);
				value();
				setState(125);
				match(EQUAL);
				setState(126);
				match(GENENT);
				setState(127);
				match(LBRACK);
				setState(128);
				participant();
				setState(129);
				match(RBRACK);
				setState(130);
				match(LPAREN);
				setState(131);
				label();
				setState(132);
				match(RPAREN);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(134);
				match(LPAREN);
				setState(135);
				value();
				setState(136);
				match(COMMA);
				setState(137);
				value();
				setState(138);
				match(RPAREN);
				setState(139);
				match(EQUAL);
				setState(140);
				match(ENTSWAP);
				setState(141);
				match(LPAREN);
				setState(142);
				expression(0);
				setState(143);
				match(COMMA);
				setState(144);
				expression(0);
				setState(145);
				match(RPAREN);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(147);
				match(RECV);
				setState(148);
				match(LPAREN);
				setState(149);
				session();
				setState(150);
				match(COMMA);
				setState(151);
				label();
				setState(152);
				match(COLON);
				setState(153);
				value();
				setState(154);
				match(RPAREN);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(156);
				match(SEND);
				setState(157);
				match(LBRACK);
				setState(158);
				participant();
				setState(159);
				match(RBRACK);
				setState(160);
				match(LPAREN);
				setState(161);
				session();
				setState(162);
				match(COMMA);
				setState(163);
				label();
				setState(164);
				match(COLON);
				setState(165);
				value();
				setState(166);
				match(RPAREN);
				setState(167);
				match(COMMA);
				setState(168);
				expression(0);
				setState(169);
				match(COMMA);
				setState(170);
				expression(0);
				setState(171);
				match(RPAREN);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(173);
				match(RCXC);
				setState(174);
				match(LBRACK);
				setState(175);
				participant();
				setState(176);
				match(RBRACK);
				setState(177);
				match(LPAREN);
				setState(178);
				session();
				setState(179);
				match(COMMA);
				setState(180);
				label();
				setState(181);
				match(COMMA);
				setState(182);
				expression(0);
				setState(183);
				match(COMMA);
				setState(184);
				expression(0);
				setState(185);
				match(RPAREN);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(187);
				match(RCXT);
				setState(188);
				match(LBRACK);
				setState(189);
				participant();
				setState(190);
				match(RBRACK);
				setState(191);
				match(LPAREN);
				setState(192);
				session();
				setState(193);
				match(COMMA);
				setState(194);
				label();
				setState(195);
				match(COMMA);
				setState(196);
				expression(0);
				setState(197);
				match(COMMA);
				setState(198);
				expression(0);
				setState(199);
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
		public GateContext gate() {
			return getRuleContext(GateContext.class,0);
		}
		public List<QubitContext> qubit() {
			return getRuleContexts(QubitContext.class);
		}
		public QubitContext qubit(int i) {
			return getRuleContext(QubitContext.class,i);
		}
		public TerminalNode LBRACK() { return getToken(InQuIRParser.LBRACK, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(InQuIRParser.RBRACK, 0); }
		public Quantum_instructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantum_instruction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterQuantum_instruction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitQuantum_instruction(this);
		}
	}

	public final Quantum_instructionContext quantum_instruction() throws RecognitionException {
		Quantum_instructionContext _localctx = new Quantum_instructionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_quantum_instruction);
		int _la;
		try {
			setState(222);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(203);
				gate();
				setState(204);
				qubit();
				setState(208);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ID) {
					{
					{
					setState(205);
					qubit();
					}
					}
					setState(210);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(211);
				gate();
				setState(212);
				match(LBRACK);
				setState(213);
				value();
				setState(214);
				match(RBRACK);
				setState(215);
				qubit();
				setState(219);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ID) {
					{
					{
					setState(216);
					qubit();
					}
					}
					setState(221);
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitExpression(this);
		}
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
			setState(230);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case INT:
				{
				setState(225);
				value();
				}
				break;
			case LPAREN:
				{
				setState(226);
				match(LPAREN);
				setState(227);
				expression(0);
				setState(228);
				match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(243);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(241);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(232);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(233);
						match(AND);
						setState(234);
						expression(5);
						}
						break;
					case 2:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(235);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(236);
						match(OR);
						setState(237);
						expression(4);
						}
						break;
					case 3:
						{
						_localctx = new ExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(238);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(239);
						match(XOR);
						setState(240);
						expression(3);
						}
						break;
					}
					} 
				}
				setState(245);
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitValue(this);
		}
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_value);
		try {
			setState(249);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(246);
				qubit();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(247);
				match(INT);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(248);
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterGate(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitGate(this);
		}
	}

	public final GateContext gate() throws RecognitionException {
		GateContext _localctx = new GateContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_gate);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(251);
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterSession(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitSession(this);
		}
	}

	public final SessionContext session() throws RecognitionException {
		SessionContext _localctx = new SessionContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_session);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(253);
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterParticipant(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitParticipant(this);
		}
	}

	public final ParticipantContext participant() throws RecognitionException {
		ParticipantContext _localctx = new ParticipantContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_participant);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(255);
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterLabel(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitLabel(this);
		}
	}

	public final LabelContext label() throws RecognitionException {
		LabelContext _localctx = new LabelContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_label);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
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
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).enterQubit(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof InQuIRParserListener ) ((InQuIRParserListener)listener).exitQubit(this);
		}
	}

	public final QubitContext qubit() throws RecognitionException {
		QubitContext _localctx = new QubitContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_qubit);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(259);
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
		"\u0004\u0001,\u0106\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0001\u0000\u0001\u0000\u0001\u0001\u0005\u0001\u001e\b\u0001"+
		"\n\u0001\f\u0001!\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001+\b\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0005\u00020\b\u0002\n\u0002\f\u0002"+
		"3\t\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0003\u0003^\b\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004g\b\u0004\n\u0004\f\u0004"+
		"j\t\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
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
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004"+
		"\u00ca\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0005\u0005\u00cf\b"+
		"\u0005\n\u0005\f\u0005\u00d2\t\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0005\u0005\u00da\b\u0005\n\u0005"+
		"\f\u0005\u00dd\t\u0005\u0003\u0005\u00df\b\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006\u00e7\b\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0005\u0006\u00f2\b\u0006\n\u0006"+
		"\f\u0006\u00f5\t\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007"+
		"\u00fa\b\u0007\u0001\b\u0001\b\u0001\t\u0001\t\u0001\n\u0001\n\u0001\u000b"+
		"\u0001\u000b\u0001\f\u0001\f\u0001\f\u0000\u0001\f\r\u0000\u0002\u0004"+
		"\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u0000\u0001\u0001\u0000"+
		"\f\u0012\u0114\u0000\u001a\u0001\u0000\u0000\u0000\u0002*\u0001\u0000"+
		"\u0000\u0000\u0004,\u0001\u0000\u0000\u0000\u0006]\u0001\u0000\u0000\u0000"+
		"\b\u00c9\u0001\u0000\u0000\u0000\n\u00de\u0001\u0000\u0000\u0000\f\u00e6"+
		"\u0001\u0000\u0000\u0000\u000e\u00f9\u0001\u0000\u0000\u0000\u0010\u00fb"+
		"\u0001\u0000\u0000\u0000\u0012\u00fd\u0001\u0000\u0000\u0000\u0014\u00ff"+
		"\u0001\u0000\u0000\u0000\u0016\u0101\u0001\u0000\u0000\u0000\u0018\u0103"+
		"\u0001\u0000\u0000\u0000\u001a\u001b\u0003\u0002\u0001\u0000\u001b\u0001"+
		"\u0001\u0000\u0000\u0000\u001c\u001e\u0003\u0004\u0002\u0000\u001d\u001c"+
		"\u0001\u0000\u0000\u0000\u001e!\u0001\u0000\u0000\u0000\u001f\u001d\u0001"+
		"\u0000\u0000\u0000\u001f \u0001\u0000\u0000\u0000 \"\u0001\u0000\u0000"+
		"\u0000!\u001f\u0001\u0000\u0000\u0000\"+\u0005\u0000\u0000\u0001#$\u0005"+
		"\u001f\u0000\u0000$%\u0003\u0002\u0001\u0000%&\u0005\'\u0000\u0000&\'"+
		"\u0003\u0002\u0001\u0000\'(\u0005 \u0000\u0000()\u0005\u0000\u0000\u0001"+
		")+\u0001\u0000\u0000\u0000*\u001f\u0001\u0000\u0000\u0000*#\u0001\u0000"+
		"\u0000\u0000+\u0003\u0001\u0000\u0000\u0000,-\u0003\u0014\n\u0000-1\u0005"+
		"\u001d\u0000\u0000.0\u0003\u0006\u0003\u0000/.\u0001\u0000\u0000\u0000"+
		"03\u0001\u0000\u0000\u00001/\u0001\u0000\u0000\u000012\u0001\u0000\u0000"+
		"\u000024\u0001\u0000\u0000\u000031\u0001\u0000\u0000\u000045\u0005\u001e"+
		"\u0000\u00005\u0005\u0001\u0000\u0000\u000067\u0003\b\u0004\u000078\u0005"+
		"%\u0000\u00008^\u0001\u0000\u0000\u00009:\u0003\u000e\u0007\u0000:;\u0005"+
		"(\u0000\u0000;<\u0003\f\u0006\u0000<=\u0005%\u0000\u0000=^\u0001\u0000"+
		"\u0000\u0000>?\u0003\n\u0005\u0000?@\u0005%\u0000\u0000@^\u0001\u0000"+
		"\u0000\u0000AB\u0005\u001a\u0000\u0000BC\u0003\f\u0006\u0000CD\u0005\u001c"+
		"\u0000\u0000DE\u0003\u0004\u0002\u0000EF\u0005\u001b\u0000\u0000FG\u0003"+
		"\u0004\u0002\u0000G^\u0001\u0000\u0000\u0000HI\u0003\u0012\t\u0000IJ\u0005"+
		"!\u0000\u0000JK\u0003\u0004\u0002\u0000KL\u0005\"\u0000\u0000LM\u0005"+
		")\u0000\u0000MN\u0005\u001f\u0000\u0000NO\u0003\u0016\u000b\u0000OP\u0005"+
		"$\u0000\u0000PQ\u0003\f\u0006\u0000QR\u0005 \u0000\u0000RS\u0005%\u0000"+
		"\u0000S^\u0001\u0000\u0000\u0000TU\u0003\u0012\t\u0000UV\u0005*\u0000"+
		"\u0000VW\u0005\u001f\u0000\u0000WX\u0003\u0016\u000b\u0000XY\u0005$\u0000"+
		"\u0000YZ\u0003\f\u0006\u0000Z[\u0005 \u0000\u0000[\\\u0005%\u0000\u0000"+
		"\\^\u0001\u0000\u0000\u0000]6\u0001\u0000\u0000\u0000]9\u0001\u0000\u0000"+
		"\u0000]>\u0001\u0000\u0000\u0000]A\u0001\u0000\u0000\u0000]H\u0001\u0000"+
		"\u0000\u0000]T\u0001\u0000\u0000\u0000^\u0007\u0001\u0000\u0000\u0000"+
		"_`\u0003\u0012\t\u0000`a\u0005(\u0000\u0000ab\u0005\u0001\u0000\u0000"+
		"bc\u0005!\u0000\u0000ch\u0003\u0014\n\u0000de\u0005#\u0000\u0000eg\u0003"+
		"\u0014\n\u0000fd\u0001\u0000\u0000\u0000gj\u0001\u0000\u0000\u0000hf\u0001"+
		"\u0000\u0000\u0000hi\u0001\u0000\u0000\u0000ik\u0001\u0000\u0000\u0000"+
		"jh\u0001\u0000\u0000\u0000kl\u0005\"\u0000\u0000l\u00ca\u0001\u0000\u0000"+
		"\u0000mn\u0005\u0002\u0000\u0000n\u00ca\u0003\u0012\t\u0000op\u0003\u000e"+
		"\u0007\u0000pq\u0005(\u0000\u0000qr\u0005\u0003\u0000\u0000rs\u0005\u001f"+
		"\u0000\u0000st\u0005 \u0000\u0000t\u00ca\u0001\u0000\u0000\u0000uv\u0005"+
		"\u0004\u0000\u0000v\u00ca\u0003\u000e\u0007\u0000wx\u0003\u000e\u0007"+
		"\u0000xy\u0005(\u0000\u0000yz\u0005\u0005\u0000\u0000z{\u0003\u0018\f"+
		"\u0000{\u00ca\u0001\u0000\u0000\u0000|}\u0003\u000e\u0007\u0000}~\u0005"+
		"(\u0000\u0000~\u007f\u0005\u0006\u0000\u0000\u007f\u0080\u0005!\u0000"+
		"\u0000\u0080\u0081\u0003\u0014\n\u0000\u0081\u0082\u0005\"\u0000\u0000"+
		"\u0082\u0083\u0005\u001f\u0000\u0000\u0083\u0084\u0003\u0016\u000b\u0000"+
		"\u0084\u0085\u0005 \u0000\u0000\u0085\u00ca\u0001\u0000\u0000\u0000\u0086"+
		"\u0087\u0005\u001f\u0000\u0000\u0087\u0088\u0003\u000e\u0007\u0000\u0088"+
		"\u0089\u0005#\u0000\u0000\u0089\u008a\u0003\u000e\u0007\u0000\u008a\u008b"+
		"\u0005 \u0000\u0000\u008b\u008c\u0005(\u0000\u0000\u008c\u008d\u0005\u0007"+
		"\u0000\u0000\u008d\u008e\u0005\u001f\u0000\u0000\u008e\u008f\u0003\f\u0006"+
		"\u0000\u008f\u0090\u0005#\u0000\u0000\u0090\u0091\u0003\f\u0006\u0000"+
		"\u0091\u0092\u0005 \u0000\u0000\u0092\u00ca\u0001\u0000\u0000\u0000\u0093"+
		"\u0094\u0005\b\u0000\u0000\u0094\u0095\u0005\u001f\u0000\u0000\u0095\u0096"+
		"\u0003\u0012\t\u0000\u0096\u0097\u0005#\u0000\u0000\u0097\u0098\u0003"+
		"\u0016\u000b\u0000\u0098\u0099\u0005$\u0000\u0000\u0099\u009a\u0003\u000e"+
		"\u0007\u0000\u009a\u009b\u0005 \u0000\u0000\u009b\u00ca\u0001\u0000\u0000"+
		"\u0000\u009c\u009d\u0005\t\u0000\u0000\u009d\u009e\u0005!\u0000\u0000"+
		"\u009e\u009f\u0003\u0014\n\u0000\u009f\u00a0\u0005\"\u0000\u0000\u00a0"+
		"\u00a1\u0005\u001f\u0000\u0000\u00a1\u00a2\u0003\u0012\t\u0000\u00a2\u00a3"+
		"\u0005#\u0000\u0000\u00a3\u00a4\u0003\u0016\u000b\u0000\u00a4\u00a5\u0005"+
		"$\u0000\u0000\u00a5\u00a6\u0003\u000e\u0007\u0000\u00a6\u00a7\u0005 \u0000"+
		"\u0000\u00a7\u00a8\u0005#\u0000\u0000\u00a8\u00a9\u0003\f\u0006\u0000"+
		"\u00a9\u00aa\u0005#\u0000\u0000\u00aa\u00ab\u0003\f\u0006\u0000\u00ab"+
		"\u00ac\u0005 \u0000\u0000\u00ac\u00ca\u0001\u0000\u0000\u0000\u00ad\u00ae"+
		"\u0005\n\u0000\u0000\u00ae\u00af\u0005!\u0000\u0000\u00af\u00b0\u0003"+
		"\u0014\n\u0000\u00b0\u00b1\u0005\"\u0000\u0000\u00b1\u00b2\u0005\u001f"+
		"\u0000\u0000\u00b2\u00b3\u0003\u0012\t\u0000\u00b3\u00b4\u0005#\u0000"+
		"\u0000\u00b4\u00b5\u0003\u0016\u000b\u0000\u00b5\u00b6\u0005#\u0000\u0000"+
		"\u00b6\u00b7\u0003\f\u0006\u0000\u00b7\u00b8\u0005#\u0000\u0000\u00b8"+
		"\u00b9\u0003\f\u0006\u0000\u00b9\u00ba\u0005 \u0000\u0000\u00ba\u00ca"+
		"\u0001\u0000\u0000\u0000\u00bb\u00bc\u0005\u000b\u0000\u0000\u00bc\u00bd"+
		"\u0005!\u0000\u0000\u00bd\u00be\u0003\u0014\n\u0000\u00be\u00bf\u0005"+
		"\"\u0000\u0000\u00bf\u00c0\u0005\u001f\u0000\u0000\u00c0\u00c1\u0003\u0012"+
		"\t\u0000\u00c1\u00c2\u0005#\u0000\u0000\u00c2\u00c3\u0003\u0016\u000b"+
		"\u0000\u00c3\u00c4\u0005#\u0000\u0000\u00c4\u00c5\u0003\f\u0006\u0000"+
		"\u00c5\u00c6\u0005#\u0000\u0000\u00c6\u00c7\u0003\f\u0006\u0000\u00c7"+
		"\u00c8\u0005 \u0000\u0000\u00c8\u00ca\u0001\u0000\u0000\u0000\u00c9_\u0001"+
		"\u0000\u0000\u0000\u00c9m\u0001\u0000\u0000\u0000\u00c9o\u0001\u0000\u0000"+
		"\u0000\u00c9u\u0001\u0000\u0000\u0000\u00c9w\u0001\u0000\u0000\u0000\u00c9"+
		"|\u0001\u0000\u0000\u0000\u00c9\u0086\u0001\u0000\u0000\u0000\u00c9\u0093"+
		"\u0001\u0000\u0000\u0000\u00c9\u009c\u0001\u0000\u0000\u0000\u00c9\u00ad"+
		"\u0001\u0000\u0000\u0000\u00c9\u00bb\u0001\u0000\u0000\u0000\u00ca\t\u0001"+
		"\u0000\u0000\u0000\u00cb\u00cc\u0003\u0010\b\u0000\u00cc\u00d0\u0003\u0018"+
		"\f\u0000\u00cd\u00cf\u0003\u0018\f\u0000\u00ce\u00cd\u0001\u0000\u0000"+
		"\u0000\u00cf\u00d2\u0001\u0000\u0000\u0000\u00d0\u00ce\u0001\u0000\u0000"+
		"\u0000\u00d0\u00d1\u0001\u0000\u0000\u0000\u00d1\u00df\u0001\u0000\u0000"+
		"\u0000\u00d2\u00d0\u0001\u0000\u0000\u0000\u00d3\u00d4\u0003\u0010\b\u0000"+
		"\u00d4\u00d5\u0005!\u0000\u0000\u00d5\u00d6\u0003\u000e\u0007\u0000\u00d6"+
		"\u00d7\u0005\"\u0000\u0000\u00d7\u00db\u0003\u0018\f\u0000\u00d8\u00da"+
		"\u0003\u0018\f\u0000\u00d9\u00d8\u0001\u0000\u0000\u0000\u00da\u00dd\u0001"+
		"\u0000\u0000\u0000\u00db\u00d9\u0001\u0000\u0000\u0000\u00db\u00dc\u0001"+
		"\u0000\u0000\u0000\u00dc\u00df\u0001\u0000\u0000\u0000\u00dd\u00db\u0001"+
		"\u0000\u0000\u0000\u00de\u00cb\u0001\u0000\u0000\u0000\u00de\u00d3\u0001"+
		"\u0000\u0000\u0000\u00df\u000b\u0001\u0000\u0000\u0000\u00e0\u00e1\u0006"+
		"\u0006\uffff\uffff\u0000\u00e1\u00e7\u0003\u000e\u0007\u0000\u00e2\u00e3"+
		"\u0005\u001f\u0000\u0000\u00e3\u00e4\u0003\f\u0006\u0000\u00e4\u00e5\u0005"+
		" \u0000\u0000\u00e5\u00e7\u0001\u0000\u0000\u0000\u00e6\u00e0\u0001\u0000"+
		"\u0000\u0000\u00e6\u00e2\u0001\u0000\u0000\u0000\u00e7\u00f3\u0001\u0000"+
		"\u0000\u0000\u00e8\u00e9\n\u0004\u0000\u0000\u00e9\u00ea\u0005\u0017\u0000"+
		"\u0000\u00ea\u00f2\u0003\f\u0006\u0005\u00eb\u00ec\n\u0003\u0000\u0000"+
		"\u00ec\u00ed\u0005\u0018\u0000\u0000\u00ed\u00f2\u0003\f\u0006\u0004\u00ee"+
		"\u00ef\n\u0002\u0000\u0000\u00ef\u00f0\u0005\u0019\u0000\u0000\u00f0\u00f2"+
		"\u0003\f\u0006\u0003\u00f1\u00e8\u0001\u0000\u0000\u0000\u00f1\u00eb\u0001"+
		"\u0000\u0000\u0000\u00f1\u00ee\u0001\u0000\u0000\u0000\u00f2\u00f5\u0001"+
		"\u0000\u0000\u0000\u00f3\u00f1\u0001\u0000\u0000\u0000\u00f3\u00f4\u0001"+
		"\u0000\u0000\u0000\u00f4\r\u0001\u0000\u0000\u0000\u00f5\u00f3\u0001\u0000"+
		"\u0000\u0000\u00f6\u00fa\u0003\u0018\f\u0000\u00f7\u00fa\u0005\u0015\u0000"+
		"\u0000\u00f8\u00fa\u0005\u0013\u0000\u0000\u00f9\u00f6\u0001\u0000\u0000"+
		"\u0000\u00f9\u00f7\u0001\u0000\u0000\u0000\u00f9\u00f8\u0001\u0000\u0000"+
		"\u0000\u00fa\u000f\u0001\u0000\u0000\u0000\u00fb\u00fc\u0007\u0000\u0000"+
		"\u0000\u00fc\u0011\u0001\u0000\u0000\u0000\u00fd\u00fe\u0005\u0013\u0000"+
		"\u0000\u00fe\u0013\u0001\u0000\u0000\u0000\u00ff\u0100\u0005\u0015\u0000"+
		"\u0000\u0100\u0015\u0001\u0000\u0000\u0000\u0101\u0102\u0005\u0013\u0000"+
		"\u0000\u0102\u0017\u0001\u0000\u0000\u0000\u0103\u0104\u0005\u0013\u0000"+
		"\u0000\u0104\u0019\u0001\u0000\u0000\u0000\r\u001f*1]h\u00c9\u00d0\u00db"+
		"\u00de\u00e6\u00f1\u00f3\u00f9";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}