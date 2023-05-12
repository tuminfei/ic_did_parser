
// Generated from ./DIDParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "DIDParserVisitor.h"


/**
 * This class provides an empty implementation of DIDParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  DIDParserBaseVisitor : public DIDParserVisitor {
public:

  virtual std::any visitProgram(DIDParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefination(DIDParser::DefinationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActor(DIDParser::ActorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActortype(DIDParser::ActortypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName(DIDParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitive(DIDParser::PrimitiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponent(DIDParser::ComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComptype(DIDParser::ComptypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption(DIDParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVector(DIDParser::VectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyRecord(DIDParser::EmptyRecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecord(DIDParser::RecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyVariant(DIDParser::EmptyVariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariant(DIDParser::VariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordKV(DIDParser::RecordKVContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordData(DIDParser::RecordDataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariantKV(DIDParser::VariantKVContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariantName(DIDParser::VariantNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReftype(DIDParser::ReftypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctype(DIDParser::FunctypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyTuple(DIDParser::EmptyTupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple(DIDParser::TupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgtypes(DIDParser::ArgtypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(DIDParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneway(DIDParser::OnewayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodtype(DIDParser::MethodtypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

