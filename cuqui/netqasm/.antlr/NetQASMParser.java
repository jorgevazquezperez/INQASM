// Generated from /home/jorge.vazquez.perez/Nextcloud/Proyectos/InQuIR_Compiler/cuqui/netqasm/NetQASMParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class NetQASMParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		PREAMBLE_NETQASM=1, PREAMBLE_APPID=2, PREAMBLE_DEFINE=3, IMMEDIATE=4, 
		C_REG=5, R_REG=6, Q_REG=7, M_REG=8, ADDRESS=9, ARRAY_ENTRY=10, ARRAY_SLICE=11, 
		VAR=12, QALLOC=13, ARRAY=14, INIT=15, SET=16, STORE=17, LOAD=18, UNDEF=19, 
		LEA=20, JMP=21, BEZ=22, BNZ=23, BEQ=24, BNE=25, BLT=26, BGE=27, ADD=28, 
		SUB=29, ADDM=30, SUBM=31, X=32, Y=33, Z=34, H=35, S=36, K=37, T=38, ROT_X=39, 
		ROT_Y=40, ROT_Z=41, CNOT=42, CPHASE=43, MEAS=44, PMR_XYX=45, PMR_ZXZ=46, 
		PMR_YZY=47, CREATE_EPR=48, RECV_EPR=49, WAIT_ALL=50, WAIT_ANY=51, WAIT_SINGLE=52, 
		QFREE=53, RET_REG=54, RET_ARR=55, COMMENT=56, LINE_NUMBER=57, ID=58, VERSION_NUMBER=59, 
		NUMBER=60, HASH=61, LCURLY=62, RCURLY=63, EOL=64, WS=65;
	public static final int
		RULE_program = 0, RULE_preamble = 1, RULE_line = 2, RULE_instruction = 3, 
		RULE_regInstr = 4, RULE_regRegInstr = 5, RULE_regImmImmInstr = 6, RULE_regRegRegInstr = 7, 
		RULE_regRegRegRegInstr = 8, RULE_immInstr = 9, RULE_regRegImmInstr = 10, 
		RULE_regImmInstr = 11, RULE_regEntryInstr = 12, RULE_regAddrInstr = 13, 
		RULE_arrayEntryInstr = 14, RULE_arraySliceInstr = 15, RULE_addrInstr = 16, 
		RULE_reg5Instr = 17, RULE_classicalReg = 18, RULE_version = 19, RULE_appid = 20, 
		RULE_define = 21;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "preamble", "line", "instruction", "regInstr", "regRegInstr", 
			"regImmImmInstr", "regRegRegInstr", "regRegRegRegInstr", "immInstr", 
			"regRegImmInstr", "regImmInstr", "regEntryInstr", "regAddrInstr", "arrayEntryInstr", 
			"arraySliceInstr", "addrInstr", "reg5Instr", "classicalReg", "version", 
			"appid", "define"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'NETQASM'", "'APPID'", "'DEFINE'", null, null, null, null, null, 
			null, null, null, null, "'qalloc'", "'array'", "'init'", "'set'", "'store'", 
			"'load'", "'undef'", "'lea'", "'jmp'", "'bez'", "'bnz'", "'beq'", "'bne'", 
			"'blt'", "'bge'", "'add'", "'sub'", "'addm'", "'subm'", "'x'", "'y'", 
			"'z'", "'h'", "'s'", "'k'", "'t'", "'rot_x'", "'rot_y'", "'rot_z'", "'cnot'", 
			"'cphase'", "'meas'", "'pmr_xyx'", "'pmr_zxz'", "'pmr_yzy'", "'create_epr'", 
			"'recv_epr'", "'wait_all'", "'wait_any'", "'wait_single'", "'qfree'", 
			"'ret_reg'", "'ret_arr'", null, null, null, null, null, "'#'", "'{'", 
			"'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "PREAMBLE_NETQASM", "PREAMBLE_APPID", "PREAMBLE_DEFINE", "IMMEDIATE", 
			"C_REG", "R_REG", "Q_REG", "M_REG", "ADDRESS", "ARRAY_ENTRY", "ARRAY_SLICE", 
			"VAR", "QALLOC", "ARRAY", "INIT", "SET", "STORE", "LOAD", "UNDEF", "LEA", 
			"JMP", "BEZ", "BNZ", "BEQ", "BNE", "BLT", "BGE", "ADD", "SUB", "ADDM", 
			"SUBM", "X", "Y", "Z", "H", "S", "K", "T", "ROT_X", "ROT_Y", "ROT_Z", 
			"CNOT", "CPHASE", "MEAS", "PMR_XYX", "PMR_ZXZ", "PMR_YZY", "CREATE_EPR", 
			"RECV_EPR", "WAIT_ALL", "WAIT_ANY", "WAIT_SINGLE", "QFREE", "RET_REG", 
			"RET_ARR", "COMMENT", "LINE_NUMBER", "ID", "VERSION_NUMBER", "NUMBER", 
			"HASH", "LCURLY", "RCURLY", "EOL", "WS"
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
	public String getGrammarFileName() { return "NetQASMParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public NetQASMParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public PreambleContext preamble() {
			return getRuleContext(PreambleContext.class,0);
		}
		public TerminalNode EOF() { return getToken(NetQASMParser.EOF, 0); }
		public List<TerminalNode> EOL() { return getTokens(NetQASMParser.EOL); }
		public TerminalNode EOL(int i) {
			return getToken(NetQASMParser.EOL, i);
		}
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			preamble();
			setState(48);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==EOL) {
				{
				{
				setState(45);
				match(EOL);
				}
				}
				setState(50);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(54);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 125854498961743872L) != 0)) {
				{
				{
				setState(51);
				line();
				}
				}
				setState(56);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(57);
			match(EOF);
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
	public static class PreambleContext extends ParserRuleContext {
		public VersionContext version() {
			return getRuleContext(VersionContext.class,0);
		}
		public List<TerminalNode> EOL() { return getTokens(NetQASMParser.EOL); }
		public TerminalNode EOL(int i) {
			return getToken(NetQASMParser.EOL, i);
		}
		public AppidContext appid() {
			return getRuleContext(AppidContext.class,0);
		}
		public List<DefineContext> define() {
			return getRuleContexts(DefineContext.class);
		}
		public DefineContext define(int i) {
			return getRuleContext(DefineContext.class,i);
		}
		public PreambleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_preamble; }
	}

	public final PreambleContext preamble() throws RecognitionException {
		PreambleContext _localctx = new PreambleContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_preamble);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(59);
			version();
			setState(60);
			match(EOL);
			setState(61);
			appid();
			setState(62);
			match(EOL);
			setState(68);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==HASH) {
				{
				{
				setState(63);
				define();
				setState(64);
				match(EOL);
				}
				}
				setState(70);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
	public static class LineContext extends ParserRuleContext {
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public TerminalNode EOL() { return getToken(NetQASMParser.EOL, 0); }
		public TerminalNode COMMENT() { return getToken(NetQASMParser.COMMENT, 0); }
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_line);
		try {
			setState(76);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case QALLOC:
			case ARRAY:
			case INIT:
			case SET:
			case STORE:
			case LOAD:
			case UNDEF:
			case LEA:
			case JMP:
			case BEZ:
			case BNZ:
			case BEQ:
			case BNE:
			case BLT:
			case BGE:
			case ADD:
			case SUB:
			case ADDM:
			case SUBM:
			case X:
			case Y:
			case Z:
			case H:
			case S:
			case K:
			case T:
			case ROT_X:
			case ROT_Y:
			case ROT_Z:
			case CNOT:
			case CPHASE:
			case MEAS:
			case CREATE_EPR:
			case RECV_EPR:
			case WAIT_ALL:
			case WAIT_ANY:
			case WAIT_SINGLE:
			case QFREE:
			case RET_ARR:
				enterOuterAlt(_localctx, 1);
				{
				setState(71);
				instruction();
				setState(72);
				match(EOL);
				}
				break;
			case COMMENT:
				enterOuterAlt(_localctx, 2);
				{
				setState(74);
				match(COMMENT);
				setState(75);
				match(EOL);
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
	public static class InstructionContext extends ParserRuleContext {
		public RegInstrContext regInstr() {
			return getRuleContext(RegInstrContext.class,0);
		}
		public RegRegInstrContext regRegInstr() {
			return getRuleContext(RegRegInstrContext.class,0);
		}
		public RegImmImmInstrContext regImmImmInstr() {
			return getRuleContext(RegImmImmInstrContext.class,0);
		}
		public RegRegRegInstrContext regRegRegInstr() {
			return getRuleContext(RegRegRegInstrContext.class,0);
		}
		public RegRegRegRegInstrContext regRegRegRegInstr() {
			return getRuleContext(RegRegRegRegInstrContext.class,0);
		}
		public ImmInstrContext immInstr() {
			return getRuleContext(ImmInstrContext.class,0);
		}
		public RegRegImmInstrContext regRegImmInstr() {
			return getRuleContext(RegRegImmInstrContext.class,0);
		}
		public RegImmInstrContext regImmInstr() {
			return getRuleContext(RegImmInstrContext.class,0);
		}
		public RegEntryInstrContext regEntryInstr() {
			return getRuleContext(RegEntryInstrContext.class,0);
		}
		public RegAddrInstrContext regAddrInstr() {
			return getRuleContext(RegAddrInstrContext.class,0);
		}
		public ArrayEntryInstrContext arrayEntryInstr() {
			return getRuleContext(ArrayEntryInstrContext.class,0);
		}
		public ArraySliceInstrContext arraySliceInstr() {
			return getRuleContext(ArraySliceInstrContext.class,0);
		}
		public AddrInstrContext addrInstr() {
			return getRuleContext(AddrInstrContext.class,0);
		}
		public Reg5InstrContext reg5Instr() {
			return getRuleContext(Reg5InstrContext.class,0);
		}
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_instruction);
		try {
			setState(92);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(78);
				regInstr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(79);
				regRegInstr();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(80);
				regImmImmInstr();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(81);
				regRegRegInstr();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(82);
				regRegRegRegInstr();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(83);
				immInstr();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(84);
				regRegImmInstr();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(85);
				regImmInstr();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(86);
				regEntryInstr();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(87);
				regAddrInstr();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(88);
				arrayEntryInstr();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(89);
				arraySliceInstr();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(90);
				addrInstr();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(91);
				reg5Instr();
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
	public static class RegInstrContext extends ParserRuleContext {
		public TerminalNode QALLOC() { return getToken(NetQASMParser.QALLOC, 0); }
		public TerminalNode Q_REG() { return getToken(NetQASMParser.Q_REG, 0); }
		public TerminalNode INIT() { return getToken(NetQASMParser.INIT, 0); }
		public TerminalNode X() { return getToken(NetQASMParser.X, 0); }
		public TerminalNode Y() { return getToken(NetQASMParser.Y, 0); }
		public TerminalNode Z() { return getToken(NetQASMParser.Z, 0); }
		public TerminalNode H() { return getToken(NetQASMParser.H, 0); }
		public TerminalNode S() { return getToken(NetQASMParser.S, 0); }
		public TerminalNode K() { return getToken(NetQASMParser.K, 0); }
		public TerminalNode T() { return getToken(NetQASMParser.T, 0); }
		public TerminalNode QFREE() { return getToken(NetQASMParser.QFREE, 0); }
		public TerminalNode RET_ARR() { return getToken(NetQASMParser.RET_ARR, 0); }
		public TerminalNode C_REG() { return getToken(NetQASMParser.C_REG, 0); }
		public TerminalNode R_REG() { return getToken(NetQASMParser.R_REG, 0); }
		public TerminalNode M_REG() { return getToken(NetQASMParser.M_REG, 0); }
		public RegInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regInstr; }
	}

	public final RegInstrContext regInstr() throws RecognitionException {
		RegInstrContext _localctx = new RegInstrContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_regInstr);
		int _la;
		try {
			setState(116);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case QALLOC:
				enterOuterAlt(_localctx, 1);
				{
				setState(94);
				match(QALLOC);
				setState(95);
				match(Q_REG);
				}
				break;
			case INIT:
				enterOuterAlt(_localctx, 2);
				{
				setState(96);
				match(INIT);
				setState(97);
				match(Q_REG);
				}
				break;
			case X:
				enterOuterAlt(_localctx, 3);
				{
				setState(98);
				match(X);
				setState(99);
				match(Q_REG);
				}
				break;
			case Y:
				enterOuterAlt(_localctx, 4);
				{
				setState(100);
				match(Y);
				setState(101);
				match(Q_REG);
				}
				break;
			case Z:
				enterOuterAlt(_localctx, 5);
				{
				setState(102);
				match(Z);
				setState(103);
				match(Q_REG);
				}
				break;
			case H:
				enterOuterAlt(_localctx, 6);
				{
				setState(104);
				match(H);
				setState(105);
				match(Q_REG);
				}
				break;
			case S:
				enterOuterAlt(_localctx, 7);
				{
				setState(106);
				match(S);
				setState(107);
				match(Q_REG);
				}
				break;
			case K:
				enterOuterAlt(_localctx, 8);
				{
				setState(108);
				match(K);
				setState(109);
				match(Q_REG);
				}
				break;
			case T:
				enterOuterAlt(_localctx, 9);
				{
				setState(110);
				match(T);
				setState(111);
				match(Q_REG);
				}
				break;
			case QFREE:
				enterOuterAlt(_localctx, 10);
				{
				setState(112);
				match(QFREE);
				setState(113);
				match(Q_REG);
				}
				break;
			case RET_ARR:
				enterOuterAlt(_localctx, 11);
				{
				setState(114);
				match(RET_ARR);
				setState(115);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 480L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
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
	public static class RegRegInstrContext extends ParserRuleContext {
		public TerminalNode CNOT() { return getToken(NetQASMParser.CNOT, 0); }
		public List<TerminalNode> Q_REG() { return getTokens(NetQASMParser.Q_REG); }
		public TerminalNode Q_REG(int i) {
			return getToken(NetQASMParser.Q_REG, i);
		}
		public TerminalNode CPHASE() { return getToken(NetQASMParser.CPHASE, 0); }
		public TerminalNode MEAS() { return getToken(NetQASMParser.MEAS, 0); }
		public TerminalNode M_REG() { return getToken(NetQASMParser.M_REG, 0); }
		public RegRegInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regRegInstr; }
	}

	public final RegRegInstrContext regRegInstr() throws RecognitionException {
		RegRegInstrContext _localctx = new RegRegInstrContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_regRegInstr);
		try {
			setState(127);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CNOT:
				enterOuterAlt(_localctx, 1);
				{
				setState(118);
				match(CNOT);
				setState(119);
				match(Q_REG);
				setState(120);
				match(Q_REG);
				}
				break;
			case CPHASE:
				enterOuterAlt(_localctx, 2);
				{
				setState(121);
				match(CPHASE);
				setState(122);
				match(Q_REG);
				setState(123);
				match(Q_REG);
				}
				break;
			case MEAS:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				match(MEAS);
				setState(125);
				match(Q_REG);
				setState(126);
				match(M_REG);
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
	public static class RegImmImmInstrContext extends ParserRuleContext {
		public TerminalNode ROT_X() { return getToken(NetQASMParser.ROT_X, 0); }
		public TerminalNode Q_REG() { return getToken(NetQASMParser.Q_REG, 0); }
		public List<TerminalNode> IMMEDIATE() { return getTokens(NetQASMParser.IMMEDIATE); }
		public TerminalNode IMMEDIATE(int i) {
			return getToken(NetQASMParser.IMMEDIATE, i);
		}
		public TerminalNode ROT_Y() { return getToken(NetQASMParser.ROT_Y, 0); }
		public TerminalNode ROT_Z() { return getToken(NetQASMParser.ROT_Z, 0); }
		public RegImmImmInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regImmImmInstr; }
	}

	public final RegImmImmInstrContext regImmImmInstr() throws RecognitionException {
		RegImmImmInstrContext _localctx = new RegImmImmInstrContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_regImmImmInstr);
		try {
			setState(141);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ROT_X:
				enterOuterAlt(_localctx, 1);
				{
				setState(129);
				match(ROT_X);
				setState(130);
				match(Q_REG);
				setState(131);
				match(IMMEDIATE);
				setState(132);
				match(IMMEDIATE);
				}
				break;
			case ROT_Y:
				enterOuterAlt(_localctx, 2);
				{
				setState(133);
				match(ROT_Y);
				setState(134);
				match(Q_REG);
				setState(135);
				match(IMMEDIATE);
				setState(136);
				match(IMMEDIATE);
				}
				break;
			case ROT_Z:
				enterOuterAlt(_localctx, 3);
				{
				setState(137);
				match(ROT_Z);
				setState(138);
				match(Q_REG);
				setState(139);
				match(IMMEDIATE);
				setState(140);
				match(IMMEDIATE);
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
	public static class RegRegRegInstrContext extends ParserRuleContext {
		public TerminalNode ADD() { return getToken(NetQASMParser.ADD, 0); }
		public TerminalNode R_REG() { return getToken(NetQASMParser.R_REG, 0); }
		public List<ClassicalRegContext> classicalReg() {
			return getRuleContexts(ClassicalRegContext.class);
		}
		public ClassicalRegContext classicalReg(int i) {
			return getRuleContext(ClassicalRegContext.class,i);
		}
		public TerminalNode SUB() { return getToken(NetQASMParser.SUB, 0); }
		public RegRegRegInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regRegRegInstr; }
	}

	public final RegRegRegInstrContext regRegRegInstr() throws RecognitionException {
		RegRegRegInstrContext _localctx = new RegRegRegInstrContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_regRegRegInstr);
		try {
			setState(153);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ADD:
				enterOuterAlt(_localctx, 1);
				{
				setState(143);
				match(ADD);
				setState(144);
				match(R_REG);
				setState(145);
				classicalReg();
				setState(146);
				classicalReg();
				}
				break;
			case SUB:
				enterOuterAlt(_localctx, 2);
				{
				setState(148);
				match(SUB);
				setState(149);
				match(R_REG);
				setState(150);
				classicalReg();
				setState(151);
				classicalReg();
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
	public static class RegRegRegRegInstrContext extends ParserRuleContext {
		public TerminalNode ADDM() { return getToken(NetQASMParser.ADDM, 0); }
		public List<TerminalNode> R_REG() { return getTokens(NetQASMParser.R_REG); }
		public TerminalNode R_REG(int i) {
			return getToken(NetQASMParser.R_REG, i);
		}
		public List<ClassicalRegContext> classicalReg() {
			return getRuleContexts(ClassicalRegContext.class);
		}
		public ClassicalRegContext classicalReg(int i) {
			return getRuleContext(ClassicalRegContext.class,i);
		}
		public TerminalNode SUBM() { return getToken(NetQASMParser.SUBM, 0); }
		public TerminalNode RECV_EPR() { return getToken(NetQASMParser.RECV_EPR, 0); }
		public List<TerminalNode> C_REG() { return getTokens(NetQASMParser.C_REG); }
		public TerminalNode C_REG(int i) {
			return getToken(NetQASMParser.C_REG, i);
		}
		public RegRegRegRegInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regRegRegRegInstr; }
	}

	public final RegRegRegRegInstrContext regRegRegRegInstr() throws RecognitionException {
		RegRegRegRegInstrContext _localctx = new RegRegRegRegInstrContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_regRegRegRegInstr);
		int _la;
		try {
			setState(172);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ADDM:
				enterOuterAlt(_localctx, 1);
				{
				setState(155);
				match(ADDM);
				setState(156);
				match(R_REG);
				setState(157);
				classicalReg();
				setState(158);
				classicalReg();
				setState(159);
				classicalReg();
				}
				break;
			case SUBM:
				enterOuterAlt(_localctx, 2);
				{
				setState(161);
				match(SUBM);
				setState(162);
				match(R_REG);
				setState(163);
				classicalReg();
				setState(164);
				classicalReg();
				setState(165);
				classicalReg();
				}
				break;
			case RECV_EPR:
				enterOuterAlt(_localctx, 3);
				{
				setState(167);
				match(RECV_EPR);
				setState(168);
				_la = _input.LA(1);
				if ( !(_la==C_REG || _la==R_REG) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(169);
				_la = _input.LA(1);
				if ( !(_la==C_REG || _la==R_REG) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(170);
				_la = _input.LA(1);
				if ( !(_la==C_REG || _la==R_REG) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(171);
				_la = _input.LA(1);
				if ( !(_la==C_REG || _la==R_REG) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
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
	public static class ImmInstrContext extends ParserRuleContext {
		public TerminalNode JMP() { return getToken(NetQASMParser.JMP, 0); }
		public TerminalNode LINE_NUMBER() { return getToken(NetQASMParser.LINE_NUMBER, 0); }
		public ImmInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_immInstr; }
	}

	public final ImmInstrContext immInstr() throws RecognitionException {
		ImmInstrContext _localctx = new ImmInstrContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_immInstr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			match(JMP);
			setState(175);
			match(LINE_NUMBER);
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
	public static class RegRegImmInstrContext extends ParserRuleContext {
		public TerminalNode BEQ() { return getToken(NetQASMParser.BEQ, 0); }
		public List<ClassicalRegContext> classicalReg() {
			return getRuleContexts(ClassicalRegContext.class);
		}
		public ClassicalRegContext classicalReg(int i) {
			return getRuleContext(ClassicalRegContext.class,i);
		}
		public TerminalNode IMMEDIATE() { return getToken(NetQASMParser.IMMEDIATE, 0); }
		public TerminalNode BNE() { return getToken(NetQASMParser.BNE, 0); }
		public TerminalNode BLT() { return getToken(NetQASMParser.BLT, 0); }
		public TerminalNode BGE() { return getToken(NetQASMParser.BGE, 0); }
		public RegRegImmInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regRegImmInstr; }
	}

	public final RegRegImmInstrContext regRegImmInstr() throws RecognitionException {
		RegRegImmInstrContext _localctx = new RegRegImmInstrContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_regRegImmInstr);
		try {
			setState(197);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BEQ:
				enterOuterAlt(_localctx, 1);
				{
				setState(177);
				match(BEQ);
				setState(178);
				classicalReg();
				setState(179);
				classicalReg();
				setState(180);
				match(IMMEDIATE);
				}
				break;
			case BNE:
				enterOuterAlt(_localctx, 2);
				{
				setState(182);
				match(BNE);
				setState(183);
				classicalReg();
				setState(184);
				classicalReg();
				setState(185);
				match(IMMEDIATE);
				}
				break;
			case BLT:
				enterOuterAlt(_localctx, 3);
				{
				setState(187);
				match(BLT);
				setState(188);
				classicalReg();
				setState(189);
				classicalReg();
				setState(190);
				match(IMMEDIATE);
				}
				break;
			case BGE:
				enterOuterAlt(_localctx, 4);
				{
				setState(192);
				match(BGE);
				setState(193);
				classicalReg();
				setState(194);
				classicalReg();
				setState(195);
				match(IMMEDIATE);
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
	public static class RegImmInstrContext extends ParserRuleContext {
		public TerminalNode ARRAY() { return getToken(NetQASMParser.ARRAY, 0); }
		public TerminalNode IMMEDIATE() { return getToken(NetQASMParser.IMMEDIATE, 0); }
		public TerminalNode ADDRESS() { return getToken(NetQASMParser.ADDRESS, 0); }
		public TerminalNode SET() { return getToken(NetQASMParser.SET, 0); }
		public TerminalNode C_REG() { return getToken(NetQASMParser.C_REG, 0); }
		public TerminalNode R_REG() { return getToken(NetQASMParser.R_REG, 0); }
		public TerminalNode BEZ() { return getToken(NetQASMParser.BEZ, 0); }
		public ClassicalRegContext classicalReg() {
			return getRuleContext(ClassicalRegContext.class,0);
		}
		public TerminalNode BNZ() { return getToken(NetQASMParser.BNZ, 0); }
		public RegImmInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regImmInstr; }
	}

	public final RegImmInstrContext regImmInstr() throws RecognitionException {
		RegImmInstrContext _localctx = new RegImmInstrContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_regImmInstr);
		try {
			setState(216);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(199);
				match(ARRAY);
				setState(200);
				match(IMMEDIATE);
				setState(201);
				match(ADDRESS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(202);
				match(SET);
				setState(203);
				match(C_REG);
				setState(204);
				match(IMMEDIATE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(205);
				match(SET);
				setState(206);
				match(R_REG);
				setState(207);
				match(IMMEDIATE);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(208);
				match(BEZ);
				setState(209);
				classicalReg();
				setState(210);
				match(IMMEDIATE);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(212);
				match(BNZ);
				setState(213);
				classicalReg();
				setState(214);
				match(IMMEDIATE);
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
	public static class RegEntryInstrContext extends ParserRuleContext {
		public TerminalNode STORE() { return getToken(NetQASMParser.STORE, 0); }
		public ClassicalRegContext classicalReg() {
			return getRuleContext(ClassicalRegContext.class,0);
		}
		public TerminalNode ARRAY_ENTRY() { return getToken(NetQASMParser.ARRAY_ENTRY, 0); }
		public TerminalNode LOAD() { return getToken(NetQASMParser.LOAD, 0); }
		public TerminalNode R_REG() { return getToken(NetQASMParser.R_REG, 0); }
		public RegEntryInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regEntryInstr; }
	}

	public final RegEntryInstrContext regEntryInstr() throws RecognitionException {
		RegEntryInstrContext _localctx = new RegEntryInstrContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_regEntryInstr);
		try {
			setState(225);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STORE:
				enterOuterAlt(_localctx, 1);
				{
				setState(218);
				match(STORE);
				setState(219);
				classicalReg();
				setState(220);
				match(ARRAY_ENTRY);
				}
				break;
			case LOAD:
				enterOuterAlt(_localctx, 2);
				{
				setState(222);
				match(LOAD);
				setState(223);
				match(R_REG);
				setState(224);
				match(ARRAY_ENTRY);
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
	public static class RegAddrInstrContext extends ParserRuleContext {
		public TerminalNode LEA() { return getToken(NetQASMParser.LEA, 0); }
		public TerminalNode R_REG() { return getToken(NetQASMParser.R_REG, 0); }
		public TerminalNode ADDRESS() { return getToken(NetQASMParser.ADDRESS, 0); }
		public RegAddrInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regAddrInstr; }
	}

	public final RegAddrInstrContext regAddrInstr() throws RecognitionException {
		RegAddrInstrContext _localctx = new RegAddrInstrContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_regAddrInstr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
			match(LEA);
			setState(228);
			match(R_REG);
			setState(229);
			match(ADDRESS);
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
	public static class ArrayEntryInstrContext extends ParserRuleContext {
		public TerminalNode UNDEF() { return getToken(NetQASMParser.UNDEF, 0); }
		public TerminalNode ARRAY_ENTRY() { return getToken(NetQASMParser.ARRAY_ENTRY, 0); }
		public ArrayEntryInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayEntryInstr; }
	}

	public final ArrayEntryInstrContext arrayEntryInstr() throws RecognitionException {
		ArrayEntryInstrContext _localctx = new ArrayEntryInstrContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_arrayEntryInstr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(231);
			match(UNDEF);
			setState(232);
			match(ARRAY_ENTRY);
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
	public static class ArraySliceInstrContext extends ParserRuleContext {
		public TerminalNode WAIT_ALL() { return getToken(NetQASMParser.WAIT_ALL, 0); }
		public TerminalNode ARRAY_SLICE() { return getToken(NetQASMParser.ARRAY_SLICE, 0); }
		public TerminalNode WAIT_ANY() { return getToken(NetQASMParser.WAIT_ANY, 0); }
		public TerminalNode WAIT_SINGLE() { return getToken(NetQASMParser.WAIT_SINGLE, 0); }
		public ArraySliceInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arraySliceInstr; }
	}

	public final ArraySliceInstrContext arraySliceInstr() throws RecognitionException {
		ArraySliceInstrContext _localctx = new ArraySliceInstrContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_arraySliceInstr);
		try {
			setState(240);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case WAIT_ALL:
				enterOuterAlt(_localctx, 1);
				{
				setState(234);
				match(WAIT_ALL);
				setState(235);
				match(ARRAY_SLICE);
				}
				break;
			case WAIT_ANY:
				enterOuterAlt(_localctx, 2);
				{
				setState(236);
				match(WAIT_ANY);
				setState(237);
				match(ARRAY_SLICE);
				}
				break;
			case WAIT_SINGLE:
				enterOuterAlt(_localctx, 3);
				{
				setState(238);
				match(WAIT_SINGLE);
				setState(239);
				match(ARRAY_SLICE);
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
	public static class AddrInstrContext extends ParserRuleContext {
		public TerminalNode RET_ARR() { return getToken(NetQASMParser.RET_ARR, 0); }
		public TerminalNode ADDRESS() { return getToken(NetQASMParser.ADDRESS, 0); }
		public AddrInstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_addrInstr; }
	}

	public final AddrInstrContext addrInstr() throws RecognitionException {
		AddrInstrContext _localctx = new AddrInstrContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_addrInstr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(242);
			match(RET_ARR);
			setState(243);
			match(ADDRESS);
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
	public static class Reg5InstrContext extends ParserRuleContext {
		public TerminalNode CREATE_EPR() { return getToken(NetQASMParser.CREATE_EPR, 0); }
		public List<TerminalNode> R_REG() { return getTokens(NetQASMParser.R_REG); }
		public TerminalNode R_REG(int i) {
			return getToken(NetQASMParser.R_REG, i);
		}
		public List<TerminalNode> C_REG() { return getTokens(NetQASMParser.C_REG); }
		public TerminalNode C_REG(int i) {
			return getToken(NetQASMParser.C_REG, i);
		}
		public Reg5InstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_reg5Instr; }
	}

	public final Reg5InstrContext reg5Instr() throws RecognitionException {
		Reg5InstrContext _localctx = new Reg5InstrContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_reg5Instr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(245);
			match(CREATE_EPR);
			setState(246);
			_la = _input.LA(1);
			if ( !(_la==C_REG || _la==R_REG) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(247);
			_la = _input.LA(1);
			if ( !(_la==C_REG || _la==R_REG) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(248);
			_la = _input.LA(1);
			if ( !(_la==C_REG || _la==R_REG) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(249);
			_la = _input.LA(1);
			if ( !(_la==C_REG || _la==R_REG) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(250);
			_la = _input.LA(1);
			if ( !(_la==C_REG || _la==R_REG) ) {
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
	public static class ClassicalRegContext extends ParserRuleContext {
		public TerminalNode C_REG() { return getToken(NetQASMParser.C_REG, 0); }
		public TerminalNode R_REG() { return getToken(NetQASMParser.R_REG, 0); }
		public TerminalNode M_REG() { return getToken(NetQASMParser.M_REG, 0); }
		public ClassicalRegContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classicalReg; }
	}

	public final ClassicalRegContext classicalReg() throws RecognitionException {
		ClassicalRegContext _localctx = new ClassicalRegContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_classicalReg);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(252);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 352L) != 0)) ) {
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
	public static class VersionContext extends ParserRuleContext {
		public TerminalNode HASH() { return getToken(NetQASMParser.HASH, 0); }
		public TerminalNode PREAMBLE_NETQASM() { return getToken(NetQASMParser.PREAMBLE_NETQASM, 0); }
		public TerminalNode VERSION_NUMBER() { return getToken(NetQASMParser.VERSION_NUMBER, 0); }
		public VersionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_version; }
	}

	public final VersionContext version() throws RecognitionException {
		VersionContext _localctx = new VersionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_version);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(254);
			match(HASH);
			setState(255);
			match(PREAMBLE_NETQASM);
			setState(256);
			match(VERSION_NUMBER);
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
	public static class AppidContext extends ParserRuleContext {
		public TerminalNode HASH() { return getToken(NetQASMParser.HASH, 0); }
		public TerminalNode PREAMBLE_APPID() { return getToken(NetQASMParser.PREAMBLE_APPID, 0); }
		public TerminalNode IMMEDIATE() { return getToken(NetQASMParser.IMMEDIATE, 0); }
		public AppidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_appid; }
	}

	public final AppidContext appid() throws RecognitionException {
		AppidContext _localctx = new AppidContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_appid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(258);
			match(HASH);
			setState(259);
			match(PREAMBLE_APPID);
			setState(260);
			match(IMMEDIATE);
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
	public static class DefineContext extends ParserRuleContext {
		public TerminalNode HASH() { return getToken(NetQASMParser.HASH, 0); }
		public TerminalNode PREAMBLE_DEFINE() { return getToken(NetQASMParser.PREAMBLE_DEFINE, 0); }
		public TerminalNode ID() { return getToken(NetQASMParser.ID, 0); }
		public TerminalNode LCURLY() { return getToken(NetQASMParser.LCURLY, 0); }
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public TerminalNode RCURLY() { return getToken(NetQASMParser.RCURLY, 0); }
		public DefineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_define; }
	}

	public final DefineContext define() throws RecognitionException {
		DefineContext _localctx = new DefineContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_define);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(262);
			match(HASH);
			setState(263);
			match(PREAMBLE_DEFINE);
			setState(264);
			match(ID);
			setState(265);
			match(LCURLY);
			setState(266);
			instruction();
			setState(267);
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

	public static final String _serializedATN =
		"\u0004\u0001A\u010e\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0001\u0000\u0001\u0000\u0005\u0000/\b\u0000\n\u0000\f\u00002\t\u0000"+
		"\u0001\u0000\u0005\u00005\b\u0000\n\u0000\f\u00008\t\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0005\u0001C\b\u0001\n\u0001\f\u0001F\t\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002"+
		"M\b\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003]\b\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004u\b\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0003\u0005\u0080\b\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006\u008e\b\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007\u009a\b\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003"+
		"\b\u00ad\b\b\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0003\n\u00c6\b\n\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u00d9"+
		"\b\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003"+
		"\f\u00e2\b\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0003\u000f\u00f1\b\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0001"+
		"\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0000\u0000\u0016\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012"+
		"\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*\u0000\u0003\u0001\u0000\u0005"+
		"\b\u0001\u0000\u0005\u0006\u0002\u0000\u0005\u0006\b\b\u0123\u0000,\u0001"+
		"\u0000\u0000\u0000\u0002;\u0001\u0000\u0000\u0000\u0004L\u0001\u0000\u0000"+
		"\u0000\u0006\\\u0001\u0000\u0000\u0000\bt\u0001\u0000\u0000\u0000\n\u007f"+
		"\u0001\u0000\u0000\u0000\f\u008d\u0001\u0000\u0000\u0000\u000e\u0099\u0001"+
		"\u0000\u0000\u0000\u0010\u00ac\u0001\u0000\u0000\u0000\u0012\u00ae\u0001"+
		"\u0000\u0000\u0000\u0014\u00c5\u0001\u0000\u0000\u0000\u0016\u00d8\u0001"+
		"\u0000\u0000\u0000\u0018\u00e1\u0001\u0000\u0000\u0000\u001a\u00e3\u0001"+
		"\u0000\u0000\u0000\u001c\u00e7\u0001\u0000\u0000\u0000\u001e\u00f0\u0001"+
		"\u0000\u0000\u0000 \u00f2\u0001\u0000\u0000\u0000\"\u00f5\u0001\u0000"+
		"\u0000\u0000$\u00fc\u0001\u0000\u0000\u0000&\u00fe\u0001\u0000\u0000\u0000"+
		"(\u0102\u0001\u0000\u0000\u0000*\u0106\u0001\u0000\u0000\u0000,0\u0003"+
		"\u0002\u0001\u0000-/\u0005@\u0000\u0000.-\u0001\u0000\u0000\u0000/2\u0001"+
		"\u0000\u0000\u00000.\u0001\u0000\u0000\u000001\u0001\u0000\u0000\u0000"+
		"16\u0001\u0000\u0000\u000020\u0001\u0000\u0000\u000035\u0003\u0004\u0002"+
		"\u000043\u0001\u0000\u0000\u000058\u0001\u0000\u0000\u000064\u0001\u0000"+
		"\u0000\u000067\u0001\u0000\u0000\u000079\u0001\u0000\u0000\u000086\u0001"+
		"\u0000\u0000\u00009:\u0005\u0000\u0000\u0001:\u0001\u0001\u0000\u0000"+
		"\u0000;<\u0003&\u0013\u0000<=\u0005@\u0000\u0000=>\u0003(\u0014\u0000"+
		">D\u0005@\u0000\u0000?@\u0003*\u0015\u0000@A\u0005@\u0000\u0000AC\u0001"+
		"\u0000\u0000\u0000B?\u0001\u0000\u0000\u0000CF\u0001\u0000\u0000\u0000"+
		"DB\u0001\u0000\u0000\u0000DE\u0001\u0000\u0000\u0000E\u0003\u0001\u0000"+
		"\u0000\u0000FD\u0001\u0000\u0000\u0000GH\u0003\u0006\u0003\u0000HI\u0005"+
		"@\u0000\u0000IM\u0001\u0000\u0000\u0000JK\u00058\u0000\u0000KM\u0005@"+
		"\u0000\u0000LG\u0001\u0000\u0000\u0000LJ\u0001\u0000\u0000\u0000M\u0005"+
		"\u0001\u0000\u0000\u0000N]\u0003\b\u0004\u0000O]\u0003\n\u0005\u0000P"+
		"]\u0003\f\u0006\u0000Q]\u0003\u000e\u0007\u0000R]\u0003\u0010\b\u0000"+
		"S]\u0003\u0012\t\u0000T]\u0003\u0014\n\u0000U]\u0003\u0016\u000b\u0000"+
		"V]\u0003\u0018\f\u0000W]\u0003\u001a\r\u0000X]\u0003\u001c\u000e\u0000"+
		"Y]\u0003\u001e\u000f\u0000Z]\u0003 \u0010\u0000[]\u0003\"\u0011\u0000"+
		"\\N\u0001\u0000\u0000\u0000\\O\u0001\u0000\u0000\u0000\\P\u0001\u0000"+
		"\u0000\u0000\\Q\u0001\u0000\u0000\u0000\\R\u0001\u0000\u0000\u0000\\S"+
		"\u0001\u0000\u0000\u0000\\T\u0001\u0000\u0000\u0000\\U\u0001\u0000\u0000"+
		"\u0000\\V\u0001\u0000\u0000\u0000\\W\u0001\u0000\u0000\u0000\\X\u0001"+
		"\u0000\u0000\u0000\\Y\u0001\u0000\u0000\u0000\\Z\u0001\u0000\u0000\u0000"+
		"\\[\u0001\u0000\u0000\u0000]\u0007\u0001\u0000\u0000\u0000^_\u0005\r\u0000"+
		"\u0000_u\u0005\u0007\u0000\u0000`a\u0005\u000f\u0000\u0000au\u0005\u0007"+
		"\u0000\u0000bc\u0005 \u0000\u0000cu\u0005\u0007\u0000\u0000de\u0005!\u0000"+
		"\u0000eu\u0005\u0007\u0000\u0000fg\u0005\"\u0000\u0000gu\u0005\u0007\u0000"+
		"\u0000hi\u0005#\u0000\u0000iu\u0005\u0007\u0000\u0000jk\u0005$\u0000\u0000"+
		"ku\u0005\u0007\u0000\u0000lm\u0005%\u0000\u0000mu\u0005\u0007\u0000\u0000"+
		"no\u0005&\u0000\u0000ou\u0005\u0007\u0000\u0000pq\u00055\u0000\u0000q"+
		"u\u0005\u0007\u0000\u0000rs\u00057\u0000\u0000su\u0007\u0000\u0000\u0000"+
		"t^\u0001\u0000\u0000\u0000t`\u0001\u0000\u0000\u0000tb\u0001\u0000\u0000"+
		"\u0000td\u0001\u0000\u0000\u0000tf\u0001\u0000\u0000\u0000th\u0001\u0000"+
		"\u0000\u0000tj\u0001\u0000\u0000\u0000tl\u0001\u0000\u0000\u0000tn\u0001"+
		"\u0000\u0000\u0000tp\u0001\u0000\u0000\u0000tr\u0001\u0000\u0000\u0000"+
		"u\t\u0001\u0000\u0000\u0000vw\u0005*\u0000\u0000wx\u0005\u0007\u0000\u0000"+
		"x\u0080\u0005\u0007\u0000\u0000yz\u0005+\u0000\u0000z{\u0005\u0007\u0000"+
		"\u0000{\u0080\u0005\u0007\u0000\u0000|}\u0005,\u0000\u0000}~\u0005\u0007"+
		"\u0000\u0000~\u0080\u0005\b\u0000\u0000\u007fv\u0001\u0000\u0000\u0000"+
		"\u007fy\u0001\u0000\u0000\u0000\u007f|\u0001\u0000\u0000\u0000\u0080\u000b"+
		"\u0001\u0000\u0000\u0000\u0081\u0082\u0005\'\u0000\u0000\u0082\u0083\u0005"+
		"\u0007\u0000\u0000\u0083\u0084\u0005\u0004\u0000\u0000\u0084\u008e\u0005"+
		"\u0004\u0000\u0000\u0085\u0086\u0005(\u0000\u0000\u0086\u0087\u0005\u0007"+
		"\u0000\u0000\u0087\u0088\u0005\u0004\u0000\u0000\u0088\u008e\u0005\u0004"+
		"\u0000\u0000\u0089\u008a\u0005)\u0000\u0000\u008a\u008b\u0005\u0007\u0000"+
		"\u0000\u008b\u008c\u0005\u0004\u0000\u0000\u008c\u008e\u0005\u0004\u0000"+
		"\u0000\u008d\u0081\u0001\u0000\u0000\u0000\u008d\u0085\u0001\u0000\u0000"+
		"\u0000\u008d\u0089\u0001\u0000\u0000\u0000\u008e\r\u0001\u0000\u0000\u0000"+
		"\u008f\u0090\u0005\u001c\u0000\u0000\u0090\u0091\u0005\u0006\u0000\u0000"+
		"\u0091\u0092\u0003$\u0012\u0000\u0092\u0093\u0003$\u0012\u0000\u0093\u009a"+
		"\u0001\u0000\u0000\u0000\u0094\u0095\u0005\u001d\u0000\u0000\u0095\u0096"+
		"\u0005\u0006\u0000\u0000\u0096\u0097\u0003$\u0012\u0000\u0097\u0098\u0003"+
		"$\u0012\u0000\u0098\u009a\u0001\u0000\u0000\u0000\u0099\u008f\u0001\u0000"+
		"\u0000\u0000\u0099\u0094\u0001\u0000\u0000\u0000\u009a\u000f\u0001\u0000"+
		"\u0000\u0000\u009b\u009c\u0005\u001e\u0000\u0000\u009c\u009d\u0005\u0006"+
		"\u0000\u0000\u009d\u009e\u0003$\u0012\u0000\u009e\u009f\u0003$\u0012\u0000"+
		"\u009f\u00a0\u0003$\u0012\u0000\u00a0\u00ad\u0001\u0000\u0000\u0000\u00a1"+
		"\u00a2\u0005\u001f\u0000\u0000\u00a2\u00a3\u0005\u0006\u0000\u0000\u00a3"+
		"\u00a4\u0003$\u0012\u0000\u00a4\u00a5\u0003$\u0012\u0000\u00a5\u00a6\u0003"+
		"$\u0012\u0000\u00a6\u00ad\u0001\u0000\u0000\u0000\u00a7\u00a8\u00051\u0000"+
		"\u0000\u00a8\u00a9\u0007\u0001\u0000\u0000\u00a9\u00aa\u0007\u0001\u0000"+
		"\u0000\u00aa\u00ab\u0007\u0001\u0000\u0000\u00ab\u00ad\u0007\u0001\u0000"+
		"\u0000\u00ac\u009b\u0001\u0000\u0000\u0000\u00ac\u00a1\u0001\u0000\u0000"+
		"\u0000\u00ac\u00a7\u0001\u0000\u0000\u0000\u00ad\u0011\u0001\u0000\u0000"+
		"\u0000\u00ae\u00af\u0005\u0015\u0000\u0000\u00af\u00b0\u00059\u0000\u0000"+
		"\u00b0\u0013\u0001\u0000\u0000\u0000\u00b1\u00b2\u0005\u0018\u0000\u0000"+
		"\u00b2\u00b3\u0003$\u0012\u0000\u00b3\u00b4\u0003$\u0012\u0000\u00b4\u00b5"+
		"\u0005\u0004\u0000\u0000\u00b5\u00c6\u0001\u0000\u0000\u0000\u00b6\u00b7"+
		"\u0005\u0019\u0000\u0000\u00b7\u00b8\u0003$\u0012\u0000\u00b8\u00b9\u0003"+
		"$\u0012\u0000\u00b9\u00ba\u0005\u0004\u0000\u0000\u00ba\u00c6\u0001\u0000"+
		"\u0000\u0000\u00bb\u00bc\u0005\u001a\u0000\u0000\u00bc\u00bd\u0003$\u0012"+
		"\u0000\u00bd\u00be\u0003$\u0012\u0000\u00be\u00bf\u0005\u0004\u0000\u0000"+
		"\u00bf\u00c6\u0001\u0000\u0000\u0000\u00c0\u00c1\u0005\u001b\u0000\u0000"+
		"\u00c1\u00c2\u0003$\u0012\u0000\u00c2\u00c3\u0003$\u0012\u0000\u00c3\u00c4"+
		"\u0005\u0004\u0000\u0000\u00c4\u00c6\u0001\u0000\u0000\u0000\u00c5\u00b1"+
		"\u0001\u0000\u0000\u0000\u00c5\u00b6\u0001\u0000\u0000\u0000\u00c5\u00bb"+
		"\u0001\u0000\u0000\u0000\u00c5\u00c0\u0001\u0000\u0000\u0000\u00c6\u0015"+
		"\u0001\u0000\u0000\u0000\u00c7\u00c8\u0005\u000e\u0000\u0000\u00c8\u00c9"+
		"\u0005\u0004\u0000\u0000\u00c9\u00d9\u0005\t\u0000\u0000\u00ca\u00cb\u0005"+
		"\u0010\u0000\u0000\u00cb\u00cc\u0005\u0005\u0000\u0000\u00cc\u00d9\u0005"+
		"\u0004\u0000\u0000\u00cd\u00ce\u0005\u0010\u0000\u0000\u00ce\u00cf\u0005"+
		"\u0006\u0000\u0000\u00cf\u00d9\u0005\u0004\u0000\u0000\u00d0\u00d1\u0005"+
		"\u0016\u0000\u0000\u00d1\u00d2\u0003$\u0012\u0000\u00d2\u00d3\u0005\u0004"+
		"\u0000\u0000\u00d3\u00d9\u0001\u0000\u0000\u0000\u00d4\u00d5\u0005\u0017"+
		"\u0000\u0000\u00d5\u00d6\u0003$\u0012\u0000\u00d6\u00d7\u0005\u0004\u0000"+
		"\u0000\u00d7\u00d9\u0001\u0000\u0000\u0000\u00d8\u00c7\u0001\u0000\u0000"+
		"\u0000\u00d8\u00ca\u0001\u0000\u0000\u0000\u00d8\u00cd\u0001\u0000\u0000"+
		"\u0000\u00d8\u00d0\u0001\u0000\u0000\u0000\u00d8\u00d4\u0001\u0000\u0000"+
		"\u0000\u00d9\u0017\u0001\u0000\u0000\u0000\u00da\u00db\u0005\u0011\u0000"+
		"\u0000\u00db\u00dc\u0003$\u0012\u0000\u00dc\u00dd\u0005\n\u0000\u0000"+
		"\u00dd\u00e2\u0001\u0000\u0000\u0000\u00de\u00df\u0005\u0012\u0000\u0000"+
		"\u00df\u00e0\u0005\u0006\u0000\u0000\u00e0\u00e2\u0005\n\u0000\u0000\u00e1"+
		"\u00da\u0001\u0000\u0000\u0000\u00e1\u00de\u0001\u0000\u0000\u0000\u00e2"+
		"\u0019\u0001\u0000\u0000\u0000\u00e3\u00e4\u0005\u0014\u0000\u0000\u00e4"+
		"\u00e5\u0005\u0006\u0000\u0000\u00e5\u00e6\u0005\t\u0000\u0000\u00e6\u001b"+
		"\u0001\u0000\u0000\u0000\u00e7\u00e8\u0005\u0013\u0000\u0000\u00e8\u00e9"+
		"\u0005\n\u0000\u0000\u00e9\u001d\u0001\u0000\u0000\u0000\u00ea\u00eb\u0005"+
		"2\u0000\u0000\u00eb\u00f1\u0005\u000b\u0000\u0000\u00ec\u00ed\u00053\u0000"+
		"\u0000\u00ed\u00f1\u0005\u000b\u0000\u0000\u00ee\u00ef\u00054\u0000\u0000"+
		"\u00ef\u00f1\u0005\u000b\u0000\u0000\u00f0\u00ea\u0001\u0000\u0000\u0000"+
		"\u00f0\u00ec\u0001\u0000\u0000\u0000\u00f0\u00ee\u0001\u0000\u0000\u0000"+
		"\u00f1\u001f\u0001\u0000\u0000\u0000\u00f2\u00f3\u00057\u0000\u0000\u00f3"+
		"\u00f4\u0005\t\u0000\u0000\u00f4!\u0001\u0000\u0000\u0000\u00f5\u00f6"+
		"\u00050\u0000\u0000\u00f6\u00f7\u0007\u0001\u0000\u0000\u00f7\u00f8\u0007"+
		"\u0001\u0000\u0000\u00f8\u00f9\u0007\u0001\u0000\u0000\u00f9\u00fa\u0007"+
		"\u0001\u0000\u0000\u00fa\u00fb\u0007\u0001\u0000\u0000\u00fb#\u0001\u0000"+
		"\u0000\u0000\u00fc\u00fd\u0007\u0002\u0000\u0000\u00fd%\u0001\u0000\u0000"+
		"\u0000\u00fe\u00ff\u0005=\u0000\u0000\u00ff\u0100\u0005\u0001\u0000\u0000"+
		"\u0100\u0101\u0005;\u0000\u0000\u0101\'\u0001\u0000\u0000\u0000\u0102"+
		"\u0103\u0005=\u0000\u0000\u0103\u0104\u0005\u0002\u0000\u0000\u0104\u0105"+
		"\u0005\u0004\u0000\u0000\u0105)\u0001\u0000\u0000\u0000\u0106\u0107\u0005"+
		"=\u0000\u0000\u0107\u0108\u0005\u0003\u0000\u0000\u0108\u0109\u0005:\u0000"+
		"\u0000\u0109\u010a\u0005>\u0000\u0000\u010a\u010b\u0003\u0006\u0003\u0000"+
		"\u010b\u010c\u0005?\u0000\u0000\u010c+\u0001\u0000\u0000\u0000\u000e0"+
		"6DL\\t\u007f\u008d\u0099\u00ac\u00c5\u00d8\u00e1\u00f0";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}