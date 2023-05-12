
// Generated from ./DIDParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "DIDParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DIDParser.
 */
class  DIDParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DIDParser.
   */
    virtual std::any visitProgram(DIDParser::ProgramContext *context) = 0;

    virtual std::any visitDefination(DIDParser::DefinationContext *context) = 0;

    virtual std::any visitActor(DIDParser::ActorContext *context) = 0;

    virtual std::any visitActortype(DIDParser::ActortypeContext *context) = 0;

    virtual std::any visitName(DIDParser::NameContext *context) = 0;

    virtual std::any visitPrimitive(DIDParser::PrimitiveContext *context) = 0;

    virtual std::any visitComponent(DIDParser::ComponentContext *context) = 0;

    virtual std::any visitComptype(DIDParser::ComptypeContext *context) = 0;

    virtual std::any visitOption(DIDParser::OptionContext *context) = 0;

    virtual std::any visitVector(DIDParser::VectorContext *context) = 0;

    virtual std::any visitEmptyRecord(DIDParser::EmptyRecordContext *context) = 0;

    virtual std::any visitRecord(DIDParser::RecordContext *context) = 0;

    virtual std::any visitEmptyVariant(DIDParser::EmptyVariantContext *context) = 0;

    virtual std::any visitVariant(DIDParser::VariantContext *context) = 0;

    virtual std::any visitRecordKV(DIDParser::RecordKVContext *context) = 0;

    virtual std::any visitRecordData(DIDParser::RecordDataContext *context) = 0;

    virtual std::any visitVariantKV(DIDParser::VariantKVContext *context) = 0;

    virtual std::any visitVariantName(DIDParser::VariantNameContext *context) = 0;

    virtual std::any visitReftype(DIDParser::ReftypeContext *context) = 0;

    virtual std::any visitFunctype(DIDParser::FunctypeContext *context) = 0;

    virtual std::any visitEmptyTuple(DIDParser::EmptyTupleContext *context) = 0;

    virtual std::any visitTuple(DIDParser::TupleContext *context) = 0;

    virtual std::any visitArgtypes(DIDParser::ArgtypesContext *context) = 0;

    virtual std::any visitQuery(DIDParser::QueryContext *context) = 0;

    virtual std::any visitOneway(DIDParser::OnewayContext *context) = 0;

    virtual std::any visitMethodtype(DIDParser::MethodtypeContext *context) = 0;


};

