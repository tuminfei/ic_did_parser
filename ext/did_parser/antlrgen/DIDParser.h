
// Generated from ./DIDParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  DIDParser : public antlr4::Parser {
public:
  enum {
    BlockComment = 1, LineComment = 2, S = 3, Type = 4, Query = 5, Oneway = 6, 
    PrimType = 7, NumType = 8, OPT = 9, VEC = 10, RECORD = 11, VARIANT = 12, 
    Service = 13, FUNC = 14, Name = 15, LeftP = 16, RightP = 17, LeftB = 18, 
    RightB = 19, Arrow = 20, Colon = 21, Semicolon = 22, Eq = 23, Comma = 24
  };

  enum {
    RuleProgram = 0, RuleDefination = 1, RuleActor = 2, RuleActortype = 3, 
    RuleDatatype = 4, RuleComptype = 5, RuleConstype = 6, RuleRecordfield = 7, 
    RuleVariantfield = 8, RuleReftype = 9, RuleFunctype = 10, RuleTuptype = 11, 
    RuleArgtypes = 12, RuleFuncann = 13, RuleMethodtype = 14
  };

  explicit DIDParser(antlr4::TokenStream *input);

  DIDParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~DIDParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class DefinationContext;
  class ActorContext;
  class ActortypeContext;
  class DatatypeContext;
  class ComptypeContext;
  class ConstypeContext;
  class RecordfieldContext;
  class VariantfieldContext;
  class ReftypeContext;
  class FunctypeContext;
  class TuptypeContext;
  class ArgtypesContext;
  class FuncannContext;
  class MethodtypeContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefinationContext *> defination();
    DefinationContext* defination(size_t i);
    ActorContext *actor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  DefinationContext : public antlr4::ParserRuleContext {
  public:
    DefinationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Eq();
    DatatypeContext *datatype();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinationContext* defination();

  class  ActorContext : public antlr4::ParserRuleContext {
  public:
    ActorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Service();
    antlr4::tree::TerminalNode *Colon();
    ActortypeContext *actortype();
    std::vector<antlr4::tree::TerminalNode *> Name();
    antlr4::tree::TerminalNode* Name(size_t i);
    TuptypeContext *tuptype();
    antlr4::tree::TerminalNode *Arrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActorContext* actor();

  class  ActortypeContext : public antlr4::ParserRuleContext {
  public:
    ActortypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftB();
    antlr4::tree::TerminalNode *RightB();
    std::vector<MethodtypeContext *> methodtype();
    MethodtypeContext* methodtype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Semicolon();
    antlr4::tree::TerminalNode* Semicolon(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActortypeContext* actortype();

  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DatatypeContext() = default;
    void copyFrom(DatatypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrimitiveContext : public DatatypeContext {
  public:
    PrimitiveContext(DatatypeContext *ctx);

    antlr4::tree::TerminalNode *PrimType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComponentContext : public DatatypeContext {
  public:
    ComponentContext(DatatypeContext *ctx);

    ComptypeContext *comptype();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NameContext : public DatatypeContext {
  public:
    NameContext(DatatypeContext *ctx);

    antlr4::tree::TerminalNode *Name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DatatypeContext* datatype();

  class  ComptypeContext : public antlr4::ParserRuleContext {
  public:
    ComptypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstypeContext *constype();
    ReftypeContext *reftype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComptypeContext* comptype();

  class  ConstypeContext : public antlr4::ParserRuleContext {
  public:
    ConstypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstypeContext() = default;
    void copyFrom(ConstypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariantContext : public ConstypeContext {
  public:
    VariantContext(ConstypeContext *ctx);

    antlr4::tree::TerminalNode *VARIANT();
    antlr4::tree::TerminalNode *LeftB();
    std::vector<VariantfieldContext *> variantfield();
    VariantfieldContext* variantfield(size_t i);
    antlr4::tree::TerminalNode *RightB();
    std::vector<antlr4::tree::TerminalNode *> Semicolon();
    antlr4::tree::TerminalNode* Semicolon(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EmptyRecordContext : public ConstypeContext {
  public:
    EmptyRecordContext(ConstypeContext *ctx);

    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *LeftB();
    antlr4::tree::TerminalNode *RightB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EmptyVariantContext : public ConstypeContext {
  public:
    EmptyVariantContext(ConstypeContext *ctx);

    antlr4::tree::TerminalNode *VARIANT();
    antlr4::tree::TerminalNode *LeftB();
    antlr4::tree::TerminalNode *RightB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OptionContext : public ConstypeContext {
  public:
    OptionContext(ConstypeContext *ctx);

    antlr4::tree::TerminalNode *OPT();
    DatatypeContext *datatype();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RecordContext : public ConstypeContext {
  public:
    RecordContext(ConstypeContext *ctx);

    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *LeftB();
    std::vector<RecordfieldContext *> recordfield();
    RecordfieldContext* recordfield(size_t i);
    antlr4::tree::TerminalNode *RightB();
    std::vector<antlr4::tree::TerminalNode *> Semicolon();
    antlr4::tree::TerminalNode* Semicolon(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VectorContext : public ConstypeContext {
  public:
    VectorContext(ConstypeContext *ctx);

    antlr4::tree::TerminalNode *VEC();
    DatatypeContext *datatype();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstypeContext* constype();

  class  RecordfieldContext : public antlr4::ParserRuleContext {
  public:
    RecordfieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RecordfieldContext() = default;
    void copyFrom(RecordfieldContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RecordDataContext : public RecordfieldContext {
  public:
    RecordDataContext(RecordfieldContext *ctx);

    DatatypeContext *datatype();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RecordKVContext : public RecordfieldContext {
  public:
    RecordKVContext(RecordfieldContext *ctx);

    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Colon();
    DatatypeContext *datatype();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RecordfieldContext* recordfield();

  class  VariantfieldContext : public antlr4::ParserRuleContext {
  public:
    VariantfieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariantfieldContext() = default;
    void copyFrom(VariantfieldContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariantNameContext : public VariantfieldContext {
  public:
    VariantNameContext(VariantfieldContext *ctx);

    antlr4::tree::TerminalNode *Name();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariantKVContext : public VariantfieldContext {
  public:
    VariantKVContext(VariantfieldContext *ctx);

    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Colon();
    DatatypeContext *datatype();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariantfieldContext* variantfield();

  class  ReftypeContext : public antlr4::ParserRuleContext {
  public:
    ReftypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    FunctypeContext *functype();
    antlr4::tree::TerminalNode *Service();
    ActortypeContext *actortype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReftypeContext* reftype();

  class  FunctypeContext : public antlr4::ParserRuleContext {
  public:
    FunctypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TuptypeContext *> tuptype();
    TuptypeContext* tuptype(size_t i);
    antlr4::tree::TerminalNode *Arrow();
    FuncannContext *funcann();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctypeContext* functype();

  class  TuptypeContext : public antlr4::ParserRuleContext {
  public:
    TuptypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TuptypeContext() = default;
    void copyFrom(TuptypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EmptyTupleContext : public TuptypeContext {
  public:
    EmptyTupleContext(TuptypeContext *ctx);

    antlr4::tree::TerminalNode *LeftP();
    antlr4::tree::TerminalNode *RightP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TupleContext : public TuptypeContext {
  public:
    TupleContext(TuptypeContext *ctx);

    antlr4::tree::TerminalNode *LeftP();
    ArgtypesContext *argtypes();
    antlr4::tree::TerminalNode *RightP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TuptypeContext* tuptype();

  class  ArgtypesContext : public antlr4::ParserRuleContext {
  public:
    ArgtypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DatatypeContext *> datatype();
    DatatypeContext* datatype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgtypesContext* argtypes();

  class  FuncannContext : public antlr4::ParserRuleContext {
  public:
    FuncannContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FuncannContext() = default;
    void copyFrom(FuncannContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  QueryContext : public FuncannContext {
  public:
    QueryContext(FuncannContext *ctx);

    antlr4::tree::TerminalNode *Query();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OnewayContext : public FuncannContext {
  public:
    OnewayContext(FuncannContext *ctx);

    antlr4::tree::TerminalNode *Oneway();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FuncannContext* funcann();

  class  MethodtypeContext : public antlr4::ParserRuleContext {
  public:
    MethodtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Colon();
    FunctypeContext *functype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodtypeContext* methodtype();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

