
// Generated from LA.g4 by ANTLR 4.9.1



#include "LAParser.h"


using namespace antlrcpp;
using namespace antlr4;

LAParser::LAParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LAParser::~LAParser() {
  delete _interpreter;
}

std::string LAParser::getGrammarFileName() const {
  return "LA.g4";
}

const std::vector<std::string>& LAParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LAParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramaContext ------------------------------------------------------------------

LAParser::ProgramaContext::ProgramaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::DeclaracoesContext* LAParser::ProgramaContext::declaracoes() {
  return getRuleContext<LAParser::DeclaracoesContext>(0);
}

LAParser::CorpoContext* LAParser::ProgramaContext::corpo() {
  return getRuleContext<LAParser::CorpoContext>(0);
}


size_t LAParser::ProgramaContext::getRuleIndex() const {
  return LAParser::RulePrograma;
}


LAParser::ProgramaContext* LAParser::programa() {
  ProgramaContext *_localctx = _tracker.createInstance<ProgramaContext>(_ctx, getState());
  enterRule(_localctx, 0, LAParser::RulePrograma);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    declaracoes();
    setState(101);
    match(LAParser::T__0);
    setState(102);
    corpo();
    setState(103);
    match(LAParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracoesContext ------------------------------------------------------------------

LAParser::DeclaracoesContext::DeclaracoesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::Decl_local_globalContext *> LAParser::DeclaracoesContext::decl_local_global() {
  return getRuleContexts<LAParser::Decl_local_globalContext>();
}

LAParser::Decl_local_globalContext* LAParser::DeclaracoesContext::decl_local_global(size_t i) {
  return getRuleContext<LAParser::Decl_local_globalContext>(i);
}


size_t LAParser::DeclaracoesContext::getRuleIndex() const {
  return LAParser::RuleDeclaracoes;
}


LAParser::DeclaracoesContext* LAParser::declaracoes() {
  DeclaracoesContext *_localctx = _tracker.createInstance<DeclaracoesContext>(_ctx, getState());
  enterRule(_localctx, 2, LAParser::RuleDeclaracoes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__2)
      | (1ULL << LAParser::T__3)
      | (1ULL << LAParser::T__5)
      | (1ULL << LAParser::T__15)
      | (1ULL << LAParser::T__17))) != 0)) {
      setState(105);
      decl_local_global();
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_local_globalContext ------------------------------------------------------------------

LAParser::Decl_local_globalContext::Decl_local_globalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::Declaracao_localContext* LAParser::Decl_local_globalContext::declaracao_local() {
  return getRuleContext<LAParser::Declaracao_localContext>(0);
}

LAParser::Declaracao_globalContext* LAParser::Decl_local_globalContext::declaracao_global() {
  return getRuleContext<LAParser::Declaracao_globalContext>(0);
}


size_t LAParser::Decl_local_globalContext::getRuleIndex() const {
  return LAParser::RuleDecl_local_global;
}


LAParser::Decl_local_globalContext* LAParser::decl_local_global() {
  Decl_local_globalContext *_localctx = _tracker.createInstance<Decl_local_globalContext>(_ctx, getState());
  enterRule(_localctx, 4, LAParser::RuleDecl_local_global);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__2:
      case LAParser::T__3:
      case LAParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(111);
        declaracao_local();
        break;
      }

      case LAParser::T__15:
      case LAParser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(112);
        declaracao_global();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaracao_localContext ------------------------------------------------------------------

LAParser::Declaracao_localContext::Declaracao_localContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::VariavelContext* LAParser::Declaracao_localContext::variavel() {
  return getRuleContext<LAParser::VariavelContext>(0);
}

tree::TerminalNode* LAParser::Declaracao_localContext::IDENT() {
  return getToken(LAParser::IDENT, 0);
}

tree::TerminalNode* LAParser::Declaracao_localContext::DELIMITADOR() {
  return getToken(LAParser::DELIMITADOR, 0);
}

LAParser::Tipo_basicoContext* LAParser::Declaracao_localContext::tipo_basico() {
  return getRuleContext<LAParser::Tipo_basicoContext>(0);
}

LAParser::Valor_constanteContext* LAParser::Declaracao_localContext::valor_constante() {
  return getRuleContext<LAParser::Valor_constanteContext>(0);
}

LAParser::TipoContext* LAParser::Declaracao_localContext::tipo() {
  return getRuleContext<LAParser::TipoContext>(0);
}


size_t LAParser::Declaracao_localContext::getRuleIndex() const {
  return LAParser::RuleDeclaracao_local;
}


LAParser::Declaracao_localContext* LAParser::declaracao_local() {
  Declaracao_localContext *_localctx = _tracker.createInstance<Declaracao_localContext>(_ctx, getState());
  enterRule(_localctx, 6, LAParser::RuleDeclaracao_local);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(115);
        match(LAParser::T__2);
        setState(116);
        variavel();
        break;
      }

      case LAParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(117);
        match(LAParser::T__3);
        setState(118);
        match(LAParser::IDENT);
        setState(119);
        match(LAParser::DELIMITADOR);
        setState(120);
        tipo_basico();
        setState(121);
        match(LAParser::T__4);
        setState(122);
        valor_constante();
        break;
      }

      case LAParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(124);
        match(LAParser::T__5);
        setState(125);
        match(LAParser::IDENT);
        setState(126);
        match(LAParser::DELIMITADOR);
        setState(127);
        tipo();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariavelContext ------------------------------------------------------------------

LAParser::VariavelContext::VariavelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::IdentificadorContext *> LAParser::VariavelContext::identificador() {
  return getRuleContexts<LAParser::IdentificadorContext>();
}

LAParser::IdentificadorContext* LAParser::VariavelContext::identificador(size_t i) {
  return getRuleContext<LAParser::IdentificadorContext>(i);
}

tree::TerminalNode* LAParser::VariavelContext::DELIMITADOR() {
  return getToken(LAParser::DELIMITADOR, 0);
}

LAParser::TipoContext* LAParser::VariavelContext::tipo() {
  return getRuleContext<LAParser::TipoContext>(0);
}

std::vector<tree::TerminalNode *> LAParser::VariavelContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::VariavelContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}


size_t LAParser::VariavelContext::getRuleIndex() const {
  return LAParser::RuleVariavel;
}


LAParser::VariavelContext* LAParser::variavel() {
  VariavelContext *_localctx = _tracker.createInstance<VariavelContext>(_ctx, getState());
  enterRule(_localctx, 8, LAParser::RuleVariavel);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    identificador();
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::VIRGULA) {
      setState(131);
      match(LAParser::VIRGULA);
      setState(132);
      identificador();
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(138);
    match(LAParser::DELIMITADOR);
    setState(139);
    tipo();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentificadorContext ------------------------------------------------------------------

LAParser::IdentificadorContext::IdentificadorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LAParser::IdentificadorContext::IDENT() {
  return getTokens(LAParser::IDENT);
}

tree::TerminalNode* LAParser::IdentificadorContext::IDENT(size_t i) {
  return getToken(LAParser::IDENT, i);
}

LAParser::DimensaoContext* LAParser::IdentificadorContext::dimensao() {
  return getRuleContext<LAParser::DimensaoContext>(0);
}

std::vector<tree::TerminalNode *> LAParser::IdentificadorContext::PONTO() {
  return getTokens(LAParser::PONTO);
}

tree::TerminalNode* LAParser::IdentificadorContext::PONTO(size_t i) {
  return getToken(LAParser::PONTO, i);
}


size_t LAParser::IdentificadorContext::getRuleIndex() const {
  return LAParser::RuleIdentificador;
}


LAParser::IdentificadorContext* LAParser::identificador() {
  IdentificadorContext *_localctx = _tracker.createInstance<IdentificadorContext>(_ctx, getState());
  enterRule(_localctx, 10, LAParser::RuleIdentificador);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(LAParser::IDENT);
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::PONTO) {
      setState(142);
      match(LAParser::PONTO);
      setState(143);
      match(LAParser::IDENT);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(149);
    dimensao();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimensaoContext ------------------------------------------------------------------

LAParser::DimensaoContext::DimensaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LAParser::DimensaoContext::ABRE_COL() {
  return getTokens(LAParser::ABRE_COL);
}

tree::TerminalNode* LAParser::DimensaoContext::ABRE_COL(size_t i) {
  return getToken(LAParser::ABRE_COL, i);
}

std::vector<LAParser::Exp_aritmeticaContext *> LAParser::DimensaoContext::exp_aritmetica() {
  return getRuleContexts<LAParser::Exp_aritmeticaContext>();
}

LAParser::Exp_aritmeticaContext* LAParser::DimensaoContext::exp_aritmetica(size_t i) {
  return getRuleContext<LAParser::Exp_aritmeticaContext>(i);
}

std::vector<tree::TerminalNode *> LAParser::DimensaoContext::FECHA_COL() {
  return getTokens(LAParser::FECHA_COL);
}

tree::TerminalNode* LAParser::DimensaoContext::FECHA_COL(size_t i) {
  return getToken(LAParser::FECHA_COL, i);
}


size_t LAParser::DimensaoContext::getRuleIndex() const {
  return LAParser::RuleDimensao;
}


LAParser::DimensaoContext* LAParser::dimensao() {
  DimensaoContext *_localctx = _tracker.createInstance<DimensaoContext>(_ctx, getState());
  enterRule(_localctx, 12, LAParser::RuleDimensao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::ABRE_COL) {
      setState(151);
      match(LAParser::ABRE_COL);
      setState(152);
      exp_aritmetica();
      setState(153);
      match(LAParser::FECHA_COL);
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TipoContext ------------------------------------------------------------------

LAParser::TipoContext::TipoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::RegistroContext* LAParser::TipoContext::registro() {
  return getRuleContext<LAParser::RegistroContext>(0);
}

LAParser::Tipo_estendidoContext* LAParser::TipoContext::tipo_estendido() {
  return getRuleContext<LAParser::Tipo_estendidoContext>(0);
}


size_t LAParser::TipoContext::getRuleIndex() const {
  return LAParser::RuleTipo;
}


LAParser::TipoContext* LAParser::tipo() {
  TipoContext *_localctx = _tracker.createInstance<TipoContext>(_ctx, getState());
  enterRule(_localctx, 14, LAParser::RuleTipo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(160);
        registro();
        break;
      }

      case LAParser::T__6:
      case LAParser::T__7:
      case LAParser::T__8:
      case LAParser::T__9:
      case LAParser::T__10:
      case LAParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(161);
        tipo_estendido();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tipo_basicoContext ------------------------------------------------------------------

LAParser::Tipo_basicoContext::Tipo_basicoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Tipo_basicoContext::getRuleIndex() const {
  return LAParser::RuleTipo_basico;
}


LAParser::Tipo_basicoContext* LAParser::tipo_basico() {
  Tipo_basicoContext *_localctx = _tracker.createInstance<Tipo_basicoContext>(_ctx, getState());
  enterRule(_localctx, 16, LAParser::RuleTipo_basico);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__6)
      | (1ULL << LAParser::T__7)
      | (1ULL << LAParser::T__8)
      | (1ULL << LAParser::T__9))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tipo_basico_identContext ------------------------------------------------------------------

LAParser::Tipo_basico_identContext::Tipo_basico_identContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::Tipo_basicoContext* LAParser::Tipo_basico_identContext::tipo_basico() {
  return getRuleContext<LAParser::Tipo_basicoContext>(0);
}

tree::TerminalNode* LAParser::Tipo_basico_identContext::IDENT() {
  return getToken(LAParser::IDENT, 0);
}


size_t LAParser::Tipo_basico_identContext::getRuleIndex() const {
  return LAParser::RuleTipo_basico_ident;
}


LAParser::Tipo_basico_identContext* LAParser::tipo_basico_ident() {
  Tipo_basico_identContext *_localctx = _tracker.createInstance<Tipo_basico_identContext>(_ctx, getState());
  enterRule(_localctx, 18, LAParser::RuleTipo_basico_ident);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__6:
      case LAParser::T__7:
      case LAParser::T__8:
      case LAParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(166);
        tipo_basico();
        break;
      }

      case LAParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(167);
        match(LAParser::IDENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tipo_estendidoContext ------------------------------------------------------------------

LAParser::Tipo_estendidoContext::Tipo_estendidoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::Tipo_basico_identContext* LAParser::Tipo_estendidoContext::tipo_basico_ident() {
  return getRuleContext<LAParser::Tipo_basico_identContext>(0);
}


size_t LAParser::Tipo_estendidoContext::getRuleIndex() const {
  return LAParser::RuleTipo_estendido;
}


LAParser::Tipo_estendidoContext* LAParser::tipo_estendido() {
  Tipo_estendidoContext *_localctx = _tracker.createInstance<Tipo_estendidoContext>(_ctx, getState());
  enterRule(_localctx, 20, LAParser::RuleTipo_estendido);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__10) {
      setState(170);
      match(LAParser::T__10);
    }
    setState(173);
    tipo_basico_ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Valor_constanteContext ------------------------------------------------------------------

LAParser::Valor_constanteContext::Valor_constanteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LAParser::Valor_constanteContext::CADEIA() {
  return getToken(LAParser::CADEIA, 0);
}

tree::TerminalNode* LAParser::Valor_constanteContext::NUM_INT() {
  return getToken(LAParser::NUM_INT, 0);
}

tree::TerminalNode* LAParser::Valor_constanteContext::NUM_REAL() {
  return getToken(LAParser::NUM_REAL, 0);
}


size_t LAParser::Valor_constanteContext::getRuleIndex() const {
  return LAParser::RuleValor_constante;
}


LAParser::Valor_constanteContext* LAParser::valor_constante() {
  Valor_constanteContext *_localctx = _tracker.createInstance<Valor_constanteContext>(_ctx, getState());
  enterRule(_localctx, 22, LAParser::RuleValor_constante);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__11)
      | (1ULL << LAParser::T__12)
      | (1ULL << LAParser::NUM_INT)
      | (1ULL << LAParser::NUM_REAL)
      | (1ULL << LAParser::CADEIA))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegistroContext ------------------------------------------------------------------

LAParser::RegistroContext::RegistroContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::VariavelContext *> LAParser::RegistroContext::variavel() {
  return getRuleContexts<LAParser::VariavelContext>();
}

LAParser::VariavelContext* LAParser::RegistroContext::variavel(size_t i) {
  return getRuleContext<LAParser::VariavelContext>(i);
}


size_t LAParser::RegistroContext::getRuleIndex() const {
  return LAParser::RuleRegistro;
}


LAParser::RegistroContext* LAParser::registro() {
  RegistroContext *_localctx = _tracker.createInstance<RegistroContext>(_ctx, getState());
  enterRule(_localctx, 24, LAParser::RuleRegistro);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(LAParser::T__13);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::IDENT) {
      setState(178);
      variavel();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(LAParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaracao_globalContext ------------------------------------------------------------------

LAParser::Declaracao_globalContext::Declaracao_globalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LAParser::Declaracao_globalContext::IDENT() {
  return getToken(LAParser::IDENT, 0);
}

tree::TerminalNode* LAParser::Declaracao_globalContext::ABRE_PAR() {
  return getToken(LAParser::ABRE_PAR, 0);
}

tree::TerminalNode* LAParser::Declaracao_globalContext::FECHA_PAR() {
  return getToken(LAParser::FECHA_PAR, 0);
}

LAParser::ParametrosContext* LAParser::Declaracao_globalContext::parametros() {
  return getRuleContext<LAParser::ParametrosContext>(0);
}

std::vector<LAParser::Declaracao_localContext *> LAParser::Declaracao_globalContext::declaracao_local() {
  return getRuleContexts<LAParser::Declaracao_localContext>();
}

LAParser::Declaracao_localContext* LAParser::Declaracao_globalContext::declaracao_local(size_t i) {
  return getRuleContext<LAParser::Declaracao_localContext>(i);
}

std::vector<LAParser::CmdContext *> LAParser::Declaracao_globalContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::Declaracao_globalContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}

tree::TerminalNode* LAParser::Declaracao_globalContext::DELIMITADOR() {
  return getToken(LAParser::DELIMITADOR, 0);
}

LAParser::Tipo_estendidoContext* LAParser::Declaracao_globalContext::tipo_estendido() {
  return getRuleContext<LAParser::Tipo_estendidoContext>(0);
}


size_t LAParser::Declaracao_globalContext::getRuleIndex() const {
  return LAParser::RuleDeclaracao_global;
}


LAParser::Declaracao_globalContext* LAParser::declaracao_global() {
  Declaracao_globalContext *_localctx = _tracker.createInstance<Declaracao_globalContext>(_ctx, getState());
  enterRule(_localctx, 26, LAParser::RuleDeclaracao_global);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(186);
        match(LAParser::T__15);
        setState(187);
        match(LAParser::IDENT);
        setState(188);
        match(LAParser::ABRE_PAR);
        setState(190);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LAParser::T__19

        || _la == LAParser::IDENT) {
          setState(189);
          parametros();
        }
        setState(192);
        match(LAParser::FECHA_PAR);
        setState(196);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LAParser::T__2)
          | (1ULL << LAParser::T__3)
          | (1ULL << LAParser::T__5))) != 0)) {
          setState(193);
          declaracao_local();
          setState(198);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(202);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LAParser::T__10)
          | (1ULL << LAParser::T__20)
          | (1ULL << LAParser::T__21)
          | (1ULL << LAParser::T__22)
          | (1ULL << LAParser::T__26)
          | (1ULL << LAParser::T__29)
          | (1ULL << LAParser::T__32)
          | (1ULL << LAParser::T__34)
          | (1ULL << LAParser::T__36)
          | (1ULL << LAParser::IDENT))) != 0)) {
          setState(199);
          cmd();
          setState(204);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(205);
        match(LAParser::T__16);
        break;
      }

      case LAParser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(206);
        match(LAParser::T__17);
        setState(207);
        match(LAParser::IDENT);
        setState(208);
        match(LAParser::ABRE_PAR);
        setState(210);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LAParser::T__19

        || _la == LAParser::IDENT) {
          setState(209);
          parametros();
        }
        setState(212);
        match(LAParser::FECHA_PAR);
        setState(213);
        match(LAParser::DELIMITADOR);
        setState(214);
        tipo_estendido();
        setState(218);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LAParser::T__2)
          | (1ULL << LAParser::T__3)
          | (1ULL << LAParser::T__5))) != 0)) {
          setState(215);
          declaracao_local();
          setState(220);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(224);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LAParser::T__10)
          | (1ULL << LAParser::T__20)
          | (1ULL << LAParser::T__21)
          | (1ULL << LAParser::T__22)
          | (1ULL << LAParser::T__26)
          | (1ULL << LAParser::T__29)
          | (1ULL << LAParser::T__32)
          | (1ULL << LAParser::T__34)
          | (1ULL << LAParser::T__36)
          | (1ULL << LAParser::IDENT))) != 0)) {
          setState(221);
          cmd();
          setState(226);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(227);
        match(LAParser::T__18);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametroContext ------------------------------------------------------------------

LAParser::ParametroContext::ParametroContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::IdentificadorContext *> LAParser::ParametroContext::identificador() {
  return getRuleContexts<LAParser::IdentificadorContext>();
}

LAParser::IdentificadorContext* LAParser::ParametroContext::identificador(size_t i) {
  return getRuleContext<LAParser::IdentificadorContext>(i);
}

tree::TerminalNode* LAParser::ParametroContext::DELIMITADOR() {
  return getToken(LAParser::DELIMITADOR, 0);
}

LAParser::Tipo_estendidoContext* LAParser::ParametroContext::tipo_estendido() {
  return getRuleContext<LAParser::Tipo_estendidoContext>(0);
}

std::vector<tree::TerminalNode *> LAParser::ParametroContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::ParametroContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}


size_t LAParser::ParametroContext::getRuleIndex() const {
  return LAParser::RuleParametro;
}


LAParser::ParametroContext* LAParser::parametro() {
  ParametroContext *_localctx = _tracker.createInstance<ParametroContext>(_ctx, getState());
  enterRule(_localctx, 28, LAParser::RuleParametro);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__19) {
      setState(231);
      match(LAParser::T__19);
    }
    setState(234);
    identificador();
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::VIRGULA) {
      setState(235);
      match(LAParser::VIRGULA);
      setState(236);
      identificador();
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(242);
    match(LAParser::DELIMITADOR);
    setState(243);
    tipo_estendido();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametrosContext ------------------------------------------------------------------

LAParser::ParametrosContext::ParametrosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::ParametroContext *> LAParser::ParametrosContext::parametro() {
  return getRuleContexts<LAParser::ParametroContext>();
}

LAParser::ParametroContext* LAParser::ParametrosContext::parametro(size_t i) {
  return getRuleContext<LAParser::ParametroContext>(i);
}

std::vector<tree::TerminalNode *> LAParser::ParametrosContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::ParametrosContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}


size_t LAParser::ParametrosContext::getRuleIndex() const {
  return LAParser::RuleParametros;
}


LAParser::ParametrosContext* LAParser::parametros() {
  ParametrosContext *_localctx = _tracker.createInstance<ParametrosContext>(_ctx, getState());
  enterRule(_localctx, 30, LAParser::RuleParametros);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    parametro();
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::VIRGULA) {
      setState(246);
      match(LAParser::VIRGULA);
      setState(247);
      parametro();
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CorpoContext ------------------------------------------------------------------

LAParser::CorpoContext::CorpoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::Declaracao_localContext *> LAParser::CorpoContext::declaracao_local() {
  return getRuleContexts<LAParser::Declaracao_localContext>();
}

LAParser::Declaracao_localContext* LAParser::CorpoContext::declaracao_local(size_t i) {
  return getRuleContext<LAParser::Declaracao_localContext>(i);
}

std::vector<LAParser::CmdContext *> LAParser::CorpoContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::CorpoContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}


size_t LAParser::CorpoContext::getRuleIndex() const {
  return LAParser::RuleCorpo;
}


LAParser::CorpoContext* LAParser::corpo() {
  CorpoContext *_localctx = _tracker.createInstance<CorpoContext>(_ctx, getState());
  enterRule(_localctx, 32, LAParser::RuleCorpo);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__2)
      | (1ULL << LAParser::T__3)
      | (1ULL << LAParser::T__5))) != 0)) {
      setState(253);
      declaracao_local();
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(262);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__10)
      | (1ULL << LAParser::T__20)
      | (1ULL << LAParser::T__21)
      | (1ULL << LAParser::T__22)
      | (1ULL << LAParser::T__26)
      | (1ULL << LAParser::T__29)
      | (1ULL << LAParser::T__32)
      | (1ULL << LAParser::T__34)
      | (1ULL << LAParser::T__36)
      | (1ULL << LAParser::IDENT))) != 0)) {
      setState(259);
      cmd();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdContext ------------------------------------------------------------------

LAParser::CmdContext::CmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::CmdLeiaContext* LAParser::CmdContext::cmdLeia() {
  return getRuleContext<LAParser::CmdLeiaContext>(0);
}

LAParser::CmdEscrevaContext* LAParser::CmdContext::cmdEscreva() {
  return getRuleContext<LAParser::CmdEscrevaContext>(0);
}

LAParser::CmdSeContext* LAParser::CmdContext::cmdSe() {
  return getRuleContext<LAParser::CmdSeContext>(0);
}

LAParser::CmdCasoContext* LAParser::CmdContext::cmdCaso() {
  return getRuleContext<LAParser::CmdCasoContext>(0);
}

LAParser::CmdParaContext* LAParser::CmdContext::cmdPara() {
  return getRuleContext<LAParser::CmdParaContext>(0);
}

LAParser::CmdEnquantoContext* LAParser::CmdContext::cmdEnquanto() {
  return getRuleContext<LAParser::CmdEnquantoContext>(0);
}

LAParser::CmdFacaContext* LAParser::CmdContext::cmdFaca() {
  return getRuleContext<LAParser::CmdFacaContext>(0);
}

LAParser::CmdAtribuicaoContext* LAParser::CmdContext::cmdAtribuicao() {
  return getRuleContext<LAParser::CmdAtribuicaoContext>(0);
}

LAParser::CmdChamadaContext* LAParser::CmdContext::cmdChamada() {
  return getRuleContext<LAParser::CmdChamadaContext>(0);
}

LAParser::CmdRetorneContext* LAParser::CmdContext::cmdRetorne() {
  return getRuleContext<LAParser::CmdRetorneContext>(0);
}


size_t LAParser::CmdContext::getRuleIndex() const {
  return LAParser::RuleCmd;
}


LAParser::CmdContext* LAParser::cmd() {
  CmdContext *_localctx = _tracker.createInstance<CmdContext>(_ctx, getState());
  enterRule(_localctx, 34, LAParser::RuleCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(265);
      cmdLeia();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(266);
      cmdEscreva();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(267);
      cmdSe();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(268);
      cmdCaso();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(269);
      cmdPara();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(270);
      cmdEnquanto();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(271);
      cmdFaca();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(272);
      cmdAtribuicao();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(273);
      cmdChamada();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(274);
      cmdRetorne();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdLeiaContext ------------------------------------------------------------------

LAParser::CmdLeiaContext::CmdLeiaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LAParser::CmdLeiaContext::ABRE_PAR() {
  return getToken(LAParser::ABRE_PAR, 0);
}

std::vector<LAParser::IdentificadorContext *> LAParser::CmdLeiaContext::identificador() {
  return getRuleContexts<LAParser::IdentificadorContext>();
}

LAParser::IdentificadorContext* LAParser::CmdLeiaContext::identificador(size_t i) {
  return getRuleContext<LAParser::IdentificadorContext>(i);
}

tree::TerminalNode* LAParser::CmdLeiaContext::FECHA_PAR() {
  return getToken(LAParser::FECHA_PAR, 0);
}

std::vector<tree::TerminalNode *> LAParser::CmdLeiaContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::CmdLeiaContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}


size_t LAParser::CmdLeiaContext::getRuleIndex() const {
  return LAParser::RuleCmdLeia;
}


LAParser::CmdLeiaContext* LAParser::cmdLeia() {
  CmdLeiaContext *_localctx = _tracker.createInstance<CmdLeiaContext>(_ctx, getState());
  enterRule(_localctx, 36, LAParser::RuleCmdLeia);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    match(LAParser::T__20);
    setState(278);
    match(LAParser::ABRE_PAR);
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__10) {
      setState(279);
      match(LAParser::T__10);
    }
    setState(282);
    identificador();
    setState(290);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::VIRGULA) {
      setState(283);
      match(LAParser::VIRGULA);
      setState(285);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LAParser::T__10) {
        setState(284);
        match(LAParser::T__10);
      }
      setState(287);
      identificador();
      setState(292);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(293);
    match(LAParser::FECHA_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdEscrevaContext ------------------------------------------------------------------

LAParser::CmdEscrevaContext::CmdEscrevaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LAParser::CmdEscrevaContext::ABRE_PAR() {
  return getToken(LAParser::ABRE_PAR, 0);
}

std::vector<LAParser::ExpressaoContext *> LAParser::CmdEscrevaContext::expressao() {
  return getRuleContexts<LAParser::ExpressaoContext>();
}

LAParser::ExpressaoContext* LAParser::CmdEscrevaContext::expressao(size_t i) {
  return getRuleContext<LAParser::ExpressaoContext>(i);
}

tree::TerminalNode* LAParser::CmdEscrevaContext::FECHA_PAR() {
  return getToken(LAParser::FECHA_PAR, 0);
}

std::vector<tree::TerminalNode *> LAParser::CmdEscrevaContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::CmdEscrevaContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}


size_t LAParser::CmdEscrevaContext::getRuleIndex() const {
  return LAParser::RuleCmdEscreva;
}


LAParser::CmdEscrevaContext* LAParser::cmdEscreva() {
  CmdEscrevaContext *_localctx = _tracker.createInstance<CmdEscrevaContext>(_ctx, getState());
  enterRule(_localctx, 38, LAParser::RuleCmdEscreva);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(LAParser::T__21);
    setState(296);
    match(LAParser::ABRE_PAR);
    setState(297);
    expressao();
    setState(302);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::VIRGULA) {
      setState(298);
      match(LAParser::VIRGULA);
      setState(299);
      expressao();
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(305);
    match(LAParser::FECHA_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdSeContext ------------------------------------------------------------------

LAParser::CmdSeContext::CmdSeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::ExpressaoContext* LAParser::CmdSeContext::expressao() {
  return getRuleContext<LAParser::ExpressaoContext>(0);
}

std::vector<LAParser::CmdContext *> LAParser::CmdSeContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::CmdSeContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}


size_t LAParser::CmdSeContext::getRuleIndex() const {
  return LAParser::RuleCmdSe;
}


LAParser::CmdSeContext* LAParser::cmdSe() {
  CmdSeContext *_localctx = _tracker.createInstance<CmdSeContext>(_ctx, getState());
  enterRule(_localctx, 40, LAParser::RuleCmdSe);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(LAParser::T__22);
    setState(308);
    expressao();
    setState(309);
    match(LAParser::T__23);
    setState(313);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__10)
      | (1ULL << LAParser::T__20)
      | (1ULL << LAParser::T__21)
      | (1ULL << LAParser::T__22)
      | (1ULL << LAParser::T__26)
      | (1ULL << LAParser::T__29)
      | (1ULL << LAParser::T__32)
      | (1ULL << LAParser::T__34)
      | (1ULL << LAParser::T__36)
      | (1ULL << LAParser::IDENT))) != 0)) {
      setState(310);
      cmd();
      setState(315);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(323);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__24) {
      setState(316);
      match(LAParser::T__24);
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << LAParser::T__10)
        | (1ULL << LAParser::T__20)
        | (1ULL << LAParser::T__21)
        | (1ULL << LAParser::T__22)
        | (1ULL << LAParser::T__26)
        | (1ULL << LAParser::T__29)
        | (1ULL << LAParser::T__32)
        | (1ULL << LAParser::T__34)
        | (1ULL << LAParser::T__36)
        | (1ULL << LAParser::IDENT))) != 0)) {
        setState(317);
        cmd();
        setState(322);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(325);
    match(LAParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdCasoContext ------------------------------------------------------------------

LAParser::CmdCasoContext::CmdCasoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::Exp_aritmeticaContext* LAParser::CmdCasoContext::exp_aritmetica() {
  return getRuleContext<LAParser::Exp_aritmeticaContext>(0);
}

LAParser::SelecaoContext* LAParser::CmdCasoContext::selecao() {
  return getRuleContext<LAParser::SelecaoContext>(0);
}

std::vector<LAParser::CmdContext *> LAParser::CmdCasoContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::CmdCasoContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}


size_t LAParser::CmdCasoContext::getRuleIndex() const {
  return LAParser::RuleCmdCaso;
}


LAParser::CmdCasoContext* LAParser::cmdCaso() {
  CmdCasoContext *_localctx = _tracker.createInstance<CmdCasoContext>(_ctx, getState());
  enterRule(_localctx, 42, LAParser::RuleCmdCaso);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(LAParser::T__26);
    setState(328);
    exp_aritmetica();
    setState(329);
    match(LAParser::T__27);
    setState(330);
    selecao();
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__24) {
      setState(331);
      match(LAParser::T__24);
      setState(335);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << LAParser::T__10)
        | (1ULL << LAParser::T__20)
        | (1ULL << LAParser::T__21)
        | (1ULL << LAParser::T__22)
        | (1ULL << LAParser::T__26)
        | (1ULL << LAParser::T__29)
        | (1ULL << LAParser::T__32)
        | (1ULL << LAParser::T__34)
        | (1ULL << LAParser::T__36)
        | (1ULL << LAParser::IDENT))) != 0)) {
        setState(332);
        cmd();
        setState(337);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(340);
    match(LAParser::T__28);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdParaContext ------------------------------------------------------------------

LAParser::CmdParaContext::CmdParaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LAParser::CmdParaContext::IDENT() {
  return getToken(LAParser::IDENT, 0);
}

std::vector<LAParser::Exp_aritmeticaContext *> LAParser::CmdParaContext::exp_aritmetica() {
  return getRuleContexts<LAParser::Exp_aritmeticaContext>();
}

LAParser::Exp_aritmeticaContext* LAParser::CmdParaContext::exp_aritmetica(size_t i) {
  return getRuleContext<LAParser::Exp_aritmeticaContext>(i);
}

std::vector<LAParser::CmdContext *> LAParser::CmdParaContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::CmdParaContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}


size_t LAParser::CmdParaContext::getRuleIndex() const {
  return LAParser::RuleCmdPara;
}


LAParser::CmdParaContext* LAParser::cmdPara() {
  CmdParaContext *_localctx = _tracker.createInstance<CmdParaContext>(_ctx, getState());
  enterRule(_localctx, 44, LAParser::RuleCmdPara);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(LAParser::T__29);
    setState(343);
    match(LAParser::IDENT);
    setState(344);
    match(LAParser::T__30);
    setState(345);
    exp_aritmetica();
    setState(346);
    match(LAParser::T__31);
    setState(347);
    exp_aritmetica();
    setState(348);
    match(LAParser::T__32);
    setState(352);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__10)
      | (1ULL << LAParser::T__20)
      | (1ULL << LAParser::T__21)
      | (1ULL << LAParser::T__22)
      | (1ULL << LAParser::T__26)
      | (1ULL << LAParser::T__29)
      | (1ULL << LAParser::T__32)
      | (1ULL << LAParser::T__34)
      | (1ULL << LAParser::T__36)
      | (1ULL << LAParser::IDENT))) != 0)) {
      setState(349);
      cmd();
      setState(354);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(355);
    match(LAParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdEnquantoContext ------------------------------------------------------------------

LAParser::CmdEnquantoContext::CmdEnquantoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::ExpressaoContext* LAParser::CmdEnquantoContext::expressao() {
  return getRuleContext<LAParser::ExpressaoContext>(0);
}

std::vector<LAParser::CmdContext *> LAParser::CmdEnquantoContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::CmdEnquantoContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}


size_t LAParser::CmdEnquantoContext::getRuleIndex() const {
  return LAParser::RuleCmdEnquanto;
}


LAParser::CmdEnquantoContext* LAParser::cmdEnquanto() {
  CmdEnquantoContext *_localctx = _tracker.createInstance<CmdEnquantoContext>(_ctx, getState());
  enterRule(_localctx, 46, LAParser::RuleCmdEnquanto);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(LAParser::T__34);
    setState(358);
    expressao();
    setState(359);
    match(LAParser::T__32);
    setState(363);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__10)
      | (1ULL << LAParser::T__20)
      | (1ULL << LAParser::T__21)
      | (1ULL << LAParser::T__22)
      | (1ULL << LAParser::T__26)
      | (1ULL << LAParser::T__29)
      | (1ULL << LAParser::T__32)
      | (1ULL << LAParser::T__34)
      | (1ULL << LAParser::T__36)
      | (1ULL << LAParser::IDENT))) != 0)) {
      setState(360);
      cmd();
      setState(365);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(366);
    match(LAParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdFacaContext ------------------------------------------------------------------

LAParser::CmdFacaContext::CmdFacaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::ExpressaoContext* LAParser::CmdFacaContext::expressao() {
  return getRuleContext<LAParser::ExpressaoContext>(0);
}

std::vector<LAParser::CmdContext *> LAParser::CmdFacaContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::CmdFacaContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}


size_t LAParser::CmdFacaContext::getRuleIndex() const {
  return LAParser::RuleCmdFaca;
}


LAParser::CmdFacaContext* LAParser::cmdFaca() {
  CmdFacaContext *_localctx = _tracker.createInstance<CmdFacaContext>(_ctx, getState());
  enterRule(_localctx, 48, LAParser::RuleCmdFaca);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(LAParser::T__32);
    setState(372);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__10)
      | (1ULL << LAParser::T__20)
      | (1ULL << LAParser::T__21)
      | (1ULL << LAParser::T__22)
      | (1ULL << LAParser::T__26)
      | (1ULL << LAParser::T__29)
      | (1ULL << LAParser::T__32)
      | (1ULL << LAParser::T__34)
      | (1ULL << LAParser::T__36)
      | (1ULL << LAParser::IDENT))) != 0)) {
      setState(369);
      cmd();
      setState(374);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(375);
    match(LAParser::T__31);
    setState(376);
    expressao();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdAtribuicaoContext ------------------------------------------------------------------

LAParser::CmdAtribuicaoContext::CmdAtribuicaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::IdentificadorContext* LAParser::CmdAtribuicaoContext::identificador() {
  return getRuleContext<LAParser::IdentificadorContext>(0);
}

LAParser::ExpressaoContext* LAParser::CmdAtribuicaoContext::expressao() {
  return getRuleContext<LAParser::ExpressaoContext>(0);
}


size_t LAParser::CmdAtribuicaoContext::getRuleIndex() const {
  return LAParser::RuleCmdAtribuicao;
}


LAParser::CmdAtribuicaoContext* LAParser::cmdAtribuicao() {
  CmdAtribuicaoContext *_localctx = _tracker.createInstance<CmdAtribuicaoContext>(_ctx, getState());
  enterRule(_localctx, 50, LAParser::RuleCmdAtribuicao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__10) {
      setState(378);
      match(LAParser::T__10);
    }
    setState(381);
    identificador();
    setState(382);
    match(LAParser::T__30);
    setState(383);
    expressao();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdChamadaContext ------------------------------------------------------------------

LAParser::CmdChamadaContext::CmdChamadaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LAParser::CmdChamadaContext::IDENT() {
  return getToken(LAParser::IDENT, 0);
}

tree::TerminalNode* LAParser::CmdChamadaContext::ABRE_PAR() {
  return getToken(LAParser::ABRE_PAR, 0);
}

std::vector<LAParser::ExpressaoContext *> LAParser::CmdChamadaContext::expressao() {
  return getRuleContexts<LAParser::ExpressaoContext>();
}

LAParser::ExpressaoContext* LAParser::CmdChamadaContext::expressao(size_t i) {
  return getRuleContext<LAParser::ExpressaoContext>(i);
}

tree::TerminalNode* LAParser::CmdChamadaContext::FECHA_PAR() {
  return getToken(LAParser::FECHA_PAR, 0);
}

std::vector<tree::TerminalNode *> LAParser::CmdChamadaContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::CmdChamadaContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}


size_t LAParser::CmdChamadaContext::getRuleIndex() const {
  return LAParser::RuleCmdChamada;
}


LAParser::CmdChamadaContext* LAParser::cmdChamada() {
  CmdChamadaContext *_localctx = _tracker.createInstance<CmdChamadaContext>(_ctx, getState());
  enterRule(_localctx, 52, LAParser::RuleCmdChamada);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    match(LAParser::IDENT);
    setState(386);
    match(LAParser::ABRE_PAR);
    setState(387);
    expressao();
    setState(392);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::VIRGULA) {
      setState(388);
      match(LAParser::VIRGULA);
      setState(389);
      expressao();
      setState(394);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(395);
    match(LAParser::FECHA_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdRetorneContext ------------------------------------------------------------------

LAParser::CmdRetorneContext::CmdRetorneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::ExpressaoContext* LAParser::CmdRetorneContext::expressao() {
  return getRuleContext<LAParser::ExpressaoContext>(0);
}


size_t LAParser::CmdRetorneContext::getRuleIndex() const {
  return LAParser::RuleCmdRetorne;
}


LAParser::CmdRetorneContext* LAParser::cmdRetorne() {
  CmdRetorneContext *_localctx = _tracker.createInstance<CmdRetorneContext>(_ctx, getState());
  enterRule(_localctx, 54, LAParser::RuleCmdRetorne);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(LAParser::T__36);
    setState(398);
    expressao();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelecaoContext ------------------------------------------------------------------

LAParser::SelecaoContext::SelecaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::Item_selecaoContext *> LAParser::SelecaoContext::item_selecao() {
  return getRuleContexts<LAParser::Item_selecaoContext>();
}

LAParser::Item_selecaoContext* LAParser::SelecaoContext::item_selecao(size_t i) {
  return getRuleContext<LAParser::Item_selecaoContext>(i);
}


size_t LAParser::SelecaoContext::getRuleIndex() const {
  return LAParser::RuleSelecao;
}


LAParser::SelecaoContext* LAParser::selecao() {
  SelecaoContext *_localctx = _tracker.createInstance<SelecaoContext>(_ctx, getState());
  enterRule(_localctx, 56, LAParser::RuleSelecao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::T__37

    || _la == LAParser::NUM_INT) {
      setState(400);
      item_selecao();
      setState(405);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Item_selecaoContext ------------------------------------------------------------------

LAParser::Item_selecaoContext::Item_selecaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::ConstantesContext* LAParser::Item_selecaoContext::constantes() {
  return getRuleContext<LAParser::ConstantesContext>(0);
}

tree::TerminalNode* LAParser::Item_selecaoContext::DELIMITADOR() {
  return getToken(LAParser::DELIMITADOR, 0);
}

std::vector<LAParser::CmdContext *> LAParser::Item_selecaoContext::cmd() {
  return getRuleContexts<LAParser::CmdContext>();
}

LAParser::CmdContext* LAParser::Item_selecaoContext::cmd(size_t i) {
  return getRuleContext<LAParser::CmdContext>(i);
}


size_t LAParser::Item_selecaoContext::getRuleIndex() const {
  return LAParser::RuleItem_selecao;
}


LAParser::Item_selecaoContext* LAParser::item_selecao() {
  Item_selecaoContext *_localctx = _tracker.createInstance<Item_selecaoContext>(_ctx, getState());
  enterRule(_localctx, 58, LAParser::RuleItem_selecao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    constantes();
    setState(407);
    match(LAParser::DELIMITADOR);
    setState(411);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__10)
      | (1ULL << LAParser::T__20)
      | (1ULL << LAParser::T__21)
      | (1ULL << LAParser::T__22)
      | (1ULL << LAParser::T__26)
      | (1ULL << LAParser::T__29)
      | (1ULL << LAParser::T__32)
      | (1ULL << LAParser::T__34)
      | (1ULL << LAParser::T__36)
      | (1ULL << LAParser::IDENT))) != 0)) {
      setState(408);
      cmd();
      setState(413);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantesContext ------------------------------------------------------------------

LAParser::ConstantesContext::ConstantesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::Numero_intervaloContext *> LAParser::ConstantesContext::numero_intervalo() {
  return getRuleContexts<LAParser::Numero_intervaloContext>();
}

LAParser::Numero_intervaloContext* LAParser::ConstantesContext::numero_intervalo(size_t i) {
  return getRuleContext<LAParser::Numero_intervaloContext>(i);
}

std::vector<tree::TerminalNode *> LAParser::ConstantesContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::ConstantesContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}


size_t LAParser::ConstantesContext::getRuleIndex() const {
  return LAParser::RuleConstantes;
}


LAParser::ConstantesContext* LAParser::constantes() {
  ConstantesContext *_localctx = _tracker.createInstance<ConstantesContext>(_ctx, getState());
  enterRule(_localctx, 60, LAParser::RuleConstantes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    numero_intervalo();
    setState(419);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::VIRGULA) {
      setState(415);
      match(LAParser::VIRGULA);
      setState(416);
      numero_intervalo();
      setState(421);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Numero_intervaloContext ------------------------------------------------------------------

LAParser::Numero_intervaloContext::Numero_intervaloContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LAParser::Numero_intervaloContext::NUM_INT() {
  return getTokens(LAParser::NUM_INT);
}

tree::TerminalNode* LAParser::Numero_intervaloContext::NUM_INT(size_t i) {
  return getToken(LAParser::NUM_INT, i);
}

std::vector<LAParser::Op_unarioContext *> LAParser::Numero_intervaloContext::op_unario() {
  return getRuleContexts<LAParser::Op_unarioContext>();
}

LAParser::Op_unarioContext* LAParser::Numero_intervaloContext::op_unario(size_t i) {
  return getRuleContext<LAParser::Op_unarioContext>(i);
}

tree::TerminalNode* LAParser::Numero_intervaloContext::ATE() {
  return getToken(LAParser::ATE, 0);
}


size_t LAParser::Numero_intervaloContext::getRuleIndex() const {
  return LAParser::RuleNumero_intervalo;
}


LAParser::Numero_intervaloContext* LAParser::numero_intervalo() {
  Numero_intervaloContext *_localctx = _tracker.createInstance<Numero_intervaloContext>(_ctx, getState());
  enterRule(_localctx, 62, LAParser::RuleNumero_intervalo);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__37) {
      setState(422);
      op_unario();
    }
    setState(425);
    match(LAParser::NUM_INT);
    setState(431);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::ATE) {
      setState(426);
      match(LAParser::ATE);
      setState(428);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LAParser::T__37) {
        setState(427);
        op_unario();
      }
      setState(430);
      match(LAParser::NUM_INT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_unarioContext ------------------------------------------------------------------

LAParser::Op_unarioContext::Op_unarioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Op_unarioContext::getRuleIndex() const {
  return LAParser::RuleOp_unario;
}


LAParser::Op_unarioContext* LAParser::op_unario() {
  Op_unarioContext *_localctx = _tracker.createInstance<Op_unarioContext>(_ctx, getState());
  enterRule(_localctx, 64, LAParser::RuleOp_unario);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(LAParser::T__37);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exp_aritmeticaContext ------------------------------------------------------------------

LAParser::Exp_aritmeticaContext::Exp_aritmeticaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::TermoContext *> LAParser::Exp_aritmeticaContext::termo() {
  return getRuleContexts<LAParser::TermoContext>();
}

LAParser::TermoContext* LAParser::Exp_aritmeticaContext::termo(size_t i) {
  return getRuleContext<LAParser::TermoContext>(i);
}

std::vector<LAParser::Op1Context *> LAParser::Exp_aritmeticaContext::op1() {
  return getRuleContexts<LAParser::Op1Context>();
}

LAParser::Op1Context* LAParser::Exp_aritmeticaContext::op1(size_t i) {
  return getRuleContext<LAParser::Op1Context>(i);
}


size_t LAParser::Exp_aritmeticaContext::getRuleIndex() const {
  return LAParser::RuleExp_aritmetica;
}


LAParser::Exp_aritmeticaContext* LAParser::exp_aritmetica() {
  Exp_aritmeticaContext *_localctx = _tracker.createInstance<Exp_aritmeticaContext>(_ctx, getState());
  enterRule(_localctx, 66, LAParser::RuleExp_aritmetica);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(435);
    termo();
    setState(441);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(436);
        op1();
        setState(437);
        termo(); 
      }
      setState(443);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermoContext ------------------------------------------------------------------

LAParser::TermoContext::TermoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::FatorContext *> LAParser::TermoContext::fator() {
  return getRuleContexts<LAParser::FatorContext>();
}

LAParser::FatorContext* LAParser::TermoContext::fator(size_t i) {
  return getRuleContext<LAParser::FatorContext>(i);
}

std::vector<LAParser::Op2Context *> LAParser::TermoContext::op2() {
  return getRuleContexts<LAParser::Op2Context>();
}

LAParser::Op2Context* LAParser::TermoContext::op2(size_t i) {
  return getRuleContext<LAParser::Op2Context>(i);
}


size_t LAParser::TermoContext::getRuleIndex() const {
  return LAParser::RuleTermo;
}


LAParser::TermoContext* LAParser::termo() {
  TermoContext *_localctx = _tracker.createInstance<TermoContext>(_ctx, getState());
  enterRule(_localctx, 68, LAParser::RuleTermo);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    fator();
    setState(450);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::T__39

    || _la == LAParser::T__40) {
      setState(445);
      op2();
      setState(446);
      fator();
      setState(452);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FatorContext ------------------------------------------------------------------

LAParser::FatorContext::FatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::ParcelaContext *> LAParser::FatorContext::parcela() {
  return getRuleContexts<LAParser::ParcelaContext>();
}

LAParser::ParcelaContext* LAParser::FatorContext::parcela(size_t i) {
  return getRuleContext<LAParser::ParcelaContext>(i);
}

std::vector<LAParser::Op3Context *> LAParser::FatorContext::op3() {
  return getRuleContexts<LAParser::Op3Context>();
}

LAParser::Op3Context* LAParser::FatorContext::op3(size_t i) {
  return getRuleContext<LAParser::Op3Context>(i);
}


size_t LAParser::FatorContext::getRuleIndex() const {
  return LAParser::RuleFator;
}


LAParser::FatorContext* LAParser::fator() {
  FatorContext *_localctx = _tracker.createInstance<FatorContext>(_ctx, getState());
  enterRule(_localctx, 70, LAParser::RuleFator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    parcela();
    setState(459);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::T__41) {
      setState(454);
      op3();
      setState(455);
      parcela();
      setState(461);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op1Context ------------------------------------------------------------------

LAParser::Op1Context::Op1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Op1Context::getRuleIndex() const {
  return LAParser::RuleOp1;
}


LAParser::Op1Context* LAParser::op1() {
  Op1Context *_localctx = _tracker.createInstance<Op1Context>(_ctx, getState());
  enterRule(_localctx, 72, LAParser::RuleOp1);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    _la = _input->LA(1);
    if (!(_la == LAParser::T__37

    || _la == LAParser::T__38)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op2Context ------------------------------------------------------------------

LAParser::Op2Context::Op2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Op2Context::getRuleIndex() const {
  return LAParser::RuleOp2;
}


LAParser::Op2Context* LAParser::op2() {
  Op2Context *_localctx = _tracker.createInstance<Op2Context>(_ctx, getState());
  enterRule(_localctx, 74, LAParser::RuleOp2);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    _la = _input->LA(1);
    if (!(_la == LAParser::T__39

    || _la == LAParser::T__40)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op3Context ------------------------------------------------------------------

LAParser::Op3Context::Op3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Op3Context::getRuleIndex() const {
  return LAParser::RuleOp3;
}


LAParser::Op3Context* LAParser::op3() {
  Op3Context *_localctx = _tracker.createInstance<Op3Context>(_ctx, getState());
  enterRule(_localctx, 76, LAParser::RuleOp3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    match(LAParser::T__41);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParcelaContext ------------------------------------------------------------------

LAParser::ParcelaContext::ParcelaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::Parcela_unarioContext* LAParser::ParcelaContext::parcela_unario() {
  return getRuleContext<LAParser::Parcela_unarioContext>(0);
}

LAParser::Op_unarioContext* LAParser::ParcelaContext::op_unario() {
  return getRuleContext<LAParser::Op_unarioContext>(0);
}

LAParser::Parcela_nao_unarioContext* LAParser::ParcelaContext::parcela_nao_unario() {
  return getRuleContext<LAParser::Parcela_nao_unarioContext>(0);
}


size_t LAParser::ParcelaContext::getRuleIndex() const {
  return LAParser::RuleParcela;
}


LAParser::ParcelaContext* LAParser::parcela() {
  ParcelaContext *_localctx = _tracker.createInstance<ParcelaContext>(_ctx, getState());
  enterRule(_localctx, 78, LAParser::RuleParcela);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(473);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__10:
      case LAParser::T__37:
      case LAParser::NUM_INT:
      case LAParser::NUM_REAL:
      case LAParser::IDENT:
      case LAParser::ABRE_PAR: {
        enterOuterAlt(_localctx, 1);
        setState(469);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LAParser::T__37) {
          setState(468);
          op_unario();
        }
        setState(471);
        parcela_unario();
        break;
      }

      case LAParser::T__42:
      case LAParser::CADEIA: {
        enterOuterAlt(_localctx, 2);
        setState(472);
        parcela_nao_unario();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parcela_unarioContext ------------------------------------------------------------------

LAParser::Parcela_unarioContext::Parcela_unarioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::IdentificadorContext* LAParser::Parcela_unarioContext::identificador() {
  return getRuleContext<LAParser::IdentificadorContext>(0);
}

tree::TerminalNode* LAParser::Parcela_unarioContext::IDENT() {
  return getToken(LAParser::IDENT, 0);
}

tree::TerminalNode* LAParser::Parcela_unarioContext::ABRE_PAR() {
  return getToken(LAParser::ABRE_PAR, 0);
}

std::vector<LAParser::ExpressaoContext *> LAParser::Parcela_unarioContext::expressao() {
  return getRuleContexts<LAParser::ExpressaoContext>();
}

LAParser::ExpressaoContext* LAParser::Parcela_unarioContext::expressao(size_t i) {
  return getRuleContext<LAParser::ExpressaoContext>(i);
}

tree::TerminalNode* LAParser::Parcela_unarioContext::FECHA_PAR() {
  return getToken(LAParser::FECHA_PAR, 0);
}

std::vector<tree::TerminalNode *> LAParser::Parcela_unarioContext::VIRGULA() {
  return getTokens(LAParser::VIRGULA);
}

tree::TerminalNode* LAParser::Parcela_unarioContext::VIRGULA(size_t i) {
  return getToken(LAParser::VIRGULA, i);
}

tree::TerminalNode* LAParser::Parcela_unarioContext::NUM_INT() {
  return getToken(LAParser::NUM_INT, 0);
}

tree::TerminalNode* LAParser::Parcela_unarioContext::NUM_REAL() {
  return getToken(LAParser::NUM_REAL, 0);
}


size_t LAParser::Parcela_unarioContext::getRuleIndex() const {
  return LAParser::RuleParcela_unario;
}


LAParser::Parcela_unarioContext* LAParser::parcela_unario() {
  Parcela_unarioContext *_localctx = _tracker.createInstance<Parcela_unarioContext>(_ctx, getState());
  enterRule(_localctx, 80, LAParser::RuleParcela_unario);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(497);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(476);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LAParser::T__10) {
        setState(475);
        match(LAParser::T__10);
      }
      setState(478);
      identificador();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(479);
      match(LAParser::IDENT);
      setState(480);
      match(LAParser::ABRE_PAR);
      setState(481);
      expressao();
      setState(486);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LAParser::VIRGULA) {
        setState(482);
        match(LAParser::VIRGULA);
        setState(483);
        expressao();
        setState(488);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(489);
      match(LAParser::FECHA_PAR);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(491);
      match(LAParser::NUM_INT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(492);
      match(LAParser::NUM_REAL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(493);
      match(LAParser::ABRE_PAR);
      setState(494);
      expressao();
      setState(495);
      match(LAParser::FECHA_PAR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parcela_nao_unarioContext ------------------------------------------------------------------

LAParser::Parcela_nao_unarioContext::Parcela_nao_unarioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::IdentificadorContext* LAParser::Parcela_nao_unarioContext::identificador() {
  return getRuleContext<LAParser::IdentificadorContext>(0);
}

tree::TerminalNode* LAParser::Parcela_nao_unarioContext::CADEIA() {
  return getToken(LAParser::CADEIA, 0);
}


size_t LAParser::Parcela_nao_unarioContext::getRuleIndex() const {
  return LAParser::RuleParcela_nao_unario;
}


LAParser::Parcela_nao_unarioContext* LAParser::parcela_nao_unario() {
  Parcela_nao_unarioContext *_localctx = _tracker.createInstance<Parcela_nao_unarioContext>(_ctx, getState());
  enterRule(_localctx, 82, LAParser::RuleParcela_nao_unario);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(502);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__42: {
        enterOuterAlt(_localctx, 1);
        setState(499);
        match(LAParser::T__42);
        setState(500);
        identificador();
        break;
      }

      case LAParser::CADEIA: {
        enterOuterAlt(_localctx, 2);
        setState(501);
        match(LAParser::CADEIA);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exp_relacionalContext ------------------------------------------------------------------

LAParser::Exp_relacionalContext::Exp_relacionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::Exp_aritmeticaContext *> LAParser::Exp_relacionalContext::exp_aritmetica() {
  return getRuleContexts<LAParser::Exp_aritmeticaContext>();
}

LAParser::Exp_aritmeticaContext* LAParser::Exp_relacionalContext::exp_aritmetica(size_t i) {
  return getRuleContext<LAParser::Exp_aritmeticaContext>(i);
}

LAParser::Op_relacionalContext* LAParser::Exp_relacionalContext::op_relacional() {
  return getRuleContext<LAParser::Op_relacionalContext>(0);
}


size_t LAParser::Exp_relacionalContext::getRuleIndex() const {
  return LAParser::RuleExp_relacional;
}


LAParser::Exp_relacionalContext* LAParser::exp_relacional() {
  Exp_relacionalContext *_localctx = _tracker.createInstance<Exp_relacionalContext>(_ctx, getState());
  enterRule(_localctx, 84, LAParser::RuleExp_relacional);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    exp_aritmetica();
    setState(508);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__4)
      | (1ULL << LAParser::T__43)
      | (1ULL << LAParser::T__44)
      | (1ULL << LAParser::T__45)
      | (1ULL << LAParser::T__46)
      | (1ULL << LAParser::T__47))) != 0)) {
      setState(505);
      op_relacional();
      setState(506);
      exp_aritmetica();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_relacionalContext ------------------------------------------------------------------

LAParser::Op_relacionalContext::Op_relacionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Op_relacionalContext::getRuleIndex() const {
  return LAParser::RuleOp_relacional;
}


LAParser::Op_relacionalContext* LAParser::op_relacional() {
  Op_relacionalContext *_localctx = _tracker.createInstance<Op_relacionalContext>(_ctx, getState());
  enterRule(_localctx, 86, LAParser::RuleOp_relacional);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LAParser::T__4)
      | (1ULL << LAParser::T__43)
      | (1ULL << LAParser::T__44)
      | (1ULL << LAParser::T__45)
      | (1ULL << LAParser::T__46)
      | (1ULL << LAParser::T__47))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressaoContext ------------------------------------------------------------------

LAParser::ExpressaoContext::ExpressaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::Termo_logicoContext *> LAParser::ExpressaoContext::termo_logico() {
  return getRuleContexts<LAParser::Termo_logicoContext>();
}

LAParser::Termo_logicoContext* LAParser::ExpressaoContext::termo_logico(size_t i) {
  return getRuleContext<LAParser::Termo_logicoContext>(i);
}

std::vector<LAParser::Op_logico_1Context *> LAParser::ExpressaoContext::op_logico_1() {
  return getRuleContexts<LAParser::Op_logico_1Context>();
}

LAParser::Op_logico_1Context* LAParser::ExpressaoContext::op_logico_1(size_t i) {
  return getRuleContext<LAParser::Op_logico_1Context>(i);
}


size_t LAParser::ExpressaoContext::getRuleIndex() const {
  return LAParser::RuleExpressao;
}


LAParser::ExpressaoContext* LAParser::expressao() {
  ExpressaoContext *_localctx = _tracker.createInstance<ExpressaoContext>(_ctx, getState());
  enterRule(_localctx, 88, LAParser::RuleExpressao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(512);
    termo_logico();
    setState(518);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::T__49) {
      setState(513);
      op_logico_1();
      setState(514);
      termo_logico();
      setState(520);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Termo_logicoContext ------------------------------------------------------------------

LAParser::Termo_logicoContext::Termo_logicoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LAParser::Fator_logicoContext *> LAParser::Termo_logicoContext::fator_logico() {
  return getRuleContexts<LAParser::Fator_logicoContext>();
}

LAParser::Fator_logicoContext* LAParser::Termo_logicoContext::fator_logico(size_t i) {
  return getRuleContext<LAParser::Fator_logicoContext>(i);
}

std::vector<LAParser::Op_logico_2Context *> LAParser::Termo_logicoContext::op_logico_2() {
  return getRuleContexts<LAParser::Op_logico_2Context>();
}

LAParser::Op_logico_2Context* LAParser::Termo_logicoContext::op_logico_2(size_t i) {
  return getRuleContext<LAParser::Op_logico_2Context>(i);
}


size_t LAParser::Termo_logicoContext::getRuleIndex() const {
  return LAParser::RuleTermo_logico;
}


LAParser::Termo_logicoContext* LAParser::termo_logico() {
  Termo_logicoContext *_localctx = _tracker.createInstance<Termo_logicoContext>(_ctx, getState());
  enterRule(_localctx, 90, LAParser::RuleTermo_logico);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    fator_logico();
    setState(527);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LAParser::T__50) {
      setState(522);
      op_logico_2();
      setState(523);
      fator_logico();
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fator_logicoContext ------------------------------------------------------------------

LAParser::Fator_logicoContext::Fator_logicoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::Parcela_logicaContext* LAParser::Fator_logicoContext::parcela_logica() {
  return getRuleContext<LAParser::Parcela_logicaContext>(0);
}


size_t LAParser::Fator_logicoContext::getRuleIndex() const {
  return LAParser::RuleFator_logico;
}


LAParser::Fator_logicoContext* LAParser::fator_logico() {
  Fator_logicoContext *_localctx = _tracker.createInstance<Fator_logicoContext>(_ctx, getState());
  enterRule(_localctx, 92, LAParser::RuleFator_logico);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LAParser::T__48) {
      setState(530);
      match(LAParser::T__48);
    }
    setState(533);
    parcela_logica();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parcela_logicaContext ------------------------------------------------------------------

LAParser::Parcela_logicaContext::Parcela_logicaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LAParser::Exp_relacionalContext* LAParser::Parcela_logicaContext::exp_relacional() {
  return getRuleContext<LAParser::Exp_relacionalContext>(0);
}


size_t LAParser::Parcela_logicaContext::getRuleIndex() const {
  return LAParser::RuleParcela_logica;
}


LAParser::Parcela_logicaContext* LAParser::parcela_logica() {
  Parcela_logicaContext *_localctx = _tracker.createInstance<Parcela_logicaContext>(_ctx, getState());
  enterRule(_localctx, 94, LAParser::RuleParcela_logica);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(537);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LAParser::T__11:
      case LAParser::T__12: {
        enterOuterAlt(_localctx, 1);
        setState(535);
        _la = _input->LA(1);
        if (!(_la == LAParser::T__11

        || _la == LAParser::T__12)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case LAParser::T__10:
      case LAParser::T__37:
      case LAParser::T__42:
      case LAParser::NUM_INT:
      case LAParser::NUM_REAL:
      case LAParser::IDENT:
      case LAParser::CADEIA:
      case LAParser::ABRE_PAR: {
        enterOuterAlt(_localctx, 2);
        setState(536);
        exp_relacional();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_logico_1Context ------------------------------------------------------------------

LAParser::Op_logico_1Context::Op_logico_1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Op_logico_1Context::getRuleIndex() const {
  return LAParser::RuleOp_logico_1;
}


LAParser::Op_logico_1Context* LAParser::op_logico_1() {
  Op_logico_1Context *_localctx = _tracker.createInstance<Op_logico_1Context>(_ctx, getState());
  enterRule(_localctx, 96, LAParser::RuleOp_logico_1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    match(LAParser::T__49);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_logico_2Context ------------------------------------------------------------------

LAParser::Op_logico_2Context::Op_logico_2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LAParser::Op_logico_2Context::getRuleIndex() const {
  return LAParser::RuleOp_logico_2;
}


LAParser::Op_logico_2Context* LAParser::op_logico_2() {
  Op_logico_2Context *_localctx = _tracker.createInstance<Op_logico_2Context>(_ctx, getState());
  enterRule(_localctx, 98, LAParser::RuleOp_logico_2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    match(LAParser::T__50);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> LAParser::_decisionToDFA;
atn::PredictionContextCache LAParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LAParser::_atn;
std::vector<uint16_t> LAParser::_serializedATN;

std::vector<std::string> LAParser::_ruleNames = {
  "programa", "declaracoes", "decl_local_global", "declaracao_local", "variavel", 
  "identificador", "dimensao", "tipo", "tipo_basico", "tipo_basico_ident", 
  "tipo_estendido", "valor_constante", "registro", "declaracao_global", 
  "parametro", "parametros", "corpo", "cmd", "cmdLeia", "cmdEscreva", "cmdSe", 
  "cmdCaso", "cmdPara", "cmdEnquanto", "cmdFaca", "cmdAtribuicao", "cmdChamada", 
  "cmdRetorne", "selecao", "item_selecao", "constantes", "numero_intervalo", 
  "op_unario", "exp_aritmetica", "termo", "fator", "op1", "op2", "op3", 
  "parcela", "parcela_unario", "parcela_nao_unario", "exp_relacional", "op_relacional", 
  "expressao", "termo_logico", "fator_logico", "parcela_logica", "op_logico_1", 
  "op_logico_2"
};

std::vector<std::string> LAParser::_literalNames = {
  "", "'algoritmo'", "'fim_algoritmo'", "'declare'", "'constante'", "'='", 
  "'tipo'", "'literal'", "'inteiro'", "'real'", "'logico'", "'^'", "'verdadeiro'", 
  "'falso'", "'registro'", "'fim_registro'", "'procedimento'", "'fim_procedimento'", 
  "'funcao'", "'fim_funcao'", "'var'", "'leia'", "'escreva'", "'se'", "'entao'", 
  "'senao'", "'fim_se'", "'caso'", "'seja'", "'fim_caso'", "'para'", "'<-'", 
  "'ate'", "'faca'", "'fim_para'", "'enquanto'", "'fim_enquanto'", "'retorne'", 
  "'-'", "'+'", "'*'", "'/'", "'%'", "'&'", "'<>'", "'>='", "'<='", "'>'", 
  "'<'", "'nao'", "'ou'", "'e'", "", "", "", "", "", "", "", "", "'\n'", 
  "':'", "'('", "')'", "'['", "']'", "", "", "'..'", "','", "'.'"
};

std::vector<std::string> LAParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "PALAVRA_CHAVE", 
  "OP_LOGICO", "NUM_INT", "NUM_REAL", "IDENT", "CADEIA", "COMENTARIO", "ESPACO", 
  "LINHA", "DELIMITADOR", "ABRE_PAR", "FECHA_PAR", "ABRE_COL", "FECHA_COL", 
  "OP_ARIT", "OP_REL", "ATE", "VIRGULA", "PONTO", "ERRO"
};

dfa::Vocabulary LAParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LAParser::_tokenNames;

LAParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x49, 0x222, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x6d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x70, 
    0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x74, 0xa, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x83, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x88, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0x8b, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0x93, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x96, 0xb, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0x9e, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xa1, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0xa5, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0xab, 0xa, 0xb, 0x3, 0xc, 0x5, 0xc, 0xae, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xb6, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0xb9, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xc1, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0xc5, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xc8, 0xb, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0xcb, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xce, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd5, 0xa, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xdb, 0xa, 0xf, 0xc, 0xf, 
    0xe, 0xf, 0xde, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0xe1, 0xa, 0xf, 0xc, 0xf, 
    0xe, 0xf, 0xe4, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xe8, 0xa, 0xf, 
    0x3, 0x10, 0x5, 0x10, 0xeb, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0xf0, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xf3, 0xb, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0xfb, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xfe, 0xb, 0x11, 0x3, 0x12, 0x7, 
    0x12, 0x101, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x104, 0xb, 0x12, 0x3, 
    0x12, 0x7, 0x12, 0x107, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x10a, 0xb, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x116, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x11b, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x120, 0xa, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0x123, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x126, 0xb, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 
    0x15, 0x12f, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x132, 0xb, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
    0x13a, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x13d, 0xb, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x7, 0x16, 0x141, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x144, 
    0xb, 0x16, 0x5, 0x16, 0x146, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x150, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x153, 0xb, 0x17, 0x5, 0x17, 0x155, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x161, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x164, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x16c, 0xa, 0x19, 
    0xc, 0x19, 0xe, 0x19, 0x16f, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x175, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x178, 
    0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x5, 0x1b, 0x17e, 
    0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x189, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x18c, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x7, 0x1e, 0x194, 0xa, 0x1e, 0xc, 0x1e, 
    0xe, 0x1e, 0x197, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 
    0x19c, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x19f, 0xb, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x1a4, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 
    0x1a7, 0xb, 0x20, 0x3, 0x21, 0x5, 0x21, 0x1aa, 0xa, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1af, 0xa, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x1b2, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x7, 0x23, 0x1ba, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x1bd, 
    0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x1c3, 
    0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x1c6, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x1cc, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 
    0x1cf, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x5, 0x29, 0x1d8, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x1dc, 0xa, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x1df, 0xa, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 
    0x2a, 0x1e7, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x1ea, 0xb, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x5, 0x2a, 0x1f4, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x1f9, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x5, 0x2c, 0x1ff, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x207, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
    0x20a, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 
    0x210, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x213, 0xb, 0x2f, 0x3, 0x30, 
    0x5, 0x30, 0x216, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x21c, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x2, 0x2, 0x34, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x2, 0x8, 0x3, 0x2, 0x9, 0xc, 0x5, 
    0x2, 0xe, 0xf, 0x38, 0x39, 0x3b, 0x3b, 0x3, 0x2, 0x28, 0x29, 0x3, 0x2, 
    0x2a, 0x2b, 0x4, 0x2, 0x7, 0x7, 0x2e, 0x32, 0x3, 0x2, 0xe, 0xf, 0x2, 
    0x234, 0x2, 0x66, 0x3, 0x2, 0x2, 0x2, 0x4, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x73, 0x3, 0x2, 0x2, 0x2, 0x8, 0x82, 0x3, 0x2, 0x2, 0x2, 0xa, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x8f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x12, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x16, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xe7, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xea, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x102, 0x3, 0x2, 0x2, 0x2, 0x24, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x117, 0x3, 0x2, 0x2, 0x2, 0x28, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x135, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x158, 0x3, 0x2, 0x2, 0x2, 0x30, 0x167, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x172, 0x3, 0x2, 0x2, 0x2, 0x34, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x183, 0x3, 0x2, 0x2, 0x2, 0x38, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x195, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x198, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1a0, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x1db, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1f8, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x58, 0x200, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x202, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x20b, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x215, 0x3, 0x2, 0x2, 0x2, 0x60, 0x21b, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x64, 0x21f, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x67, 0x5, 0x4, 0x3, 0x2, 0x67, 0x68, 0x7, 0x3, 0x2, 0x2, 0x68, 
    0x69, 0x5, 0x22, 0x12, 0x2, 0x69, 0x6a, 0x7, 0x4, 0x2, 0x2, 0x6a, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6d, 0x5, 0x6, 0x4, 0x2, 0x6c, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x5, 0x8, 0x5, 0x2, 
    0x72, 0x74, 0x5, 0x1c, 0xf, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x7, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x7, 0x5, 0x2, 0x2, 0x76, 0x83, 0x5, 0xa, 0x6, 0x2, 0x77, 0x78, 0x7, 
    0x6, 0x2, 0x2, 0x78, 0x79, 0x7, 0x3a, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x3f, 
    0x2, 0x2, 0x7a, 0x7b, 0x5, 0x12, 0xa, 0x2, 0x7b, 0x7c, 0x7, 0x7, 0x2, 
    0x2, 0x7c, 0x7d, 0x5, 0x18, 0xd, 0x2, 0x7d, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7f, 0x7, 0x8, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x3a, 0x2, 0x2, 0x80, 
    0x81, 0x7, 0x3f, 0x2, 0x2, 0x81, 0x83, 0x5, 0x10, 0x9, 0x2, 0x82, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x77, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x9, 0x3, 0x2, 0x2, 0x2, 0x84, 0x89, 0x5, 0xc, 
    0x7, 0x2, 0x85, 0x86, 0x7, 0x47, 0x2, 0x2, 0x86, 0x88, 0x5, 0xc, 0x7, 
    0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 
    0x7, 0x3f, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x10, 0x9, 0x2, 0x8e, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x94, 0x7, 0x3a, 0x2, 0x2, 0x90, 0x91, 0x7, 0x48, 
    0x2, 0x2, 0x91, 0x93, 0x7, 0x3a, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x5, 0xe, 0x8, 0x2, 0x98, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x42, 0x2, 0x2, 0x9a, 0x9b, 0x5, 
    0x44, 0x23, 0x2, 0x9b, 0x9c, 0x7, 0x43, 0x2, 0x2, 0x9c, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa5, 0x5, 0x1a, 0xe, 0x2, 0xa3, 0xa5, 0x5, 0x16, 0xc, 0x2, 0xa4, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x9, 0x2, 0x2, 0x2, 0xa7, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xab, 0x5, 0x12, 0xa, 0x2, 0xa9, 0xab, 0x7, 0x3a, 0x2, 
    0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0x15, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x7, 0xd, 0x2, 0x2, 0xad, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x14, 0xb, 0x2, 0xb0, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x9, 0x3, 0x2, 0x2, 0xb2, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb7, 0x7, 0x10, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0xa, 0x6, 
    0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
    0x7, 0x11, 0x2, 0x2, 0xbb, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 
    0x12, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x3a, 0x2, 0x2, 0xbe, 0xc0, 0x7, 0x40, 
    0x2, 0x2, 0xbf, 0xc1, 0x5, 0x20, 0x11, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc6, 0x7, 0x41, 0x2, 0x2, 0xc3, 0xc5, 0x5, 0x8, 0x5, 0x2, 0xc4, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 0x5, 0x24, 
    0x13, 0x2, 0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xe8, 0x7, 0x13, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x14, 0x2, 0x2, 0xd1, 0xd2, 
    0x7, 0x3a, 0x2, 0x2, 0xd2, 0xd4, 0x7, 0x40, 0x2, 0x2, 0xd3, 0xd5, 0x5, 
    0x20, 0x11, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x41, 0x2, 
    0x2, 0xd7, 0xd8, 0x7, 0x3f, 0x2, 0x2, 0xd8, 0xdc, 0x5, 0x16, 0xc, 0x2, 
    0xd9, 0xdb, 0x5, 0x8, 0x5, 0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x24, 0x13, 0x2, 0xe0, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x15, 0x2, 0x2, 0xe6, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xeb, 0x7, 
    0x16, 0x2, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xf1, 0x5, 0xc, 0x7, 
    0x2, 0xed, 0xee, 0x7, 0x47, 0x2, 0x2, 0xee, 0xf0, 0x5, 0xc, 0x7, 0x2, 
    0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x7, 
    0x3f, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x16, 0xc, 0x2, 0xf6, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xfc, 0x5, 0x1e, 0x10, 0x2, 0xf8, 0xf9, 0x7, 0x47, 0x2, 
    0x2, 0xf9, 0xfb, 0x5, 0x1e, 0x10, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x21, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x5, 0x8, 0x5, 0x2, 0x100, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x5, 
    0x24, 0x13, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x23, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x116, 0x5, 0x26, 0x14, 0x2, 0x10c, 0x116, 0x5, 0x28, 
    0x15, 0x2, 0x10d, 0x116, 0x5, 0x2a, 0x16, 0x2, 0x10e, 0x116, 0x5, 0x2c, 
    0x17, 0x2, 0x10f, 0x116, 0x5, 0x2e, 0x18, 0x2, 0x110, 0x116, 0x5, 0x30, 
    0x19, 0x2, 0x111, 0x116, 0x5, 0x32, 0x1a, 0x2, 0x112, 0x116, 0x5, 0x34, 
    0x1b, 0x2, 0x113, 0x116, 0x5, 0x36, 0x1c, 0x2, 0x114, 0x116, 0x5, 0x38, 
    0x1d, 0x2, 0x115, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x115, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x115, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x115, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x111, 0x3, 0x2, 0x2, 0x2, 0x115, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x25, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 0x17, 
    0x2, 0x2, 0x118, 0x11a, 0x7, 0x40, 0x2, 0x2, 0x119, 0x11b, 0x7, 0xd, 
    0x2, 0x2, 0x11a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x124, 0x5, 0xc, 
    0x7, 0x2, 0x11d, 0x11f, 0x7, 0x47, 0x2, 0x2, 0x11e, 0x120, 0x7, 0xd, 
    0x2, 0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x123, 0x5, 0xc, 
    0x7, 0x2, 0x122, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x127, 0x3, 0x2, 0x2, 0x2, 0x126, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x128, 0x7, 0x41, 0x2, 0x2, 0x128, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12a, 0x7, 0x18, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x40, 
    0x2, 0x2, 0x12b, 0x130, 0x5, 0x5a, 0x2e, 0x2, 0x12c, 0x12d, 0x7, 0x47, 
    0x2, 0x2, 0x12d, 0x12f, 0x5, 0x5a, 0x2e, 0x2, 0x12e, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x132, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x41, 
    0x2, 0x2, 0x134, 0x29, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0x19, 
    0x2, 0x2, 0x136, 0x137, 0x5, 0x5a, 0x2e, 0x2, 0x137, 0x13b, 0x7, 0x1a, 
    0x2, 0x2, 0x138, 0x13a, 0x5, 0x24, 0x13, 0x2, 0x139, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x142, 0x7, 0x1b, 
    0x2, 0x2, 0x13f, 0x141, 0x5, 0x24, 0x13, 0x2, 0x140, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 0x13e, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x148, 0x7, 0x1c, 0x2, 0x2, 0x148, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x14a, 0x7, 0x1d, 0x2, 0x2, 0x14a, 0x14b, 0x5, 0x44, 
    0x23, 0x2, 0x14b, 0x14c, 0x7, 0x1e, 0x2, 0x2, 0x14c, 0x154, 0x5, 0x3a, 
    0x1e, 0x2, 0x14d, 0x151, 0x7, 0x1b, 0x2, 0x2, 0x14e, 0x150, 0x5, 0x24, 
    0x13, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x155, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x154, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x1f, 
    0x2, 0x2, 0x157, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x7, 0x20, 
    0x2, 0x2, 0x159, 0x15a, 0x7, 0x3a, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x21, 
    0x2, 0x2, 0x15b, 0x15c, 0x5, 0x44, 0x23, 0x2, 0x15c, 0x15d, 0x7, 0x22, 
    0x2, 0x2, 0x15d, 0x15e, 0x5, 0x44, 0x23, 0x2, 0x15e, 0x162, 0x7, 0x23, 
    0x2, 0x2, 0x15f, 0x161, 0x5, 0x24, 0x13, 0x2, 0x160, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x164, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x7, 0x24, 
    0x2, 0x2, 0x166, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x7, 0x25, 
    0x2, 0x2, 0x168, 0x169, 0x5, 0x5a, 0x2e, 0x2, 0x169, 0x16d, 0x7, 0x23, 
    0x2, 0x2, 0x16a, 0x16c, 0x5, 0x24, 0x13, 0x2, 0x16b, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x170, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x7, 0x26, 
    0x2, 0x2, 0x171, 0x31, 0x3, 0x2, 0x2, 0x2, 0x172, 0x176, 0x7, 0x23, 
    0x2, 0x2, 0x173, 0x175, 0x5, 0x24, 0x13, 0x2, 0x174, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x175, 0x178, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x22, 
    0x2, 0x2, 0x17a, 0x17b, 0x5, 0x5a, 0x2e, 0x2, 0x17b, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x17c, 0x17e, 0x7, 0xd, 0x2, 0x2, 0x17d, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 
    0x2, 0x2, 0x17f, 0x180, 0x5, 0xc, 0x7, 0x2, 0x180, 0x181, 0x7, 0x21, 
    0x2, 0x2, 0x181, 0x182, 0x5, 0x5a, 0x2e, 0x2, 0x182, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x183, 0x184, 0x7, 0x3a, 0x2, 0x2, 0x184, 0x185, 0x7, 0x40, 
    0x2, 0x2, 0x185, 0x18a, 0x5, 0x5a, 0x2e, 0x2, 0x186, 0x187, 0x7, 0x47, 
    0x2, 0x2, 0x187, 0x189, 0x5, 0x5a, 0x2e, 0x2, 0x188, 0x186, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x188, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18d, 0x3, 0x2, 
    0x2, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x41, 
    0x2, 0x2, 0x18e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x27, 
    0x2, 0x2, 0x190, 0x191, 0x5, 0x5a, 0x2e, 0x2, 0x191, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x194, 0x5, 0x3c, 0x1f, 0x2, 0x193, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x197, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x5, 0x3e, 0x20, 
    0x2, 0x199, 0x19d, 0x7, 0x3f, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x24, 0x13, 
    0x2, 0x19b, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19f, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x1a5, 0x5, 0x40, 0x21, 0x2, 0x1a1, 0x1a2, 0x7, 0x47, 0x2, 0x2, 
    0x1a2, 0x1a4, 0x5, 0x40, 0x21, 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0x42, 0x22, 0x2, 0x1a9, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1b1, 0x7, 0x38, 0x2, 0x2, 0x1ac, 
    0x1ae, 0x7, 0x46, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 0x42, 0x22, 0x2, 0x1ae, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 
    0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x7, 0x38, 0x2, 0x2, 0x1b1, 
    0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x28, 0x2, 0x2, 0x1b4, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1bb, 0x5, 0x46, 0x24, 0x2, 0x1b6, 
    0x1b7, 0x5, 0x4a, 0x26, 0x2, 0x1b7, 0x1b8, 0x5, 0x46, 0x24, 0x2, 0x1b8, 
    0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
    0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
    0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bb, 
    0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c4, 0x5, 0x48, 0x25, 0x2, 0x1bf, 0x1c0, 
    0x5, 0x4c, 0x27, 0x2, 0x1c0, 0x1c1, 0x5, 0x48, 0x25, 0x2, 0x1c1, 0x1c3, 
    0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c6, 
    0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 
    0x3, 0x2, 0x2, 0x2, 0x1c5, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 
    0x2, 0x2, 0x2, 0x1c7, 0x1cd, 0x5, 0x50, 0x29, 0x2, 0x1c8, 0x1c9, 0x5, 
    0x4e, 0x28, 0x2, 0x1c9, 0x1ca, 0x5, 0x50, 0x29, 0x2, 0x1ca, 0x1cc, 0x3, 
    0x2, 0x2, 0x2, 0x1cb, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cf, 0x3, 
    0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 
    0x2, 0x2, 0x2, 0x1ce, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 
    0x2, 0x2, 0x1d0, 0x1d1, 0x9, 0x4, 0x2, 0x2, 0x1d1, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x1d2, 0x1d3, 0x9, 0x5, 0x2, 0x2, 0x1d3, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x1d4, 0x1d5, 0x7, 0x2c, 0x2, 0x2, 0x1d5, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d8, 0x5, 0x42, 0x22, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 
    0x1d9, 0x1dc, 0x5, 0x52, 0x2a, 0x2, 0x1da, 0x1dc, 0x5, 0x54, 0x2b, 0x2, 
    0x1db, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1da, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1df, 0x7, 0xd, 0x2, 0x2, 0x1de, 
    0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1df, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1f4, 0x5, 0xc, 0x7, 0x2, 0x1e1, 
    0x1e2, 0x7, 0x3a, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x40, 0x2, 0x2, 0x1e3, 
    0x1e8, 0x5, 0x5a, 0x2e, 0x2, 0x1e4, 0x1e5, 0x7, 0x47, 0x2, 0x2, 0x1e5, 
    0x1e7, 0x5, 0x5a, 0x2e, 0x2, 0x1e6, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
    0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
    0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x41, 0x2, 0x2, 0x1ec, 
    0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1f4, 0x7, 0x38, 0x2, 0x2, 0x1ee, 
    0x1f4, 0x7, 0x39, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x40, 0x2, 0x2, 0x1f0, 
    0x1f1, 0x5, 0x5a, 0x2e, 0x2, 0x1f1, 0x1f2, 0x7, 0x41, 0x2, 0x2, 0x1f2, 
    0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f4, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x7, 0x2d, 0x2, 0x2, 0x1f6, 
    0x1f9, 0x5, 0xc, 0x7, 0x2, 0x1f7, 0x1f9, 0x7, 0x3b, 0x2, 0x2, 0x1f8, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fe, 0x5, 0x44, 0x23, 0x2, 0x1fb, 
    0x1fc, 0x5, 0x58, 0x2d, 0x2, 0x1fc, 0x1fd, 0x5, 0x44, 0x23, 0x2, 0x1fd, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x57, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 
    0x9, 0x6, 0x2, 0x2, 0x201, 0x59, 0x3, 0x2, 0x2, 0x2, 0x202, 0x208, 0x5, 
    0x5c, 0x2f, 0x2, 0x203, 0x204, 0x5, 0x62, 0x32, 0x2, 0x204, 0x205, 0x5, 
    0x5c, 0x2f, 0x2, 0x205, 0x207, 0x3, 0x2, 0x2, 0x2, 0x206, 0x203, 0x3, 
    0x2, 0x2, 0x2, 0x207, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x208, 0x206, 0x3, 
    0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 0x209, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x211, 0x5, 0x5e, 
    0x30, 0x2, 0x20c, 0x20d, 0x5, 0x64, 0x33, 0x2, 0x20d, 0x20e, 0x5, 0x5e, 
    0x30, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x213, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x7, 0x33, 0x2, 
    0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 
    0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x5, 0x60, 0x31, 
    0x2, 0x218, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21c, 0x9, 0x7, 0x2, 0x2, 
    0x21a, 0x21c, 0x5, 0x56, 0x2c, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 
    0x21b, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x61, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21e, 0x7, 0x34, 0x2, 0x2, 0x21e, 0x63, 0x3, 0x2, 0x2, 0x2, 0x21f, 
    0x220, 0x7, 0x35, 0x2, 0x2, 0x220, 0x65, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x6e, 
    0x73, 0x82, 0x89, 0x94, 0x9f, 0xa4, 0xaa, 0xad, 0xb7, 0xc0, 0xc6, 0xcc, 
    0xd4, 0xdc, 0xe2, 0xe7, 0xea, 0xf1, 0xfc, 0x102, 0x108, 0x115, 0x11a, 
    0x11f, 0x124, 0x130, 0x13b, 0x142, 0x145, 0x151, 0x154, 0x162, 0x16d, 
    0x176, 0x17d, 0x18a, 0x195, 0x19d, 0x1a5, 0x1a9, 0x1ae, 0x1b1, 0x1bb, 
    0x1c4, 0x1cd, 0x1d7, 0x1db, 0x1de, 0x1e8, 0x1f3, 0x1f8, 0x1fe, 0x208, 
    0x211, 0x215, 0x21b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

LAParser::Initializer LAParser::_init;
