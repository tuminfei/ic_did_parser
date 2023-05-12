
// Generated from ./DIDParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "DIDParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by DIDParser.
 */
class  DIDParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(DIDParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(DIDParser::ProgramContext *ctx) = 0;

  virtual void enterDefination(DIDParser::DefinationContext *ctx) = 0;
  virtual void exitDefination(DIDParser::DefinationContext *ctx) = 0;

  virtual void enterActor(DIDParser::ActorContext *ctx) = 0;
  virtual void exitActor(DIDParser::ActorContext *ctx) = 0;

  virtual void enterActortype(DIDParser::ActortypeContext *ctx) = 0;
  virtual void exitActortype(DIDParser::ActortypeContext *ctx) = 0;

  virtual void enterName(DIDParser::NameContext *ctx) = 0;
  virtual void exitName(DIDParser::NameContext *ctx) = 0;

  virtual void enterPrimitive(DIDParser::PrimitiveContext *ctx) = 0;
  virtual void exitPrimitive(DIDParser::PrimitiveContext *ctx) = 0;

  virtual void enterComponent(DIDParser::ComponentContext *ctx) = 0;
  virtual void exitComponent(DIDParser::ComponentContext *ctx) = 0;

  virtual void enterComptype(DIDParser::ComptypeContext *ctx) = 0;
  virtual void exitComptype(DIDParser::ComptypeContext *ctx) = 0;

  virtual void enterOption(DIDParser::OptionContext *ctx) = 0;
  virtual void exitOption(DIDParser::OptionContext *ctx) = 0;

  virtual void enterVector(DIDParser::VectorContext *ctx) = 0;
  virtual void exitVector(DIDParser::VectorContext *ctx) = 0;

  virtual void enterEmptyRecord(DIDParser::EmptyRecordContext *ctx) = 0;
  virtual void exitEmptyRecord(DIDParser::EmptyRecordContext *ctx) = 0;

  virtual void enterRecord(DIDParser::RecordContext *ctx) = 0;
  virtual void exitRecord(DIDParser::RecordContext *ctx) = 0;

  virtual void enterEmptyVariant(DIDParser::EmptyVariantContext *ctx) = 0;
  virtual void exitEmptyVariant(DIDParser::EmptyVariantContext *ctx) = 0;

  virtual void enterVariant(DIDParser::VariantContext *ctx) = 0;
  virtual void exitVariant(DIDParser::VariantContext *ctx) = 0;

  virtual void enterRecordKV(DIDParser::RecordKVContext *ctx) = 0;
  virtual void exitRecordKV(DIDParser::RecordKVContext *ctx) = 0;

  virtual void enterRecordData(DIDParser::RecordDataContext *ctx) = 0;
  virtual void exitRecordData(DIDParser::RecordDataContext *ctx) = 0;

  virtual void enterVariantKV(DIDParser::VariantKVContext *ctx) = 0;
  virtual void exitVariantKV(DIDParser::VariantKVContext *ctx) = 0;

  virtual void enterVariantName(DIDParser::VariantNameContext *ctx) = 0;
  virtual void exitVariantName(DIDParser::VariantNameContext *ctx) = 0;

  virtual void enterReftype(DIDParser::ReftypeContext *ctx) = 0;
  virtual void exitReftype(DIDParser::ReftypeContext *ctx) = 0;

  virtual void enterFunctype(DIDParser::FunctypeContext *ctx) = 0;
  virtual void exitFunctype(DIDParser::FunctypeContext *ctx) = 0;

  virtual void enterEmptyTuple(DIDParser::EmptyTupleContext *ctx) = 0;
  virtual void exitEmptyTuple(DIDParser::EmptyTupleContext *ctx) = 0;

  virtual void enterTuple(DIDParser::TupleContext *ctx) = 0;
  virtual void exitTuple(DIDParser::TupleContext *ctx) = 0;

  virtual void enterArgtypes(DIDParser::ArgtypesContext *ctx) = 0;
  virtual void exitArgtypes(DIDParser::ArgtypesContext *ctx) = 0;

  virtual void enterQuery(DIDParser::QueryContext *ctx) = 0;
  virtual void exitQuery(DIDParser::QueryContext *ctx) = 0;

  virtual void enterOneway(DIDParser::OnewayContext *ctx) = 0;
  virtual void exitOneway(DIDParser::OnewayContext *ctx) = 0;

  virtual void enterMethodtype(DIDParser::MethodtypeContext *ctx) = 0;
  virtual void exitMethodtype(DIDParser::MethodtypeContext *ctx) = 0;


};

