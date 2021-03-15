
// Generated from LA.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  LAParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, PALAVRA_CHAVE = 52, OP_LOGICO = 53, NUM_INT = 54, NUM_REAL = 55, 
    IDENT = 56, CADEIA = 57, COMENTARIO = 58, ESPACO = 59, LINHA = 60, DELIMITADOR = 61, 
    ABRE_PAR = 62, FECHA_PAR = 63, ABRE_COL = 64, FECHA_COL = 65, OP_ARIT = 66, 
    OP_REL = 67, ATE = 68, VIRGULA = 69, PONTO = 70, ERRO = 71
  };

  enum {
    RulePrograma = 0, RuleDeclaracoes = 1, RuleDecl_local_global = 2, RuleDeclaracao_local = 3, 
    RuleVariavel = 4, RuleIdentificador = 5, RuleDimensao = 6, RuleTipo = 7, 
    RuleTipo_basico = 8, RuleTipo_basico_ident = 9, RuleTipo_estendido = 10, 
    RuleValor_constante = 11, RuleRegistro = 12, RuleDeclaracao_global = 13, 
    RuleParametro = 14, RuleParametros = 15, RuleCorpo = 16, RuleCmd = 17, 
    RuleCmdLeia = 18, RuleCmdEscreva = 19, RuleCmdSe = 20, RuleCmdCaso = 21, 
    RuleCmdPara = 22, RuleCmdEnquanto = 23, RuleCmdFaca = 24, RuleCmdAtribuicao = 25, 
    RuleCmdChamada = 26, RuleCmdRetorne = 27, RuleSelecao = 28, RuleItem_selecao = 29, 
    RuleConstantes = 30, RuleNumero_intervalo = 31, RuleOp_unario = 32, 
    RuleExp_aritmetica = 33, RuleTermo = 34, RuleFator = 35, RuleOp1 = 36, 
    RuleOp2 = 37, RuleOp3 = 38, RuleParcela = 39, RuleParcela_unario = 40, 
    RuleParcela_nao_unario = 41, RuleExp_relacional = 42, RuleOp_relacional = 43, 
    RuleExpressao = 44, RuleTermo_logico = 45, RuleFator_logico = 46, RuleParcela_logica = 47, 
    RuleOp_logico_1 = 48, RuleOp_logico_2 = 49
  };

  explicit LAParser(antlr4::TokenStream *input);
  ~LAParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramaContext;
  class DeclaracoesContext;
  class Decl_local_globalContext;
  class Declaracao_localContext;
  class VariavelContext;
  class IdentificadorContext;
  class DimensaoContext;
  class TipoContext;
  class Tipo_basicoContext;
  class Tipo_basico_identContext;
  class Tipo_estendidoContext;
  class Valor_constanteContext;
  class RegistroContext;
  class Declaracao_globalContext;
  class ParametroContext;
  class ParametrosContext;
  class CorpoContext;
  class CmdContext;
  class CmdLeiaContext;
  class CmdEscrevaContext;
  class CmdSeContext;
  class CmdCasoContext;
  class CmdParaContext;
  class CmdEnquantoContext;
  class CmdFacaContext;
  class CmdAtribuicaoContext;
  class CmdChamadaContext;
  class CmdRetorneContext;
  class SelecaoContext;
  class Item_selecaoContext;
  class ConstantesContext;
  class Numero_intervaloContext;
  class Op_unarioContext;
  class Exp_aritmeticaContext;
  class TermoContext;
  class FatorContext;
  class Op1Context;
  class Op2Context;
  class Op3Context;
  class ParcelaContext;
  class Parcela_unarioContext;
  class Parcela_nao_unarioContext;
  class Exp_relacionalContext;
  class Op_relacionalContext;
  class ExpressaoContext;
  class Termo_logicoContext;
  class Fator_logicoContext;
  class Parcela_logicaContext;
  class Op_logico_1Context;
  class Op_logico_2Context; 

  class  ProgramaContext : public antlr4::ParserRuleContext {
  public:
    ProgramaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaracoesContext *declaracoes();
    CorpoContext *corpo();

   
  };

  ProgramaContext* programa();

  class  DeclaracoesContext : public antlr4::ParserRuleContext {
  public:
    DeclaracoesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Decl_local_globalContext *> decl_local_global();
    Decl_local_globalContext* decl_local_global(size_t i);

   
  };

  DeclaracoesContext* declaracoes();

  class  Decl_local_globalContext : public antlr4::ParserRuleContext {
  public:
    Decl_local_globalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Declaracao_localContext *declaracao_local();
    Declaracao_globalContext *declaracao_global();

   
  };

  Decl_local_globalContext* decl_local_global();

  class  Declaracao_localContext : public antlr4::ParserRuleContext {
  public:
    Declaracao_localContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariavelContext *variavel();
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *DELIMITADOR();
    Tipo_basicoContext *tipo_basico();
    Valor_constanteContext *valor_constante();
    TipoContext *tipo();

   
  };

  Declaracao_localContext* declaracao_local();

  class  VariavelContext : public antlr4::ParserRuleContext {
  public:
    VariavelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentificadorContext *> identificador();
    IdentificadorContext* identificador(size_t i);
    antlr4::tree::TerminalNode *DELIMITADOR();
    TipoContext *tipo();
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

   
  };

  VariavelContext* variavel();

  class  IdentificadorContext : public antlr4::ParserRuleContext {
  public:
    IdentificadorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);
    DimensaoContext *dimensao();
    std::vector<antlr4::tree::TerminalNode *> PONTO();
    antlr4::tree::TerminalNode* PONTO(size_t i);

   
  };

  IdentificadorContext* identificador();

  class  DimensaoContext : public antlr4::ParserRuleContext {
  public:
    DimensaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ABRE_COL();
    antlr4::tree::TerminalNode* ABRE_COL(size_t i);
    std::vector<Exp_aritmeticaContext *> exp_aritmetica();
    Exp_aritmeticaContext* exp_aritmetica(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FECHA_COL();
    antlr4::tree::TerminalNode* FECHA_COL(size_t i);

   
  };

  DimensaoContext* dimensao();

  class  TipoContext : public antlr4::ParserRuleContext {
  public:
    TipoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegistroContext *registro();
    Tipo_estendidoContext *tipo_estendido();

   
  };

  TipoContext* tipo();

  class  Tipo_basicoContext : public antlr4::ParserRuleContext {
  public:
    Tipo_basicoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Tipo_basicoContext* tipo_basico();

  class  Tipo_basico_identContext : public antlr4::ParserRuleContext {
  public:
    Tipo_basico_identContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tipo_basicoContext *tipo_basico();
    antlr4::tree::TerminalNode *IDENT();

   
  };

  Tipo_basico_identContext* tipo_basico_ident();

  class  Tipo_estendidoContext : public antlr4::ParserRuleContext {
  public:
    Tipo_estendidoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tipo_basico_identContext *tipo_basico_ident();

   
  };

  Tipo_estendidoContext* tipo_estendido();

  class  Valor_constanteContext : public antlr4::ParserRuleContext {
  public:
    Valor_constanteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CADEIA();
    antlr4::tree::TerminalNode *NUM_INT();
    antlr4::tree::TerminalNode *NUM_REAL();

   
  };

  Valor_constanteContext* valor_constante();

  class  RegistroContext : public antlr4::ParserRuleContext {
  public:
    RegistroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariavelContext *> variavel();
    VariavelContext* variavel(size_t i);

   
  };

  RegistroContext* registro();

  class  Declaracao_globalContext : public antlr4::ParserRuleContext {
  public:
    Declaracao_globalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *ABRE_PAR();
    antlr4::tree::TerminalNode *FECHA_PAR();
    ParametrosContext *parametros();
    std::vector<Declaracao_localContext *> declaracao_local();
    Declaracao_localContext* declaracao_local(size_t i);
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);
    antlr4::tree::TerminalNode *DELIMITADOR();
    Tipo_estendidoContext *tipo_estendido();

   
  };

  Declaracao_globalContext* declaracao_global();

  class  ParametroContext : public antlr4::ParserRuleContext {
  public:
    ParametroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentificadorContext *> identificador();
    IdentificadorContext* identificador(size_t i);
    antlr4::tree::TerminalNode *DELIMITADOR();
    Tipo_estendidoContext *tipo_estendido();
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

   
  };

  ParametroContext* parametro();

  class  ParametrosContext : public antlr4::ParserRuleContext {
  public:
    ParametrosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParametroContext *> parametro();
    ParametroContext* parametro(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

   
  };

  ParametrosContext* parametros();

  class  CorpoContext : public antlr4::ParserRuleContext {
  public:
    CorpoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Declaracao_localContext *> declaracao_local();
    Declaracao_localContext* declaracao_local(size_t i);
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);

   
  };

  CorpoContext* corpo();

  class  CmdContext : public antlr4::ParserRuleContext {
  public:
    CmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CmdLeiaContext *cmdLeia();
    CmdEscrevaContext *cmdEscreva();
    CmdSeContext *cmdSe();
    CmdCasoContext *cmdCaso();
    CmdParaContext *cmdPara();
    CmdEnquantoContext *cmdEnquanto();
    CmdFacaContext *cmdFaca();
    CmdAtribuicaoContext *cmdAtribuicao();
    CmdChamadaContext *cmdChamada();
    CmdRetorneContext *cmdRetorne();

   
  };

  CmdContext* cmd();

  class  CmdLeiaContext : public antlr4::ParserRuleContext {
  public:
    CmdLeiaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABRE_PAR();
    std::vector<IdentificadorContext *> identificador();
    IdentificadorContext* identificador(size_t i);
    antlr4::tree::TerminalNode *FECHA_PAR();
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

   
  };

  CmdLeiaContext* cmdLeia();

  class  CmdEscrevaContext : public antlr4::ParserRuleContext {
  public:
    CmdEscrevaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABRE_PAR();
    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    antlr4::tree::TerminalNode *FECHA_PAR();
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

   
  };

  CmdEscrevaContext* cmdEscreva();

  class  CmdSeContext : public antlr4::ParserRuleContext {
  public:
    CmdSeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressaoContext *expressao();
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);

   
  };

  CmdSeContext* cmdSe();

  class  CmdCasoContext : public antlr4::ParserRuleContext {
  public:
    CmdCasoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exp_aritmeticaContext *exp_aritmetica();
    SelecaoContext *selecao();
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);

   
  };

  CmdCasoContext* cmdCaso();

  class  CmdParaContext : public antlr4::ParserRuleContext {
  public:
    CmdParaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    std::vector<Exp_aritmeticaContext *> exp_aritmetica();
    Exp_aritmeticaContext* exp_aritmetica(size_t i);
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);

   
  };

  CmdParaContext* cmdPara();

  class  CmdEnquantoContext : public antlr4::ParserRuleContext {
  public:
    CmdEnquantoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressaoContext *expressao();
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);

   
  };

  CmdEnquantoContext* cmdEnquanto();

  class  CmdFacaContext : public antlr4::ParserRuleContext {
  public:
    CmdFacaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressaoContext *expressao();
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);

   
  };

  CmdFacaContext* cmdFaca();

  class  CmdAtribuicaoContext : public antlr4::ParserRuleContext {
  public:
    CmdAtribuicaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentificadorContext *identificador();
    ExpressaoContext *expressao();

   
  };

  CmdAtribuicaoContext* cmdAtribuicao();

  class  CmdChamadaContext : public antlr4::ParserRuleContext {
  public:
    CmdChamadaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *ABRE_PAR();
    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    antlr4::tree::TerminalNode *FECHA_PAR();
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

   
  };

  CmdChamadaContext* cmdChamada();

  class  CmdRetorneContext : public antlr4::ParserRuleContext {
  public:
    CmdRetorneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressaoContext *expressao();

   
  };

  CmdRetorneContext* cmdRetorne();

  class  SelecaoContext : public antlr4::ParserRuleContext {
  public:
    SelecaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Item_selecaoContext *> item_selecao();
    Item_selecaoContext* item_selecao(size_t i);

   
  };

  SelecaoContext* selecao();

  class  Item_selecaoContext : public antlr4::ParserRuleContext {
  public:
    Item_selecaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantesContext *constantes();
    antlr4::tree::TerminalNode *DELIMITADOR();
    std::vector<CmdContext *> cmd();
    CmdContext* cmd(size_t i);

   
  };

  Item_selecaoContext* item_selecao();

  class  ConstantesContext : public antlr4::ParserRuleContext {
  public:
    ConstantesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Numero_intervaloContext *> numero_intervalo();
    Numero_intervaloContext* numero_intervalo(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

   
  };

  ConstantesContext* constantes();

  class  Numero_intervaloContext : public antlr4::ParserRuleContext {
  public:
    Numero_intervaloContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUM_INT();
    antlr4::tree::TerminalNode* NUM_INT(size_t i);
    std::vector<Op_unarioContext *> op_unario();
    Op_unarioContext* op_unario(size_t i);
    antlr4::tree::TerminalNode *ATE();

   
  };

  Numero_intervaloContext* numero_intervalo();

  class  Op_unarioContext : public antlr4::ParserRuleContext {
  public:
    Op_unarioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Op_unarioContext* op_unario();

  class  Exp_aritmeticaContext : public antlr4::ParserRuleContext {
  public:
    Exp_aritmeticaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermoContext *> termo();
    TermoContext* termo(size_t i);
    std::vector<Op1Context *> op1();
    Op1Context* op1(size_t i);

   
  };

  Exp_aritmeticaContext* exp_aritmetica();

  class  TermoContext : public antlr4::ParserRuleContext {
  public:
    TermoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FatorContext *> fator();
    FatorContext* fator(size_t i);
    std::vector<Op2Context *> op2();
    Op2Context* op2(size_t i);

   
  };

  TermoContext* termo();

  class  FatorContext : public antlr4::ParserRuleContext {
  public:
    FatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParcelaContext *> parcela();
    ParcelaContext* parcela(size_t i);
    std::vector<Op3Context *> op3();
    Op3Context* op3(size_t i);

   
  };

  FatorContext* fator();

  class  Op1Context : public antlr4::ParserRuleContext {
  public:
    Op1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Op1Context* op1();

  class  Op2Context : public antlr4::ParserRuleContext {
  public:
    Op2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Op2Context* op2();

  class  Op3Context : public antlr4::ParserRuleContext {
  public:
    Op3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Op3Context* op3();

  class  ParcelaContext : public antlr4::ParserRuleContext {
  public:
    ParcelaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parcela_unarioContext *parcela_unario();
    Op_unarioContext *op_unario();
    Parcela_nao_unarioContext *parcela_nao_unario();

   
  };

  ParcelaContext* parcela();

  class  Parcela_unarioContext : public antlr4::ParserRuleContext {
  public:
    Parcela_unarioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentificadorContext *identificador();
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *ABRE_PAR();
    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    antlr4::tree::TerminalNode *FECHA_PAR();
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);
    antlr4::tree::TerminalNode *NUM_INT();
    antlr4::tree::TerminalNode *NUM_REAL();

   
  };

  Parcela_unarioContext* parcela_unario();

  class  Parcela_nao_unarioContext : public antlr4::ParserRuleContext {
  public:
    Parcela_nao_unarioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentificadorContext *identificador();
    antlr4::tree::TerminalNode *CADEIA();

   
  };

  Parcela_nao_unarioContext* parcela_nao_unario();

  class  Exp_relacionalContext : public antlr4::ParserRuleContext {
  public:
    Exp_relacionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Exp_aritmeticaContext *> exp_aritmetica();
    Exp_aritmeticaContext* exp_aritmetica(size_t i);
    Op_relacionalContext *op_relacional();

   
  };

  Exp_relacionalContext* exp_relacional();

  class  Op_relacionalContext : public antlr4::ParserRuleContext {
  public:
    Op_relacionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Op_relacionalContext* op_relacional();

  class  ExpressaoContext : public antlr4::ParserRuleContext {
  public:
    ExpressaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Termo_logicoContext *> termo_logico();
    Termo_logicoContext* termo_logico(size_t i);
    std::vector<Op_logico_1Context *> op_logico_1();
    Op_logico_1Context* op_logico_1(size_t i);

   
  };

  ExpressaoContext* expressao();

  class  Termo_logicoContext : public antlr4::ParserRuleContext {
  public:
    Termo_logicoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fator_logicoContext *> fator_logico();
    Fator_logicoContext* fator_logico(size_t i);
    std::vector<Op_logico_2Context *> op_logico_2();
    Op_logico_2Context* op_logico_2(size_t i);

   
  };

  Termo_logicoContext* termo_logico();

  class  Fator_logicoContext : public antlr4::ParserRuleContext {
  public:
    Fator_logicoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parcela_logicaContext *parcela_logica();

   
  };

  Fator_logicoContext* fator_logico();

  class  Parcela_logicaContext : public antlr4::ParserRuleContext {
  public:
    Parcela_logicaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exp_relacionalContext *exp_relacional();

   
  };

  Parcela_logicaContext* parcela_logica();

  class  Op_logico_1Context : public antlr4::ParserRuleContext {
  public:
    Op_logico_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Op_logico_1Context* op_logico_1();

  class  Op_logico_2Context : public antlr4::ParserRuleContext {
  public:
    Op_logico_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Op_logico_2Context* op_logico_2();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

