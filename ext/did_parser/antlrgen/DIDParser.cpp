
// Generated from ./DIDParser.g4 by ANTLR 4.10.1


#include "DIDParserListener.h"
#include "DIDParserVisitor.h"

#include "DIDParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct DIDParserStaticData final {
  DIDParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DIDParserStaticData(const DIDParserStaticData&) = delete;
  DIDParserStaticData(DIDParserStaticData&&) = delete;
  DIDParserStaticData& operator=(const DIDParserStaticData&) = delete;
  DIDParserStaticData& operator=(DIDParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag didparserParserOnceFlag;
DIDParserStaticData *didparserParserStaticData = nullptr;

void didparserParserInitialize() {
  assert(didparserParserStaticData == nullptr);
  auto staticData = std::make_unique<DIDParserStaticData>(
    std::vector<std::string>{
      "program", "defination", "actor", "actortype", "datatype", "comptype", 
      "constype", "recordfield", "variantfield", "reftype", "functype", 
      "tuptype", "argtypes", "funcann", "methodtype"
    },
    std::vector<std::string>{
      "", "", "", "", "'type'", "'query'", "'oneway'", "", "", "'opt'", 
      "'vec'", "'record'", "'variant'", "'service'", "'func'", "", "'('", 
      "')'", "'{'", "'}'", "'->'", "':'", "';'", "'='", "','"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "S", "Type", "Query", "Oneway", 
      "PrimType", "NumType", "OPT", "VEC", "RECORD", "VARIANT", "Service", 
      "FUNC", "Name", "LeftP", "RightP", "LeftB", "RightB", "Arrow", "Colon", 
      "Semicolon", "Eq", "Comma"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,178,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,5,0,32,8,0,10,0,12,0,35,9,0,1,0,3,0,38,8,0,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,2,1,2,3,2,48,8,2,1,2,1,2,1,2,1,2,3,2,54,8,2,1,2,1,2,3,2,58,8,2,
  	1,3,1,3,1,3,1,3,5,3,64,8,3,10,3,12,3,67,9,3,1,3,1,3,1,4,1,4,1,4,3,4,74,
  	8,4,1,5,1,5,3,5,78,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,5,6,92,8,6,10,6,12,6,95,9,6,1,6,3,6,98,8,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,5,6,110,8,6,10,6,12,6,113,9,6,1,6,3,6,116,8,6,1,6,1,6,
  	3,6,120,8,6,1,7,1,7,1,7,1,7,3,7,126,8,7,1,8,1,8,1,8,1,8,3,8,132,8,8,1,
  	9,1,9,1,9,1,9,3,9,138,8,9,1,10,1,10,1,10,1,10,3,10,144,8,10,1,11,1,11,
  	1,11,1,11,1,11,1,11,3,11,152,8,11,1,12,1,12,1,12,5,12,157,8,12,10,12,
  	12,12,160,9,12,1,12,3,12,163,8,12,1,12,1,12,1,12,3,12,168,8,12,1,13,1,
  	13,3,13,172,8,13,1,14,1,14,1,14,1,14,1,14,0,0,15,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,0,0,189,0,33,1,0,0,0,2,39,1,0,0,0,4,45,1,0,0,0,6,59,
  	1,0,0,0,8,73,1,0,0,0,10,77,1,0,0,0,12,119,1,0,0,0,14,125,1,0,0,0,16,131,
  	1,0,0,0,18,137,1,0,0,0,20,139,1,0,0,0,22,151,1,0,0,0,24,167,1,0,0,0,26,
  	171,1,0,0,0,28,173,1,0,0,0,30,32,3,2,1,0,31,30,1,0,0,0,32,35,1,0,0,0,
  	33,31,1,0,0,0,33,34,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,36,38,3,4,2,0,
  	37,36,1,0,0,0,37,38,1,0,0,0,38,1,1,0,0,0,39,40,5,4,0,0,40,41,5,15,0,0,
  	41,42,5,23,0,0,42,43,3,8,4,0,43,44,5,22,0,0,44,3,1,0,0,0,45,47,5,13,0,
  	0,46,48,5,15,0,0,47,46,1,0,0,0,47,48,1,0,0,0,48,49,1,0,0,0,49,53,5,21,
  	0,0,50,51,3,22,11,0,51,52,5,20,0,0,52,54,1,0,0,0,53,50,1,0,0,0,53,54,
  	1,0,0,0,54,57,1,0,0,0,55,58,3,6,3,0,56,58,5,15,0,0,57,55,1,0,0,0,57,56,
  	1,0,0,0,58,5,1,0,0,0,59,65,5,18,0,0,60,61,3,28,14,0,61,62,5,22,0,0,62,
  	64,1,0,0,0,63,60,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,
  	68,1,0,0,0,67,65,1,0,0,0,68,69,5,19,0,0,69,7,1,0,0,0,70,74,5,15,0,0,71,
  	74,5,7,0,0,72,74,3,10,5,0,73,70,1,0,0,0,73,71,1,0,0,0,73,72,1,0,0,0,74,
  	9,1,0,0,0,75,78,3,12,6,0,76,78,3,18,9,0,77,75,1,0,0,0,77,76,1,0,0,0,78,
  	11,1,0,0,0,79,80,5,9,0,0,80,120,3,8,4,0,81,82,5,10,0,0,82,120,3,8,4,0,
  	83,84,5,11,0,0,84,85,5,18,0,0,85,120,5,19,0,0,86,87,5,11,0,0,87,88,5,
  	18,0,0,88,93,3,14,7,0,89,90,5,22,0,0,90,92,3,14,7,0,91,89,1,0,0,0,92,
  	95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,96,
  	98,5,22,0,0,97,96,1,0,0,0,97,98,1,0,0,0,98,99,1,0,0,0,99,100,5,19,0,0,
  	100,120,1,0,0,0,101,102,5,12,0,0,102,103,5,18,0,0,103,120,5,19,0,0,104,
  	105,5,12,0,0,105,106,5,18,0,0,106,111,3,16,8,0,107,108,5,22,0,0,108,110,
  	3,16,8,0,109,107,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,
  	0,0,112,115,1,0,0,0,113,111,1,0,0,0,114,116,5,22,0,0,115,114,1,0,0,0,
  	115,116,1,0,0,0,116,117,1,0,0,0,117,118,5,19,0,0,118,120,1,0,0,0,119,
  	79,1,0,0,0,119,81,1,0,0,0,119,83,1,0,0,0,119,86,1,0,0,0,119,101,1,0,0,
  	0,119,104,1,0,0,0,120,13,1,0,0,0,121,122,5,15,0,0,122,123,5,21,0,0,123,
  	126,3,8,4,0,124,126,3,8,4,0,125,121,1,0,0,0,125,124,1,0,0,0,126,15,1,
  	0,0,0,127,128,5,15,0,0,128,129,5,21,0,0,129,132,3,8,4,0,130,132,5,15,
  	0,0,131,127,1,0,0,0,131,130,1,0,0,0,132,17,1,0,0,0,133,134,5,14,0,0,134,
  	138,3,20,10,0,135,136,5,13,0,0,136,138,3,6,3,0,137,133,1,0,0,0,137,135,
  	1,0,0,0,138,19,1,0,0,0,139,140,3,22,11,0,140,141,5,20,0,0,141,143,3,22,
  	11,0,142,144,3,26,13,0,143,142,1,0,0,0,143,144,1,0,0,0,144,21,1,0,0,0,
  	145,146,5,16,0,0,146,152,5,17,0,0,147,148,5,16,0,0,148,149,3,24,12,0,
  	149,150,5,17,0,0,150,152,1,0,0,0,151,145,1,0,0,0,151,147,1,0,0,0,152,
  	23,1,0,0,0,153,158,3,8,4,0,154,155,5,24,0,0,155,157,3,8,4,0,156,154,1,
  	0,0,0,157,160,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,159,162,1,0,0,0,
  	160,158,1,0,0,0,161,163,5,24,0,0,162,161,1,0,0,0,162,163,1,0,0,0,163,
  	168,1,0,0,0,164,165,5,15,0,0,165,166,5,21,0,0,166,168,3,8,4,0,167,153,
  	1,0,0,0,167,164,1,0,0,0,168,25,1,0,0,0,169,172,5,5,0,0,170,172,5,6,0,
  	0,171,169,1,0,0,0,171,170,1,0,0,0,172,27,1,0,0,0,173,174,5,15,0,0,174,
  	175,5,21,0,0,175,176,3,20,10,0,176,29,1,0,0,0,22,33,37,47,53,57,65,73,
  	77,93,97,111,115,119,125,131,137,143,151,158,162,167,171
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  didparserParserStaticData = staticData.release();
}

}

DIDParser::DIDParser(TokenStream *input) : DIDParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

DIDParser::DIDParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  DIDParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *didparserParserStaticData->atn, didparserParserStaticData->decisionToDFA, didparserParserStaticData->sharedContextCache, options);
}

DIDParser::~DIDParser() {
  delete _interpreter;
}

const atn::ATN& DIDParser::getATN() const {
  return *didparserParserStaticData->atn;
}

std::string DIDParser::getGrammarFileName() const {
  return "DIDParser.g4";
}

const std::vector<std::string>& DIDParser::getRuleNames() const {
  return didparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& DIDParser::getVocabulary() const {
  return didparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView DIDParser::getSerializedATN() const {
  return didparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

DIDParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DIDParser::DefinationContext *> DIDParser::ProgramContext::defination() {
  return getRuleContexts<DIDParser::DefinationContext>();
}

DIDParser::DefinationContext* DIDParser::ProgramContext::defination(size_t i) {
  return getRuleContext<DIDParser::DefinationContext>(i);
}

DIDParser::ActorContext* DIDParser::ProgramContext::actor() {
  return getRuleContext<DIDParser::ActorContext>(0);
}


size_t DIDParser::ProgramContext::getRuleIndex() const {
  return DIDParser::RuleProgram;
}

void DIDParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void DIDParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any DIDParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::ProgramContext* DIDParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, DIDParser::RuleProgram);
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
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DIDParser::Type) {
      setState(30);
      defination();
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DIDParser::Service) {
      setState(36);
      actor();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinationContext ------------------------------------------------------------------

DIDParser::DefinationContext::DefinationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DIDParser::DefinationContext::Type() {
  return getToken(DIDParser::Type, 0);
}

tree::TerminalNode* DIDParser::DefinationContext::Name() {
  return getToken(DIDParser::Name, 0);
}

tree::TerminalNode* DIDParser::DefinationContext::Eq() {
  return getToken(DIDParser::Eq, 0);
}

DIDParser::DatatypeContext* DIDParser::DefinationContext::datatype() {
  return getRuleContext<DIDParser::DatatypeContext>(0);
}

tree::TerminalNode* DIDParser::DefinationContext::Semicolon() {
  return getToken(DIDParser::Semicolon, 0);
}


size_t DIDParser::DefinationContext::getRuleIndex() const {
  return DIDParser::RuleDefination;
}

void DIDParser::DefinationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefination(this);
}

void DIDParser::DefinationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefination(this);
}


std::any DIDParser::DefinationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitDefination(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::DefinationContext* DIDParser::defination() {
  DefinationContext *_localctx = _tracker.createInstance<DefinationContext>(_ctx, getState());
  enterRule(_localctx, 2, DIDParser::RuleDefination);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    match(DIDParser::Type);
    setState(40);
    match(DIDParser::Name);
    setState(41);
    match(DIDParser::Eq);
    setState(42);
    datatype();
    setState(43);
    match(DIDParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActorContext ------------------------------------------------------------------

DIDParser::ActorContext::ActorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DIDParser::ActorContext::Service() {
  return getToken(DIDParser::Service, 0);
}

tree::TerminalNode* DIDParser::ActorContext::Colon() {
  return getToken(DIDParser::Colon, 0);
}

DIDParser::ActortypeContext* DIDParser::ActorContext::actortype() {
  return getRuleContext<DIDParser::ActortypeContext>(0);
}

std::vector<tree::TerminalNode *> DIDParser::ActorContext::Name() {
  return getTokens(DIDParser::Name);
}

tree::TerminalNode* DIDParser::ActorContext::Name(size_t i) {
  return getToken(DIDParser::Name, i);
}

DIDParser::TuptypeContext* DIDParser::ActorContext::tuptype() {
  return getRuleContext<DIDParser::TuptypeContext>(0);
}

tree::TerminalNode* DIDParser::ActorContext::Arrow() {
  return getToken(DIDParser::Arrow, 0);
}


size_t DIDParser::ActorContext::getRuleIndex() const {
  return DIDParser::RuleActor;
}

void DIDParser::ActorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActor(this);
}

void DIDParser::ActorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActor(this);
}


std::any DIDParser::ActorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitActor(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::ActorContext* DIDParser::actor() {
  ActorContext *_localctx = _tracker.createInstance<ActorContext>(_ctx, getState());
  enterRule(_localctx, 4, DIDParser::RuleActor);
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
    setState(45);
    match(DIDParser::Service);
    setState(47);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DIDParser::Name) {
      setState(46);
      match(DIDParser::Name);
    }
    setState(49);
    match(DIDParser::Colon);
    setState(53);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DIDParser::LeftP) {
      setState(50);
      tuptype();
      setState(51);
      match(DIDParser::Arrow);
    }
    setState(57);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DIDParser::LeftB: {
        setState(55);
        actortype();
        break;
      }

      case DIDParser::Name: {
        setState(56);
        match(DIDParser::Name);
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

//----------------- ActortypeContext ------------------------------------------------------------------

DIDParser::ActortypeContext::ActortypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DIDParser::ActortypeContext::LeftB() {
  return getToken(DIDParser::LeftB, 0);
}

tree::TerminalNode* DIDParser::ActortypeContext::RightB() {
  return getToken(DIDParser::RightB, 0);
}

std::vector<DIDParser::MethodtypeContext *> DIDParser::ActortypeContext::methodtype() {
  return getRuleContexts<DIDParser::MethodtypeContext>();
}

DIDParser::MethodtypeContext* DIDParser::ActortypeContext::methodtype(size_t i) {
  return getRuleContext<DIDParser::MethodtypeContext>(i);
}

std::vector<tree::TerminalNode *> DIDParser::ActortypeContext::Semicolon() {
  return getTokens(DIDParser::Semicolon);
}

tree::TerminalNode* DIDParser::ActortypeContext::Semicolon(size_t i) {
  return getToken(DIDParser::Semicolon, i);
}


size_t DIDParser::ActortypeContext::getRuleIndex() const {
  return DIDParser::RuleActortype;
}

void DIDParser::ActortypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActortype(this);
}

void DIDParser::ActortypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActortype(this);
}


std::any DIDParser::ActortypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitActortype(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::ActortypeContext* DIDParser::actortype() {
  ActortypeContext *_localctx = _tracker.createInstance<ActortypeContext>(_ctx, getState());
  enterRule(_localctx, 6, DIDParser::RuleActortype);
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
    setState(59);
    match(DIDParser::LeftB);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DIDParser::Name) {
      setState(60);
      methodtype();
      setState(61);
      match(DIDParser::Semicolon);
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(68);
    match(DIDParser::RightB);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatatypeContext ------------------------------------------------------------------

DIDParser::DatatypeContext::DatatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DIDParser::DatatypeContext::getRuleIndex() const {
  return DIDParser::RuleDatatype;
}

void DIDParser::DatatypeContext::copyFrom(DatatypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrimitiveContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::PrimitiveContext::PrimType() {
  return getToken(DIDParser::PrimType, 0);
}

DIDParser::PrimitiveContext::PrimitiveContext(DatatypeContext *ctx) { copyFrom(ctx); }

void DIDParser::PrimitiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitive(this);
}
void DIDParser::PrimitiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitive(this);
}

std::any DIDParser::PrimitiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitPrimitive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComponentContext ------------------------------------------------------------------

DIDParser::ComptypeContext* DIDParser::ComponentContext::comptype() {
  return getRuleContext<DIDParser::ComptypeContext>(0);
}

DIDParser::ComponentContext::ComponentContext(DatatypeContext *ctx) { copyFrom(ctx); }

void DIDParser::ComponentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent(this);
}
void DIDParser::ComponentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent(this);
}

std::any DIDParser::ComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitComponent(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NameContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::NameContext::Name() {
  return getToken(DIDParser::Name, 0);
}

DIDParser::NameContext::NameContext(DatatypeContext *ctx) { copyFrom(ctx); }

void DIDParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}
void DIDParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

std::any DIDParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}
DIDParser::DatatypeContext* DIDParser::datatype() {
  DatatypeContext *_localctx = _tracker.createInstance<DatatypeContext>(_ctx, getState());
  enterRule(_localctx, 8, DIDParser::RuleDatatype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DIDParser::Name: {
        _localctx = _tracker.createInstance<DIDParser::NameContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(70);
        match(DIDParser::Name);
        break;
      }

      case DIDParser::PrimType: {
        _localctx = _tracker.createInstance<DIDParser::PrimitiveContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(71);
        match(DIDParser::PrimType);
        break;
      }

      case DIDParser::OPT:
      case DIDParser::VEC:
      case DIDParser::RECORD:
      case DIDParser::VARIANT:
      case DIDParser::Service:
      case DIDParser::FUNC: {
        _localctx = _tracker.createInstance<DIDParser::ComponentContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(72);
        comptype();
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

//----------------- ComptypeContext ------------------------------------------------------------------

DIDParser::ComptypeContext::ComptypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DIDParser::ConstypeContext* DIDParser::ComptypeContext::constype() {
  return getRuleContext<DIDParser::ConstypeContext>(0);
}

DIDParser::ReftypeContext* DIDParser::ComptypeContext::reftype() {
  return getRuleContext<DIDParser::ReftypeContext>(0);
}


size_t DIDParser::ComptypeContext::getRuleIndex() const {
  return DIDParser::RuleComptype;
}

void DIDParser::ComptypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComptype(this);
}

void DIDParser::ComptypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComptype(this);
}


std::any DIDParser::ComptypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitComptype(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::ComptypeContext* DIDParser::comptype() {
  ComptypeContext *_localctx = _tracker.createInstance<ComptypeContext>(_ctx, getState());
  enterRule(_localctx, 10, DIDParser::RuleComptype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DIDParser::OPT:
      case DIDParser::VEC:
      case DIDParser::RECORD:
      case DIDParser::VARIANT: {
        enterOuterAlt(_localctx, 1);
        setState(75);
        constype();
        break;
      }

      case DIDParser::Service:
      case DIDParser::FUNC: {
        enterOuterAlt(_localctx, 2);
        setState(76);
        reftype();
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

//----------------- ConstypeContext ------------------------------------------------------------------

DIDParser::ConstypeContext::ConstypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DIDParser::ConstypeContext::getRuleIndex() const {
  return DIDParser::RuleConstype;
}

void DIDParser::ConstypeContext::copyFrom(ConstypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariantContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::VariantContext::VARIANT() {
  return getToken(DIDParser::VARIANT, 0);
}

tree::TerminalNode* DIDParser::VariantContext::LeftB() {
  return getToken(DIDParser::LeftB, 0);
}

std::vector<DIDParser::VariantfieldContext *> DIDParser::VariantContext::variantfield() {
  return getRuleContexts<DIDParser::VariantfieldContext>();
}

DIDParser::VariantfieldContext* DIDParser::VariantContext::variantfield(size_t i) {
  return getRuleContext<DIDParser::VariantfieldContext>(i);
}

tree::TerminalNode* DIDParser::VariantContext::RightB() {
  return getToken(DIDParser::RightB, 0);
}

std::vector<tree::TerminalNode *> DIDParser::VariantContext::Semicolon() {
  return getTokens(DIDParser::Semicolon);
}

tree::TerminalNode* DIDParser::VariantContext::Semicolon(size_t i) {
  return getToken(DIDParser::Semicolon, i);
}

DIDParser::VariantContext::VariantContext(ConstypeContext *ctx) { copyFrom(ctx); }

void DIDParser::VariantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariant(this);
}
void DIDParser::VariantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariant(this);
}

std::any DIDParser::VariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitVariant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyRecordContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::EmptyRecordContext::RECORD() {
  return getToken(DIDParser::RECORD, 0);
}

tree::TerminalNode* DIDParser::EmptyRecordContext::LeftB() {
  return getToken(DIDParser::LeftB, 0);
}

tree::TerminalNode* DIDParser::EmptyRecordContext::RightB() {
  return getToken(DIDParser::RightB, 0);
}

DIDParser::EmptyRecordContext::EmptyRecordContext(ConstypeContext *ctx) { copyFrom(ctx); }

void DIDParser::EmptyRecordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyRecord(this);
}
void DIDParser::EmptyRecordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyRecord(this);
}

std::any DIDParser::EmptyRecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitEmptyRecord(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyVariantContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::EmptyVariantContext::VARIANT() {
  return getToken(DIDParser::VARIANT, 0);
}

tree::TerminalNode* DIDParser::EmptyVariantContext::LeftB() {
  return getToken(DIDParser::LeftB, 0);
}

tree::TerminalNode* DIDParser::EmptyVariantContext::RightB() {
  return getToken(DIDParser::RightB, 0);
}

DIDParser::EmptyVariantContext::EmptyVariantContext(ConstypeContext *ctx) { copyFrom(ctx); }

void DIDParser::EmptyVariantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyVariant(this);
}
void DIDParser::EmptyVariantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyVariant(this);
}

std::any DIDParser::EmptyVariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitEmptyVariant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OptionContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::OptionContext::OPT() {
  return getToken(DIDParser::OPT, 0);
}

DIDParser::DatatypeContext* DIDParser::OptionContext::datatype() {
  return getRuleContext<DIDParser::DatatypeContext>(0);
}

DIDParser::OptionContext::OptionContext(ConstypeContext *ctx) { copyFrom(ctx); }

void DIDParser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}
void DIDParser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}

std::any DIDParser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RecordContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::RecordContext::RECORD() {
  return getToken(DIDParser::RECORD, 0);
}

tree::TerminalNode* DIDParser::RecordContext::LeftB() {
  return getToken(DIDParser::LeftB, 0);
}

std::vector<DIDParser::RecordfieldContext *> DIDParser::RecordContext::recordfield() {
  return getRuleContexts<DIDParser::RecordfieldContext>();
}

DIDParser::RecordfieldContext* DIDParser::RecordContext::recordfield(size_t i) {
  return getRuleContext<DIDParser::RecordfieldContext>(i);
}

tree::TerminalNode* DIDParser::RecordContext::RightB() {
  return getToken(DIDParser::RightB, 0);
}

std::vector<tree::TerminalNode *> DIDParser::RecordContext::Semicolon() {
  return getTokens(DIDParser::Semicolon);
}

tree::TerminalNode* DIDParser::RecordContext::Semicolon(size_t i) {
  return getToken(DIDParser::Semicolon, i);
}

DIDParser::RecordContext::RecordContext(ConstypeContext *ctx) { copyFrom(ctx); }

void DIDParser::RecordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecord(this);
}
void DIDParser::RecordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecord(this);
}

std::any DIDParser::RecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitRecord(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VectorContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::VectorContext::VEC() {
  return getToken(DIDParser::VEC, 0);
}

DIDParser::DatatypeContext* DIDParser::VectorContext::datatype() {
  return getRuleContext<DIDParser::DatatypeContext>(0);
}

DIDParser::VectorContext::VectorContext(ConstypeContext *ctx) { copyFrom(ctx); }

void DIDParser::VectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector(this);
}
void DIDParser::VectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector(this);
}

std::any DIDParser::VectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitVector(this);
  else
    return visitor->visitChildren(this);
}
DIDParser::ConstypeContext* DIDParser::constype() {
  ConstypeContext *_localctx = _tracker.createInstance<ConstypeContext>(_ctx, getState());
  enterRule(_localctx, 12, DIDParser::RuleConstype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(119);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<DIDParser::OptionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(79);
      match(DIDParser::OPT);
      setState(80);
      datatype();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DIDParser::VectorContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(81);
      match(DIDParser::VEC);
      setState(82);
      datatype();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<DIDParser::EmptyRecordContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(83);
      match(DIDParser::RECORD);
      setState(84);
      match(DIDParser::LeftB);
      setState(85);
      match(DIDParser::RightB);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<DIDParser::RecordContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(86);
      match(DIDParser::RECORD);
      setState(87);
      match(DIDParser::LeftB);
      setState(88);
      recordfield();
      setState(93);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(89);
          match(DIDParser::Semicolon);
          setState(90);
          recordfield(); 
        }
        setState(95);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      }
      setState(97);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DIDParser::Semicolon) {
        setState(96);
        match(DIDParser::Semicolon);
      }
      setState(99);
      match(DIDParser::RightB);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<DIDParser::EmptyVariantContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(101);
      match(DIDParser::VARIANT);
      setState(102);
      match(DIDParser::LeftB);
      setState(103);
      match(DIDParser::RightB);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<DIDParser::VariantContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(104);
      match(DIDParser::VARIANT);
      setState(105);
      match(DIDParser::LeftB);
      setState(106);
      variantfield();
      setState(111);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(107);
          match(DIDParser::Semicolon);
          setState(108);
          variantfield(); 
        }
        setState(113);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      }
      setState(115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DIDParser::Semicolon) {
        setState(114);
        match(DIDParser::Semicolon);
      }
      setState(117);
      match(DIDParser::RightB);
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

//----------------- RecordfieldContext ------------------------------------------------------------------

DIDParser::RecordfieldContext::RecordfieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DIDParser::RecordfieldContext::getRuleIndex() const {
  return DIDParser::RuleRecordfield;
}

void DIDParser::RecordfieldContext::copyFrom(RecordfieldContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RecordDataContext ------------------------------------------------------------------

DIDParser::DatatypeContext* DIDParser::RecordDataContext::datatype() {
  return getRuleContext<DIDParser::DatatypeContext>(0);
}

DIDParser::RecordDataContext::RecordDataContext(RecordfieldContext *ctx) { copyFrom(ctx); }

void DIDParser::RecordDataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecordData(this);
}
void DIDParser::RecordDataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecordData(this);
}

std::any DIDParser::RecordDataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitRecordData(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RecordKVContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::RecordKVContext::Name() {
  return getToken(DIDParser::Name, 0);
}

tree::TerminalNode* DIDParser::RecordKVContext::Colon() {
  return getToken(DIDParser::Colon, 0);
}

DIDParser::DatatypeContext* DIDParser::RecordKVContext::datatype() {
  return getRuleContext<DIDParser::DatatypeContext>(0);
}

DIDParser::RecordKVContext::RecordKVContext(RecordfieldContext *ctx) { copyFrom(ctx); }

void DIDParser::RecordKVContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecordKV(this);
}
void DIDParser::RecordKVContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecordKV(this);
}

std::any DIDParser::RecordKVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitRecordKV(this);
  else
    return visitor->visitChildren(this);
}
DIDParser::RecordfieldContext* DIDParser::recordfield() {
  RecordfieldContext *_localctx = _tracker.createInstance<RecordfieldContext>(_ctx, getState());
  enterRule(_localctx, 14, DIDParser::RuleRecordfield);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<DIDParser::RecordKVContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(121);
      match(DIDParser::Name);
      setState(122);
      match(DIDParser::Colon);
      setState(123);
      datatype();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DIDParser::RecordDataContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(124);
      datatype();
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

//----------------- VariantfieldContext ------------------------------------------------------------------

DIDParser::VariantfieldContext::VariantfieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DIDParser::VariantfieldContext::getRuleIndex() const {
  return DIDParser::RuleVariantfield;
}

void DIDParser::VariantfieldContext::copyFrom(VariantfieldContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariantNameContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::VariantNameContext::Name() {
  return getToken(DIDParser::Name, 0);
}

DIDParser::VariantNameContext::VariantNameContext(VariantfieldContext *ctx) { copyFrom(ctx); }

void DIDParser::VariantNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariantName(this);
}
void DIDParser::VariantNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariantName(this);
}

std::any DIDParser::VariantNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitVariantName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariantKVContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::VariantKVContext::Name() {
  return getToken(DIDParser::Name, 0);
}

tree::TerminalNode* DIDParser::VariantKVContext::Colon() {
  return getToken(DIDParser::Colon, 0);
}

DIDParser::DatatypeContext* DIDParser::VariantKVContext::datatype() {
  return getRuleContext<DIDParser::DatatypeContext>(0);
}

DIDParser::VariantKVContext::VariantKVContext(VariantfieldContext *ctx) { copyFrom(ctx); }

void DIDParser::VariantKVContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariantKV(this);
}
void DIDParser::VariantKVContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariantKV(this);
}

std::any DIDParser::VariantKVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitVariantKV(this);
  else
    return visitor->visitChildren(this);
}
DIDParser::VariantfieldContext* DIDParser::variantfield() {
  VariantfieldContext *_localctx = _tracker.createInstance<VariantfieldContext>(_ctx, getState());
  enterRule(_localctx, 16, DIDParser::RuleVariantfield);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<DIDParser::VariantKVContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(127);
      match(DIDParser::Name);
      setState(128);
      match(DIDParser::Colon);
      setState(129);
      datatype();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DIDParser::VariantNameContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(130);
      match(DIDParser::Name);
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

//----------------- ReftypeContext ------------------------------------------------------------------

DIDParser::ReftypeContext::ReftypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DIDParser::ReftypeContext::FUNC() {
  return getToken(DIDParser::FUNC, 0);
}

DIDParser::FunctypeContext* DIDParser::ReftypeContext::functype() {
  return getRuleContext<DIDParser::FunctypeContext>(0);
}

tree::TerminalNode* DIDParser::ReftypeContext::Service() {
  return getToken(DIDParser::Service, 0);
}

DIDParser::ActortypeContext* DIDParser::ReftypeContext::actortype() {
  return getRuleContext<DIDParser::ActortypeContext>(0);
}


size_t DIDParser::ReftypeContext::getRuleIndex() const {
  return DIDParser::RuleReftype;
}

void DIDParser::ReftypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReftype(this);
}

void DIDParser::ReftypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReftype(this);
}


std::any DIDParser::ReftypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitReftype(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::ReftypeContext* DIDParser::reftype() {
  ReftypeContext *_localctx = _tracker.createInstance<ReftypeContext>(_ctx, getState());
  enterRule(_localctx, 18, DIDParser::RuleReftype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DIDParser::FUNC: {
        enterOuterAlt(_localctx, 1);
        setState(133);
        match(DIDParser::FUNC);
        setState(134);
        functype();
        break;
      }

      case DIDParser::Service: {
        enterOuterAlt(_localctx, 2);
        setState(135);
        match(DIDParser::Service);
        setState(136);
        actortype();
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

//----------------- FunctypeContext ------------------------------------------------------------------

DIDParser::FunctypeContext::FunctypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DIDParser::TuptypeContext *> DIDParser::FunctypeContext::tuptype() {
  return getRuleContexts<DIDParser::TuptypeContext>();
}

DIDParser::TuptypeContext* DIDParser::FunctypeContext::tuptype(size_t i) {
  return getRuleContext<DIDParser::TuptypeContext>(i);
}

tree::TerminalNode* DIDParser::FunctypeContext::Arrow() {
  return getToken(DIDParser::Arrow, 0);
}

DIDParser::FuncannContext* DIDParser::FunctypeContext::funcann() {
  return getRuleContext<DIDParser::FuncannContext>(0);
}


size_t DIDParser::FunctypeContext::getRuleIndex() const {
  return DIDParser::RuleFunctype;
}

void DIDParser::FunctypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctype(this);
}

void DIDParser::FunctypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctype(this);
}


std::any DIDParser::FunctypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitFunctype(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::FunctypeContext* DIDParser::functype() {
  FunctypeContext *_localctx = _tracker.createInstance<FunctypeContext>(_ctx, getState());
  enterRule(_localctx, 20, DIDParser::RuleFunctype);
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
    setState(139);
    tuptype();
    setState(140);
    match(DIDParser::Arrow);
    setState(141);
    tuptype();
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DIDParser::Query

    || _la == DIDParser::Oneway) {
      setState(142);
      funcann();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TuptypeContext ------------------------------------------------------------------

DIDParser::TuptypeContext::TuptypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DIDParser::TuptypeContext::getRuleIndex() const {
  return DIDParser::RuleTuptype;
}

void DIDParser::TuptypeContext::copyFrom(TuptypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EmptyTupleContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::EmptyTupleContext::LeftP() {
  return getToken(DIDParser::LeftP, 0);
}

tree::TerminalNode* DIDParser::EmptyTupleContext::RightP() {
  return getToken(DIDParser::RightP, 0);
}

DIDParser::EmptyTupleContext::EmptyTupleContext(TuptypeContext *ctx) { copyFrom(ctx); }

void DIDParser::EmptyTupleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyTuple(this);
}
void DIDParser::EmptyTupleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyTuple(this);
}

std::any DIDParser::EmptyTupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitEmptyTuple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TupleContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::TupleContext::LeftP() {
  return getToken(DIDParser::LeftP, 0);
}

DIDParser::ArgtypesContext* DIDParser::TupleContext::argtypes() {
  return getRuleContext<DIDParser::ArgtypesContext>(0);
}

tree::TerminalNode* DIDParser::TupleContext::RightP() {
  return getToken(DIDParser::RightP, 0);
}

DIDParser::TupleContext::TupleContext(TuptypeContext *ctx) { copyFrom(ctx); }

void DIDParser::TupleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTuple(this);
}
void DIDParser::TupleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTuple(this);
}

std::any DIDParser::TupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitTuple(this);
  else
    return visitor->visitChildren(this);
}
DIDParser::TuptypeContext* DIDParser::tuptype() {
  TuptypeContext *_localctx = _tracker.createInstance<TuptypeContext>(_ctx, getState());
  enterRule(_localctx, 22, DIDParser::RuleTuptype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<DIDParser::EmptyTupleContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(145);
      match(DIDParser::LeftP);
      setState(146);
      match(DIDParser::RightP);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DIDParser::TupleContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(147);
      match(DIDParser::LeftP);
      setState(148);
      argtypes();
      setState(149);
      match(DIDParser::RightP);
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

//----------------- ArgtypesContext ------------------------------------------------------------------

DIDParser::ArgtypesContext::ArgtypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DIDParser::DatatypeContext *> DIDParser::ArgtypesContext::datatype() {
  return getRuleContexts<DIDParser::DatatypeContext>();
}

DIDParser::DatatypeContext* DIDParser::ArgtypesContext::datatype(size_t i) {
  return getRuleContext<DIDParser::DatatypeContext>(i);
}

std::vector<tree::TerminalNode *> DIDParser::ArgtypesContext::Comma() {
  return getTokens(DIDParser::Comma);
}

tree::TerminalNode* DIDParser::ArgtypesContext::Comma(size_t i) {
  return getToken(DIDParser::Comma, i);
}

tree::TerminalNode* DIDParser::ArgtypesContext::Name() {
  return getToken(DIDParser::Name, 0);
}

tree::TerminalNode* DIDParser::ArgtypesContext::Colon() {
  return getToken(DIDParser::Colon, 0);
}


size_t DIDParser::ArgtypesContext::getRuleIndex() const {
  return DIDParser::RuleArgtypes;
}

void DIDParser::ArgtypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgtypes(this);
}

void DIDParser::ArgtypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgtypes(this);
}


std::any DIDParser::ArgtypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitArgtypes(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::ArgtypesContext* DIDParser::argtypes() {
  ArgtypesContext *_localctx = _tracker.createInstance<ArgtypesContext>(_ctx, getState());
  enterRule(_localctx, 24, DIDParser::RuleArgtypes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(153);
      datatype();
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(154);
          match(DIDParser::Comma);
          setState(155);
          datatype(); 
        }
        setState(160);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
      }
      setState(162);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DIDParser::Comma) {
        setState(161);
        match(DIDParser::Comma);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(164);
      match(DIDParser::Name);
      setState(165);
      match(DIDParser::Colon);
      setState(166);
      datatype();
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

//----------------- FuncannContext ------------------------------------------------------------------

DIDParser::FuncannContext::FuncannContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DIDParser::FuncannContext::getRuleIndex() const {
  return DIDParser::RuleFuncann;
}

void DIDParser::FuncannContext::copyFrom(FuncannContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- QueryContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::QueryContext::Query() {
  return getToken(DIDParser::Query, 0);
}

DIDParser::QueryContext::QueryContext(FuncannContext *ctx) { copyFrom(ctx); }

void DIDParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}
void DIDParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}

std::any DIDParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OnewayContext ------------------------------------------------------------------

tree::TerminalNode* DIDParser::OnewayContext::Oneway() {
  return getToken(DIDParser::Oneway, 0);
}

DIDParser::OnewayContext::OnewayContext(FuncannContext *ctx) { copyFrom(ctx); }

void DIDParser::OnewayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneway(this);
}
void DIDParser::OnewayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneway(this);
}

std::any DIDParser::OnewayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitOneway(this);
  else
    return visitor->visitChildren(this);
}
DIDParser::FuncannContext* DIDParser::funcann() {
  FuncannContext *_localctx = _tracker.createInstance<FuncannContext>(_ctx, getState());
  enterRule(_localctx, 26, DIDParser::RuleFuncann);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DIDParser::Query: {
        _localctx = _tracker.createInstance<DIDParser::QueryContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(169);
        match(DIDParser::Query);
        break;
      }

      case DIDParser::Oneway: {
        _localctx = _tracker.createInstance<DIDParser::OnewayContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(170);
        match(DIDParser::Oneway);
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

//----------------- MethodtypeContext ------------------------------------------------------------------

DIDParser::MethodtypeContext::MethodtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DIDParser::MethodtypeContext::Name() {
  return getToken(DIDParser::Name, 0);
}

tree::TerminalNode* DIDParser::MethodtypeContext::Colon() {
  return getToken(DIDParser::Colon, 0);
}

DIDParser::FunctypeContext* DIDParser::MethodtypeContext::functype() {
  return getRuleContext<DIDParser::FunctypeContext>(0);
}


size_t DIDParser::MethodtypeContext::getRuleIndex() const {
  return DIDParser::RuleMethodtype;
}

void DIDParser::MethodtypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodtype(this);
}

void DIDParser::MethodtypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DIDParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodtype(this);
}


std::any DIDParser::MethodtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DIDParserVisitor*>(visitor))
    return parserVisitor->visitMethodtype(this);
  else
    return visitor->visitChildren(this);
}

DIDParser::MethodtypeContext* DIDParser::methodtype() {
  MethodtypeContext *_localctx = _tracker.createInstance<MethodtypeContext>(_ctx, getState());
  enterRule(_localctx, 28, DIDParser::RuleMethodtype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(DIDParser::Name);
    setState(174);
    match(DIDParser::Colon);
    setState(175);
    functype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void DIDParser::initialize() {
  std::call_once(didparserParserOnceFlag, didparserParserInitialize);
}
