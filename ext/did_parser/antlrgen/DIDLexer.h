
// Generated from ./DIDLexer.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  DIDLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, S = 3, Type = 4, Query = 5, Oneway = 6, 
    PrimType = 7, NumType = 8, OPT = 9, VEC = 10, RECORD = 11, VARIANT = 12, 
    Service = 13, FUNC = 14, Name = 15, LeftP = 16, RightP = 17, LeftB = 18, 
    RightB = 19, Arrow = 20, Colon = 21, Semicolon = 22, Eq = 23, Comma = 24
  };

  explicit DIDLexer(antlr4::CharStream *input);

  ~DIDLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

