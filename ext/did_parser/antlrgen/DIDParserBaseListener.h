
// Generated from ./DIDParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "DIDParserListener.h"


/**
 * This class provides an empty implementation of DIDParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  DIDParserBaseListener : public DIDParserListener {
public:

  virtual void enterProgram(DIDParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(DIDParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDefination(DIDParser::DefinationContext * /*ctx*/) override { }
  virtual void exitDefination(DIDParser::DefinationContext * /*ctx*/) override { }

  virtual void enterActor(DIDParser::ActorContext * /*ctx*/) override { }
  virtual void exitActor(DIDParser::ActorContext * /*ctx*/) override { }

  virtual void enterActortype(DIDParser::ActortypeContext * /*ctx*/) override { }
  virtual void exitActortype(DIDParser::ActortypeContext * /*ctx*/) override { }

  virtual void enterName(DIDParser::NameContext * /*ctx*/) override { }
  virtual void exitName(DIDParser::NameContext * /*ctx*/) override { }

  virtual void enterPrimitive(DIDParser::PrimitiveContext * /*ctx*/) override { }
  virtual void exitPrimitive(DIDParser::PrimitiveContext * /*ctx*/) override { }

  virtual void enterComponent(DIDParser::ComponentContext * /*ctx*/) override { }
  virtual void exitComponent(DIDParser::ComponentContext * /*ctx*/) override { }

  virtual void enterComptype(DIDParser::ComptypeContext * /*ctx*/) override { }
  virtual void exitComptype(DIDParser::ComptypeContext * /*ctx*/) override { }

  virtual void enterOption(DIDParser::OptionContext * /*ctx*/) override { }
  virtual void exitOption(DIDParser::OptionContext * /*ctx*/) override { }

  virtual void enterVector(DIDParser::VectorContext * /*ctx*/) override { }
  virtual void exitVector(DIDParser::VectorContext * /*ctx*/) override { }

  virtual void enterEmptyRecord(DIDParser::EmptyRecordContext * /*ctx*/) override { }
  virtual void exitEmptyRecord(DIDParser::EmptyRecordContext * /*ctx*/) override { }

  virtual void enterRecord(DIDParser::RecordContext * /*ctx*/) override { }
  virtual void exitRecord(DIDParser::RecordContext * /*ctx*/) override { }

  virtual void enterEmptyVariant(DIDParser::EmptyVariantContext * /*ctx*/) override { }
  virtual void exitEmptyVariant(DIDParser::EmptyVariantContext * /*ctx*/) override { }

  virtual void enterVariant(DIDParser::VariantContext * /*ctx*/) override { }
  virtual void exitVariant(DIDParser::VariantContext * /*ctx*/) override { }

  virtual void enterRecordKV(DIDParser::RecordKVContext * /*ctx*/) override { }
  virtual void exitRecordKV(DIDParser::RecordKVContext * /*ctx*/) override { }

  virtual void enterRecordData(DIDParser::RecordDataContext * /*ctx*/) override { }
  virtual void exitRecordData(DIDParser::RecordDataContext * /*ctx*/) override { }

  virtual void enterVariantKV(DIDParser::VariantKVContext * /*ctx*/) override { }
  virtual void exitVariantKV(DIDParser::VariantKVContext * /*ctx*/) override { }

  virtual void enterVariantName(DIDParser::VariantNameContext * /*ctx*/) override { }
  virtual void exitVariantName(DIDParser::VariantNameContext * /*ctx*/) override { }

  virtual void enterReftype(DIDParser::ReftypeContext * /*ctx*/) override { }
  virtual void exitReftype(DIDParser::ReftypeContext * /*ctx*/) override { }

  virtual void enterFunctype(DIDParser::FunctypeContext * /*ctx*/) override { }
  virtual void exitFunctype(DIDParser::FunctypeContext * /*ctx*/) override { }

  virtual void enterEmptyTuple(DIDParser::EmptyTupleContext * /*ctx*/) override { }
  virtual void exitEmptyTuple(DIDParser::EmptyTupleContext * /*ctx*/) override { }

  virtual void enterTuple(DIDParser::TupleContext * /*ctx*/) override { }
  virtual void exitTuple(DIDParser::TupleContext * /*ctx*/) override { }

  virtual void enterArgtypes(DIDParser::ArgtypesContext * /*ctx*/) override { }
  virtual void exitArgtypes(DIDParser::ArgtypesContext * /*ctx*/) override { }

  virtual void enterQuery(DIDParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(DIDParser::QueryContext * /*ctx*/) override { }

  virtual void enterOneway(DIDParser::OnewayContext * /*ctx*/) override { }
  virtual void exitOneway(DIDParser::OnewayContext * /*ctx*/) override { }

  virtual void enterMethodtype(DIDParser::MethodtypeContext * /*ctx*/) override { }
  virtual void exitMethodtype(DIDParser::MethodtypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

