#include <iostream>

#include <antlr4-runtime.h>

#include "antlrgen/DIDParser.h"
#include "antlrgen/DIDParserBaseVisitor.h"
#include "antlrgen/DIDLexer.h"

#include <rice/rice.hpp>
#include <rice/stl.hpp>

#ifdef _WIN32
#undef OPTIONAL
#undef IN
#undef OUT
#endif

#undef FALSE
#undef TRUE

#undef TYPE

using namespace std;
using namespace Rice;
using namespace antlr4;

Class rb_cProgramContext;
Class rb_cDefinationContext;
Class rb_cActorContext;
Class rb_cDatatypeContext;
Class rb_cActortypeContext;
Class rb_cTuptypeContext;
Class rb_cMethodtypeContext;
Class rb_cPrimitiveContext;
Class rb_cComptypeContext;
Class rb_cComponentContext;
Class rb_cNameContext;
Class rb_cConstypeContext;
Class rb_cReftypeContext;
Class rb_cVariantContext;
Class rb_cVariantfieldContext;
Class rb_cEmptyRecordContext;
Class rb_cEmptyVariantContext;
Class rb_cOptionContext;
Class rb_cRecordContext;
Class rb_cRecordfieldContext;
Class rb_cVectorContext;
Class rb_cRecordDataContext;
Class rb_cRecordKVContext;
Class rb_cVariantNameContext;
Class rb_cVariantKVContext;
Class rb_cFunctypeContext;
Class rb_cFuncannContext;
Class rb_cEmptyTupleContext;
Class rb_cTupleContext;
Class rb_cArgtypesContext;
Class rb_cQueryContext;
Class rb_cOnewayContext;
Class rb_cToken;
Class rb_cParser;
Class rb_cParseTree;
Class rb_cTerminalNode;
Class rb_cContextProxy;

namespace Rice::detail {
  template <>
  class To_Ruby<Token*> {
  public:
    VALUE convert(Token* const &x) {
      if (!x) return Nil;
      return Data_Object<Token>(x, false, rb_cToken);
    }
  };

  template <>
  class To_Ruby<tree::ParseTree*> {
  public:
    VALUE convert(tree::ParseTree* const &x) {
      if (!x) return Nil;
      return Data_Object<tree::ParseTree>(x, false, rb_cParseTree);
    }
  };

  template <>
  class To_Ruby<tree::TerminalNode*> {
  public:
    VALUE convert(tree::TerminalNode* const &x) {
      if (!x) return Nil;
      return Data_Object<tree::TerminalNode>(x, false, rb_cTerminalNode);
    }
  };
}

class ContextProxy {
public:
  ContextProxy(tree::ParseTree* orig) {
    this -> orig = orig;
  }

  tree::ParseTree* getOriginal() {
    return orig;
  }

  std::string getText() {
    return orig -> getText();
  }

  Object getStart() {
    auto token = ((ParserRuleContext*) orig) -> getStart();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Object getStop() {
    auto token = ((ParserRuleContext*) orig) -> getStop();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Array getChildren() {
    Array children;
    if (orig != nullptr) {
      for (auto it = orig -> children.begin(); it != orig -> children.end(); it ++) {
        Object parseTree = ContextProxy::wrapParseTree(*it);

        if (parseTree != Nil) {
          children.push(parseTree);
        }
      }
    }
    return children;
  }

  Object getParent() {
    return orig == nullptr ? Nil : ContextProxy::wrapParseTree(orig -> parent);
  }

  size_t childCount() {
    return orig == nullptr ? 0 : orig -> children.size();
  }

  bool doubleEquals(Object other) {
    if (other.is_a(rb_cContextProxy)) {
      return detail::From_Ruby<ContextProxy*>().convert(other) -> getOriginal() == getOriginal();
    } else {
      return false;
    }
  }

private:

  static Object wrapParseTree(tree::ParseTree* node);

protected:
  tree::ParseTree* orig = nullptr;
};

class TerminalNodeProxy : public ContextProxy {
public:
  TerminalNodeProxy(tree::ParseTree* tree) : ContextProxy(tree) { }
};


class ProgramContextProxy : public ContextProxy {
public:
  ProgramContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object defination();
  Object definationAt(size_t i);
  Object actor();

};

class DefinationContextProxy : public ContextProxy {
public:
  DefinationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object datatype();
  Object Type();
  Object Name();
  Object Eq();
  Object Semicolon();
};

class ActorContextProxy : public ContextProxy {
public:
  ActorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object actortype();
  Object tuptype();
  Object Service();
  Object Colon();
  Object Name();
  Object NameAt(size_t i);
  Object Arrow();
};

class DatatypeContextProxy : public ContextProxy {
public:
  DatatypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class ActortypeContextProxy : public ContextProxy {
public:
  ActortypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object methodtype();
  Object methodtypeAt(size_t i);
  Object LeftB();
  Object RightB();
  Object Semicolon();
  Object SemicolonAt(size_t i);
};

class TuptypeContextProxy : public ContextProxy {
public:
  TuptypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class MethodtypeContextProxy : public ContextProxy {
public:
  MethodtypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object functype();
  Object Name();
  Object Colon();
};

class PrimitiveContextProxy : public ContextProxy {
public:
  PrimitiveContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object PrimType();
};

class ComptypeContextProxy : public ContextProxy {
public:
  ComptypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constype();
  Object reftype();

};

class ComponentContextProxy : public ContextProxy {
public:
  ComponentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object comptype();

};

class NameContextProxy : public ContextProxy {
public:
  NameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object Name();
};

class ConstypeContextProxy : public ContextProxy {
public:
  ConstypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class ReftypeContextProxy : public ContextProxy {
public:
  ReftypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object functype();
  Object actortype();
  Object FUNC();
  Object Service();
};

class VariantContextProxy : public ContextProxy {
public:
  VariantContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object variantfield();
  Object variantfieldAt(size_t i);
  Object VARIANT();
  Object LeftB();
  Object RightB();
  Object Semicolon();
  Object SemicolonAt(size_t i);
};

class VariantfieldContextProxy : public ContextProxy {
public:
  VariantfieldContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class EmptyRecordContextProxy : public ContextProxy {
public:
  EmptyRecordContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object RECORD();
  Object LeftB();
  Object RightB();
};

class EmptyVariantContextProxy : public ContextProxy {
public:
  EmptyVariantContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object VARIANT();
  Object LeftB();
  Object RightB();
};

class OptionContextProxy : public ContextProxy {
public:
  OptionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object datatype();
  Object OPT();
};

class RecordContextProxy : public ContextProxy {
public:
  RecordContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object recordfield();
  Object recordfieldAt(size_t i);
  Object RECORD();
  Object LeftB();
  Object RightB();
  Object Semicolon();
  Object SemicolonAt(size_t i);
};

class RecordfieldContextProxy : public ContextProxy {
public:
  RecordfieldContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class VectorContextProxy : public ContextProxy {
public:
  VectorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object datatype();
  Object VEC();
};

class RecordDataContextProxy : public ContextProxy {
public:
  RecordDataContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object datatype();

};

class RecordKVContextProxy : public ContextProxy {
public:
  RecordKVContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object datatype();
  Object Name();
  Object Colon();
};

class VariantNameContextProxy : public ContextProxy {
public:
  VariantNameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object Name();
};

class VariantKVContextProxy : public ContextProxy {
public:
  VariantKVContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object datatype();
  Object Name();
  Object Colon();
};

class FunctypeContextProxy : public ContextProxy {
public:
  FunctypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tuptype();
  Object tuptypeAt(size_t i);
  Object funcann();
  Object Arrow();
};

class FuncannContextProxy : public ContextProxy {
public:
  FuncannContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class EmptyTupleContextProxy : public ContextProxy {
public:
  EmptyTupleContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object LeftP();
  Object RightP();
};

class TupleContextProxy : public ContextProxy {
public:
  TupleContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object argtypes();
  Object LeftP();
  Object RightP();
};

class ArgtypesContextProxy : public ContextProxy {
public:
  ArgtypesContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object datatype();
  Object datatypeAt(size_t i);
  Object Comma();
  Object CommaAt(size_t i);
  Object Name();
  Object Colon();
};

class QueryContextProxy : public ContextProxy {
public:
  QueryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object Query();
};

class OnewayContextProxy : public ContextProxy {
public:
  OnewayContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object Oneway();
};


namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ProgramContext*> {
  public:
    VALUE convert(DIDParser::ProgramContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ProgramContext>(x, false, rb_cProgramContext);
    }
  };

  template <>
  class To_Ruby<ProgramContextProxy*> {
  public:
    VALUE convert(ProgramContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ProgramContextProxy>(x, false, rb_cProgramContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::DefinationContext*> {
  public:
    VALUE convert(DIDParser::DefinationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::DefinationContext>(x, false, rb_cDefinationContext);
    }
  };

  template <>
  class To_Ruby<DefinationContextProxy*> {
  public:
    VALUE convert(DefinationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<DefinationContextProxy>(x, false, rb_cDefinationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ActorContext*> {
  public:
    VALUE convert(DIDParser::ActorContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ActorContext>(x, false, rb_cActorContext);
    }
  };

  template <>
  class To_Ruby<ActorContextProxy*> {
  public:
    VALUE convert(ActorContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ActorContextProxy>(x, false, rb_cActorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::DatatypeContext*> {
  public:
    VALUE convert(DIDParser::DatatypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::DatatypeContext>(x, false, rb_cDatatypeContext);
    }
  };

  template <>
  class To_Ruby<DatatypeContextProxy*> {
  public:
    VALUE convert(DatatypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<DatatypeContextProxy>(x, false, rb_cDatatypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ActortypeContext*> {
  public:
    VALUE convert(DIDParser::ActortypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ActortypeContext>(x, false, rb_cActortypeContext);
    }
  };

  template <>
  class To_Ruby<ActortypeContextProxy*> {
  public:
    VALUE convert(ActortypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ActortypeContextProxy>(x, false, rb_cActortypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::TuptypeContext*> {
  public:
    VALUE convert(DIDParser::TuptypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::TuptypeContext>(x, false, rb_cTuptypeContext);
    }
  };

  template <>
  class To_Ruby<TuptypeContextProxy*> {
  public:
    VALUE convert(TuptypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TuptypeContextProxy>(x, false, rb_cTuptypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::MethodtypeContext*> {
  public:
    VALUE convert(DIDParser::MethodtypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::MethodtypeContext>(x, false, rb_cMethodtypeContext);
    }
  };

  template <>
  class To_Ruby<MethodtypeContextProxy*> {
  public:
    VALUE convert(MethodtypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<MethodtypeContextProxy>(x, false, rb_cMethodtypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::PrimitiveContext*> {
  public:
    VALUE convert(DIDParser::PrimitiveContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::PrimitiveContext>(x, false, rb_cPrimitiveContext);
    }
  };

  template <>
  class To_Ruby<PrimitiveContextProxy*> {
  public:
    VALUE convert(PrimitiveContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<PrimitiveContextProxy>(x, false, rb_cPrimitiveContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ComptypeContext*> {
  public:
    VALUE convert(DIDParser::ComptypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ComptypeContext>(x, false, rb_cComptypeContext);
    }
  };

  template <>
  class To_Ruby<ComptypeContextProxy*> {
  public:
    VALUE convert(ComptypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ComptypeContextProxy>(x, false, rb_cComptypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ComponentContext*> {
  public:
    VALUE convert(DIDParser::ComponentContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ComponentContext>(x, false, rb_cComponentContext);
    }
  };

  template <>
  class To_Ruby<ComponentContextProxy*> {
  public:
    VALUE convert(ComponentContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ComponentContextProxy>(x, false, rb_cComponentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::NameContext*> {
  public:
    VALUE convert(DIDParser::NameContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::NameContext>(x, false, rb_cNameContext);
    }
  };

  template <>
  class To_Ruby<NameContextProxy*> {
  public:
    VALUE convert(NameContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NameContextProxy>(x, false, rb_cNameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ConstypeContext*> {
  public:
    VALUE convert(DIDParser::ConstypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ConstypeContext>(x, false, rb_cConstypeContext);
    }
  };

  template <>
  class To_Ruby<ConstypeContextProxy*> {
  public:
    VALUE convert(ConstypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ConstypeContextProxy>(x, false, rb_cConstypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ReftypeContext*> {
  public:
    VALUE convert(DIDParser::ReftypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ReftypeContext>(x, false, rb_cReftypeContext);
    }
  };

  template <>
  class To_Ruby<ReftypeContextProxy*> {
  public:
    VALUE convert(ReftypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ReftypeContextProxy>(x, false, rb_cReftypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::VariantContext*> {
  public:
    VALUE convert(DIDParser::VariantContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::VariantContext>(x, false, rb_cVariantContext);
    }
  };

  template <>
  class To_Ruby<VariantContextProxy*> {
  public:
    VALUE convert(VariantContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<VariantContextProxy>(x, false, rb_cVariantContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::VariantfieldContext*> {
  public:
    VALUE convert(DIDParser::VariantfieldContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::VariantfieldContext>(x, false, rb_cVariantfieldContext);
    }
  };

  template <>
  class To_Ruby<VariantfieldContextProxy*> {
  public:
    VALUE convert(VariantfieldContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<VariantfieldContextProxy>(x, false, rb_cVariantfieldContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::EmptyRecordContext*> {
  public:
    VALUE convert(DIDParser::EmptyRecordContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::EmptyRecordContext>(x, false, rb_cEmptyRecordContext);
    }
  };

  template <>
  class To_Ruby<EmptyRecordContextProxy*> {
  public:
    VALUE convert(EmptyRecordContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<EmptyRecordContextProxy>(x, false, rb_cEmptyRecordContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::EmptyVariantContext*> {
  public:
    VALUE convert(DIDParser::EmptyVariantContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::EmptyVariantContext>(x, false, rb_cEmptyVariantContext);
    }
  };

  template <>
  class To_Ruby<EmptyVariantContextProxy*> {
  public:
    VALUE convert(EmptyVariantContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<EmptyVariantContextProxy>(x, false, rb_cEmptyVariantContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::OptionContext*> {
  public:
    VALUE convert(DIDParser::OptionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::OptionContext>(x, false, rb_cOptionContext);
    }
  };

  template <>
  class To_Ruby<OptionContextProxy*> {
  public:
    VALUE convert(OptionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<OptionContextProxy>(x, false, rb_cOptionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::RecordContext*> {
  public:
    VALUE convert(DIDParser::RecordContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::RecordContext>(x, false, rb_cRecordContext);
    }
  };

  template <>
  class To_Ruby<RecordContextProxy*> {
  public:
    VALUE convert(RecordContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RecordContextProxy>(x, false, rb_cRecordContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::RecordfieldContext*> {
  public:
    VALUE convert(DIDParser::RecordfieldContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::RecordfieldContext>(x, false, rb_cRecordfieldContext);
    }
  };

  template <>
  class To_Ruby<RecordfieldContextProxy*> {
  public:
    VALUE convert(RecordfieldContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RecordfieldContextProxy>(x, false, rb_cRecordfieldContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::VectorContext*> {
  public:
    VALUE convert(DIDParser::VectorContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::VectorContext>(x, false, rb_cVectorContext);
    }
  };

  template <>
  class To_Ruby<VectorContextProxy*> {
  public:
    VALUE convert(VectorContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<VectorContextProxy>(x, false, rb_cVectorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::RecordDataContext*> {
  public:
    VALUE convert(DIDParser::RecordDataContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::RecordDataContext>(x, false, rb_cRecordDataContext);
    }
  };

  template <>
  class To_Ruby<RecordDataContextProxy*> {
  public:
    VALUE convert(RecordDataContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RecordDataContextProxy>(x, false, rb_cRecordDataContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::RecordKVContext*> {
  public:
    VALUE convert(DIDParser::RecordKVContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::RecordKVContext>(x, false, rb_cRecordKVContext);
    }
  };

  template <>
  class To_Ruby<RecordKVContextProxy*> {
  public:
    VALUE convert(RecordKVContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RecordKVContextProxy>(x, false, rb_cRecordKVContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::VariantNameContext*> {
  public:
    VALUE convert(DIDParser::VariantNameContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::VariantNameContext>(x, false, rb_cVariantNameContext);
    }
  };

  template <>
  class To_Ruby<VariantNameContextProxy*> {
  public:
    VALUE convert(VariantNameContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<VariantNameContextProxy>(x, false, rb_cVariantNameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::VariantKVContext*> {
  public:
    VALUE convert(DIDParser::VariantKVContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::VariantKVContext>(x, false, rb_cVariantKVContext);
    }
  };

  template <>
  class To_Ruby<VariantKVContextProxy*> {
  public:
    VALUE convert(VariantKVContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<VariantKVContextProxy>(x, false, rb_cVariantKVContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::FunctypeContext*> {
  public:
    VALUE convert(DIDParser::FunctypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::FunctypeContext>(x, false, rb_cFunctypeContext);
    }
  };

  template <>
  class To_Ruby<FunctypeContextProxy*> {
  public:
    VALUE convert(FunctypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<FunctypeContextProxy>(x, false, rb_cFunctypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::FuncannContext*> {
  public:
    VALUE convert(DIDParser::FuncannContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::FuncannContext>(x, false, rb_cFuncannContext);
    }
  };

  template <>
  class To_Ruby<FuncannContextProxy*> {
  public:
    VALUE convert(FuncannContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<FuncannContextProxy>(x, false, rb_cFuncannContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::EmptyTupleContext*> {
  public:
    VALUE convert(DIDParser::EmptyTupleContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::EmptyTupleContext>(x, false, rb_cEmptyTupleContext);
    }
  };

  template <>
  class To_Ruby<EmptyTupleContextProxy*> {
  public:
    VALUE convert(EmptyTupleContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<EmptyTupleContextProxy>(x, false, rb_cEmptyTupleContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::TupleContext*> {
  public:
    VALUE convert(DIDParser::TupleContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::TupleContext>(x, false, rb_cTupleContext);
    }
  };

  template <>
  class To_Ruby<TupleContextProxy*> {
  public:
    VALUE convert(TupleContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TupleContextProxy>(x, false, rb_cTupleContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::ArgtypesContext*> {
  public:
    VALUE convert(DIDParser::ArgtypesContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::ArgtypesContext>(x, false, rb_cArgtypesContext);
    }
  };

  template <>
  class To_Ruby<ArgtypesContextProxy*> {
  public:
    VALUE convert(ArgtypesContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ArgtypesContextProxy>(x, false, rb_cArgtypesContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::QueryContext*> {
  public:
    VALUE convert(DIDParser::QueryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::QueryContext>(x, false, rb_cQueryContext);
    }
  };

  template <>
  class To_Ruby<QueryContextProxy*> {
  public:
    VALUE convert(QueryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryContextProxy>(x, false, rb_cQueryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<DIDParser::OnewayContext*> {
  public:
    VALUE convert(DIDParser::OnewayContext* const &x) {
      if (!x) return Nil;
      return Data_Object<DIDParser::OnewayContext>(x, false, rb_cOnewayContext);
    }
  };

  template <>
  class To_Ruby<OnewayContextProxy*> {
  public:
    VALUE convert(OnewayContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<OnewayContextProxy>(x, false, rb_cOnewayContext);
    }
  };
}


Object ProgramContextProxy::defination() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((DIDParser::ProgramContext*)orig) -> defination().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(definationAt(i));
    }
  }

  return std::move(a);
}

Object ProgramContextProxy::definationAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ProgramContext*)orig) -> defination(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ProgramContextProxy::actor() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ProgramContext*)orig) -> actor();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object DefinationContextProxy::datatype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::DefinationContext*)orig) -> datatype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object DefinationContextProxy::Type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::DefinationContext*)orig) -> Type();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinationContextProxy::Name() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::DefinationContext*)orig) -> Name();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinationContextProxy::Eq() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::DefinationContext*)orig) -> Eq();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinationContextProxy::Semicolon() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::DefinationContext*)orig) -> Semicolon();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActorContextProxy::actortype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ActorContext*)orig) -> actortype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ActorContextProxy::tuptype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ActorContext*)orig) -> tuptype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ActorContextProxy::Service() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ActorContext*)orig) -> Service();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActorContextProxy::Colon() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ActorContext*)orig) -> Colon();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActorContextProxy::Name() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((DIDParser::ActorContext*)orig) -> Name();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ActorContextProxy::NameAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ActorContext*)orig) -> Name(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActorContextProxy::Arrow() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ActorContext*)orig) -> Arrow();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActortypeContextProxy::methodtype() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((DIDParser::ActortypeContext*)orig) -> methodtype().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(methodtypeAt(i));
    }
  }

  return std::move(a);
}

Object ActortypeContextProxy::methodtypeAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ActortypeContext*)orig) -> methodtype(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ActortypeContextProxy::LeftB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ActortypeContext*)orig) -> LeftB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActortypeContextProxy::RightB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ActortypeContext*)orig) -> RightB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActortypeContextProxy::Semicolon() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((DIDParser::ActortypeContext*)orig) -> Semicolon();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ActortypeContextProxy::SemicolonAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ActortypeContext*)orig) -> Semicolon(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object MethodtypeContextProxy::functype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::MethodtypeContext*)orig) -> functype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object MethodtypeContextProxy::Name() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::MethodtypeContext*)orig) -> Name();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object MethodtypeContextProxy::Colon() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::MethodtypeContext*)orig) -> Colon();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PrimitiveContextProxy::PrimType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::PrimitiveContext*)orig) -> PrimType();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComptypeContextProxy::constype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ComptypeContext*)orig) -> constype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ComptypeContextProxy::reftype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ComptypeContext*)orig) -> reftype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ComponentContextProxy::comptype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ComponentContext*)orig) -> comptype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NameContextProxy::Name() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::NameContext*)orig) -> Name();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ReftypeContextProxy::functype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ReftypeContext*)orig) -> functype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ReftypeContextProxy::actortype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ReftypeContext*)orig) -> actortype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ReftypeContextProxy::FUNC() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ReftypeContext*)orig) -> FUNC();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ReftypeContextProxy::Service() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ReftypeContext*)orig) -> Service();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariantContextProxy::variantfield() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((DIDParser::VariantContext*)orig) -> variantfield().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(variantfieldAt(i));
    }
  }

  return std::move(a);
}

Object VariantContextProxy::variantfieldAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::VariantContext*)orig) -> variantfield(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object VariantContextProxy::VARIANT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VariantContext*)orig) -> VARIANT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariantContextProxy::LeftB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VariantContext*)orig) -> LeftB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariantContextProxy::RightB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VariantContext*)orig) -> RightB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariantContextProxy::Semicolon() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((DIDParser::VariantContext*)orig) -> Semicolon();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object VariantContextProxy::SemicolonAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VariantContext*)orig) -> Semicolon(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyRecordContextProxy::RECORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyRecordContext*)orig) -> RECORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyRecordContextProxy::LeftB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyRecordContext*)orig) -> LeftB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyRecordContextProxy::RightB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyRecordContext*)orig) -> RightB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyVariantContextProxy::VARIANT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyVariantContext*)orig) -> VARIANT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyVariantContextProxy::LeftB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyVariantContext*)orig) -> LeftB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyVariantContextProxy::RightB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyVariantContext*)orig) -> RightB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OptionContextProxy::datatype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::OptionContext*)orig) -> datatype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object OptionContextProxy::OPT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::OptionContext*)orig) -> OPT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RecordContextProxy::recordfield() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((DIDParser::RecordContext*)orig) -> recordfield().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(recordfieldAt(i));
    }
  }

  return std::move(a);
}

Object RecordContextProxy::recordfieldAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::RecordContext*)orig) -> recordfield(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RecordContextProxy::RECORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::RecordContext*)orig) -> RECORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RecordContextProxy::LeftB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::RecordContext*)orig) -> LeftB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RecordContextProxy::RightB() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::RecordContext*)orig) -> RightB();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RecordContextProxy::Semicolon() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((DIDParser::RecordContext*)orig) -> Semicolon();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object RecordContextProxy::SemicolonAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::RecordContext*)orig) -> Semicolon(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VectorContextProxy::datatype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::VectorContext*)orig) -> datatype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object VectorContextProxy::VEC() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VectorContext*)orig) -> VEC();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RecordDataContextProxy::datatype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::RecordDataContext*)orig) -> datatype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RecordKVContextProxy::datatype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::RecordKVContext*)orig) -> datatype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RecordKVContextProxy::Name() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::RecordKVContext*)orig) -> Name();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RecordKVContextProxy::Colon() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::RecordKVContext*)orig) -> Colon();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariantNameContextProxy::Name() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VariantNameContext*)orig) -> Name();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariantKVContextProxy::datatype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::VariantKVContext*)orig) -> datatype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object VariantKVContextProxy::Name() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VariantKVContext*)orig) -> Name();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariantKVContextProxy::Colon() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::VariantKVContext*)orig) -> Colon();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FunctypeContextProxy::tuptype() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((DIDParser::FunctypeContext*)orig) -> tuptype().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(tuptypeAt(i));
    }
  }

  return std::move(a);
}

Object FunctypeContextProxy::tuptypeAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::FunctypeContext*)orig) -> tuptype(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FunctypeContextProxy::funcann() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::FunctypeContext*)orig) -> funcann();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FunctypeContextProxy::Arrow() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::FunctypeContext*)orig) -> Arrow();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyTupleContextProxy::LeftP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyTupleContext*)orig) -> LeftP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EmptyTupleContextProxy::RightP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::EmptyTupleContext*)orig) -> RightP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TupleContextProxy::argtypes() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::TupleContext*)orig) -> argtypes();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TupleContextProxy::LeftP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::TupleContext*)orig) -> LeftP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TupleContextProxy::RightP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::TupleContext*)orig) -> RightP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArgtypesContextProxy::datatype() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((DIDParser::ArgtypesContext*)orig) -> datatype().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(datatypeAt(i));
    }
  }

  return std::move(a);
}

Object ArgtypesContextProxy::datatypeAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((DIDParser::ArgtypesContext*)orig) -> datatype(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ArgtypesContextProxy::Comma() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((DIDParser::ArgtypesContext*)orig) -> Comma();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ArgtypesContextProxy::CommaAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ArgtypesContext*)orig) -> Comma(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArgtypesContextProxy::Name() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ArgtypesContext*)orig) -> Name();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArgtypesContextProxy::Colon() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::ArgtypesContext*)orig) -> Colon();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryContextProxy::Query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::QueryContext*)orig) -> Query();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OnewayContextProxy::Oneway() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((DIDParser::OnewayContext*)orig) -> Oneway();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}


class VisitorProxy : public DIDParserBaseVisitor, public Director {
public:
  VisitorProxy(Object self) : Director(self) { }

  Object ruby_visit(ContextProxy* proxy) {
    auto result = visit(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  Object ruby_visitChildren(ContextProxy* proxy) {
    auto result = visitChildren(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  virtual antlrcpp::Any visitProgram(DIDParser::ProgramContext *ctx) override {
    ProgramContextProxy proxy(ctx);
    return getSelf().call("visit_program", &proxy);
  }

  virtual antlrcpp::Any visitDefination(DIDParser::DefinationContext *ctx) override {
    DefinationContextProxy proxy(ctx);
    return getSelf().call("visit_defination", &proxy);
  }

  virtual antlrcpp::Any visitActor(DIDParser::ActorContext *ctx) override {
    ActorContextProxy proxy(ctx);
    return getSelf().call("visit_actor", &proxy);
  }

  virtual antlrcpp::Any visitActortype(DIDParser::ActortypeContext *ctx) override {
    ActortypeContextProxy proxy(ctx);
    return getSelf().call("visit_actortype", &proxy);
  }

  virtual antlrcpp::Any visitName(DIDParser::NameContext *ctx) override {
    NameContextProxy proxy(ctx);
    return getSelf().call("visit_name", &proxy);
  }

  virtual antlrcpp::Any visitPrimitive(DIDParser::PrimitiveContext *ctx) override {
    PrimitiveContextProxy proxy(ctx);
    return getSelf().call("visit_primitive", &proxy);
  }

  virtual antlrcpp::Any visitComponent(DIDParser::ComponentContext *ctx) override {
    ComponentContextProxy proxy(ctx);
    return getSelf().call("visit_component", &proxy);
  }

  virtual antlrcpp::Any visitComptype(DIDParser::ComptypeContext *ctx) override {
    ComptypeContextProxy proxy(ctx);
    return getSelf().call("visit_comptype", &proxy);
  }

  virtual antlrcpp::Any visitOption(DIDParser::OptionContext *ctx) override {
    OptionContextProxy proxy(ctx);
    return getSelf().call("visit_option", &proxy);
  }

  virtual antlrcpp::Any visitVector(DIDParser::VectorContext *ctx) override {
    VectorContextProxy proxy(ctx);
    return getSelf().call("visit_vector", &proxy);
  }

  virtual antlrcpp::Any visitEmptyRecord(DIDParser::EmptyRecordContext *ctx) override {
    EmptyRecordContextProxy proxy(ctx);
    return getSelf().call("visit_empty_record", &proxy);
  }

  virtual antlrcpp::Any visitRecord(DIDParser::RecordContext *ctx) override {
    RecordContextProxy proxy(ctx);
    return getSelf().call("visit_record", &proxy);
  }

  virtual antlrcpp::Any visitEmptyVariant(DIDParser::EmptyVariantContext *ctx) override {
    EmptyVariantContextProxy proxy(ctx);
    return getSelf().call("visit_empty_variant", &proxy);
  }

  virtual antlrcpp::Any visitVariant(DIDParser::VariantContext *ctx) override {
    VariantContextProxy proxy(ctx);
    return getSelf().call("visit_variant", &proxy);
  }

  virtual antlrcpp::Any visitRecordKV(DIDParser::RecordKVContext *ctx) override {
    RecordKVContextProxy proxy(ctx);
    return getSelf().call("visit_record_kv", &proxy);
  }

  virtual antlrcpp::Any visitRecordData(DIDParser::RecordDataContext *ctx) override {
    RecordDataContextProxy proxy(ctx);
    return getSelf().call("visit_record_data", &proxy);
  }

  virtual antlrcpp::Any visitVariantKV(DIDParser::VariantKVContext *ctx) override {
    VariantKVContextProxy proxy(ctx);
    return getSelf().call("visit_variant_kv", &proxy);
  }

  virtual antlrcpp::Any visitVariantName(DIDParser::VariantNameContext *ctx) override {
    VariantNameContextProxy proxy(ctx);
    return getSelf().call("visit_variant_name", &proxy);
  }

  virtual antlrcpp::Any visitReftype(DIDParser::ReftypeContext *ctx) override {
    ReftypeContextProxy proxy(ctx);
    return getSelf().call("visit_reftype", &proxy);
  }

  virtual antlrcpp::Any visitFunctype(DIDParser::FunctypeContext *ctx) override {
    FunctypeContextProxy proxy(ctx);
    return getSelf().call("visit_functype", &proxy);
  }

  virtual antlrcpp::Any visitEmptyTuple(DIDParser::EmptyTupleContext *ctx) override {
    EmptyTupleContextProxy proxy(ctx);
    return getSelf().call("visit_empty_tuple", &proxy);
  }

  virtual antlrcpp::Any visitTuple(DIDParser::TupleContext *ctx) override {
    TupleContextProxy proxy(ctx);
    return getSelf().call("visit_tuple", &proxy);
  }

  virtual antlrcpp::Any visitArgtypes(DIDParser::ArgtypesContext *ctx) override {
    ArgtypesContextProxy proxy(ctx);
    return getSelf().call("visit_argtypes", &proxy);
  }

  virtual antlrcpp::Any visitQuery(DIDParser::QueryContext *ctx) override {
    QueryContextProxy proxy(ctx);
    return getSelf().call("visit_query", &proxy);
  }

  virtual antlrcpp::Any visitOneway(DIDParser::OnewayContext *ctx) override {
    OnewayContextProxy proxy(ctx);
    return getSelf().call("visit_oneway", &proxy);
  }

  virtual antlrcpp::Any visitMethodtype(DIDParser::MethodtypeContext *ctx) override {
    MethodtypeContextProxy proxy(ctx);
    return getSelf().call("visit_methodtype", &proxy);
  }

};


class ParserProxy {
public:
  static ParserProxy* parse(string code) {
    auto input = new ANTLRInputStream(code);
    return parseStream(input);
  }

  static ParserProxy* parseFile(string file) {
    ifstream stream;
    stream.open(file);

    auto input = new ANTLRInputStream(stream);
    auto parser = parseStream(input);

    stream.close();

    return parser;
  }

  Object actor() {
    auto ctx = this -> parser -> actor();

    ActorContextProxy proxy((DIDParser::ActorContext*) ctx);
    return detail::To_Ruby<ActorContextProxy>().convert(proxy);
  }

  Object visit(VisitorProxy* visitor) {
    auto result = visitor -> visit(this -> parser -> actor());

    // reset for the next visit call
    this -> lexer -> reset();
    this -> parser -> reset();

    return std::any_cast<Object>(result);
  }

  ~ParserProxy() {
    delete this -> parser;
    delete this -> tokens;
    delete this -> lexer;
    delete this -> input;
  }

private:
  static ParserProxy* parseStream(ANTLRInputStream* input) {
    ParserProxy* parser = new ParserProxy();

    parser -> input = input;
    parser -> lexer = new DIDLexer(parser -> input);
    parser -> tokens = new CommonTokenStream(parser -> lexer);
    parser -> parser = new DIDParser(parser -> tokens);

    return parser;
  }

  ParserProxy() {};

  ANTLRInputStream* input;
  DIDLexer* lexer;
  CommonTokenStream* tokens;
  DIDParser* parser;
};

namespace Rice::detail {
  template <>
  class To_Ruby<ParserProxy*> {
  public:
    VALUE convert(ParserProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ParserProxy>(x, false, rb_cParser);
    }
  };
}


Object ContextProxy::wrapParseTree(tree::ParseTree* node) {
  if (antlrcpp::is<DIDParser::ProgramContext*>(node)) {
    ProgramContextProxy proxy((DIDParser::ProgramContext*)node);
    return detail::To_Ruby<ProgramContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::DefinationContext*>(node)) {
    DefinationContextProxy proxy((DIDParser::DefinationContext*)node);
    return detail::To_Ruby<DefinationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::ActorContext*>(node)) {
    ActorContextProxy proxy((DIDParser::ActorContext*)node);
    return detail::To_Ruby<ActorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::DatatypeContext*>(node)) {
    DatatypeContextProxy proxy((DIDParser::DatatypeContext*)node);
    return detail::To_Ruby<DatatypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::ActortypeContext*>(node)) {
    ActortypeContextProxy proxy((DIDParser::ActortypeContext*)node);
    return detail::To_Ruby<ActortypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::TuptypeContext*>(node)) {
    TuptypeContextProxy proxy((DIDParser::TuptypeContext*)node);
    return detail::To_Ruby<TuptypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::MethodtypeContext*>(node)) {
    MethodtypeContextProxy proxy((DIDParser::MethodtypeContext*)node);
    return detail::To_Ruby<MethodtypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::PrimitiveContext*>(node)) {
    PrimitiveContextProxy proxy((DIDParser::PrimitiveContext*)node);
    return detail::To_Ruby<PrimitiveContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::ComptypeContext*>(node)) {
    ComptypeContextProxy proxy((DIDParser::ComptypeContext*)node);
    return detail::To_Ruby<ComptypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::ComponentContext*>(node)) {
    ComponentContextProxy proxy((DIDParser::ComponentContext*)node);
    return detail::To_Ruby<ComponentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::NameContext*>(node)) {
    NameContextProxy proxy((DIDParser::NameContext*)node);
    return detail::To_Ruby<NameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::ConstypeContext*>(node)) {
    ConstypeContextProxy proxy((DIDParser::ConstypeContext*)node);
    return detail::To_Ruby<ConstypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::ReftypeContext*>(node)) {
    ReftypeContextProxy proxy((DIDParser::ReftypeContext*)node);
    return detail::To_Ruby<ReftypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::VariantContext*>(node)) {
    VariantContextProxy proxy((DIDParser::VariantContext*)node);
    return detail::To_Ruby<VariantContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::VariantfieldContext*>(node)) {
    VariantfieldContextProxy proxy((DIDParser::VariantfieldContext*)node);
    return detail::To_Ruby<VariantfieldContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::EmptyRecordContext*>(node)) {
    EmptyRecordContextProxy proxy((DIDParser::EmptyRecordContext*)node);
    return detail::To_Ruby<EmptyRecordContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::EmptyVariantContext*>(node)) {
    EmptyVariantContextProxy proxy((DIDParser::EmptyVariantContext*)node);
    return detail::To_Ruby<EmptyVariantContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::OptionContext*>(node)) {
    OptionContextProxy proxy((DIDParser::OptionContext*)node);
    return detail::To_Ruby<OptionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::RecordContext*>(node)) {
    RecordContextProxy proxy((DIDParser::RecordContext*)node);
    return detail::To_Ruby<RecordContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::RecordfieldContext*>(node)) {
    RecordfieldContextProxy proxy((DIDParser::RecordfieldContext*)node);
    return detail::To_Ruby<RecordfieldContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::VectorContext*>(node)) {
    VectorContextProxy proxy((DIDParser::VectorContext*)node);
    return detail::To_Ruby<VectorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::RecordDataContext*>(node)) {
    RecordDataContextProxy proxy((DIDParser::RecordDataContext*)node);
    return detail::To_Ruby<RecordDataContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::RecordKVContext*>(node)) {
    RecordKVContextProxy proxy((DIDParser::RecordKVContext*)node);
    return detail::To_Ruby<RecordKVContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::VariantNameContext*>(node)) {
    VariantNameContextProxy proxy((DIDParser::VariantNameContext*)node);
    return detail::To_Ruby<VariantNameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::VariantKVContext*>(node)) {
    VariantKVContextProxy proxy((DIDParser::VariantKVContext*)node);
    return detail::To_Ruby<VariantKVContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::FunctypeContext*>(node)) {
    FunctypeContextProxy proxy((DIDParser::FunctypeContext*)node);
    return detail::To_Ruby<FunctypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::FuncannContext*>(node)) {
    FuncannContextProxy proxy((DIDParser::FuncannContext*)node);
    return detail::To_Ruby<FuncannContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::EmptyTupleContext*>(node)) {
    EmptyTupleContextProxy proxy((DIDParser::EmptyTupleContext*)node);
    return detail::To_Ruby<EmptyTupleContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::TupleContext*>(node)) {
    TupleContextProxy proxy((DIDParser::TupleContext*)node);
    return detail::To_Ruby<TupleContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::ArgtypesContext*>(node)) {
    ArgtypesContextProxy proxy((DIDParser::ArgtypesContext*)node);
    return detail::To_Ruby<ArgtypesContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::QueryContext*>(node)) {
    QueryContextProxy proxy((DIDParser::QueryContext*)node);
    return detail::To_Ruby<QueryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<DIDParser::OnewayContext*>(node)) {
    OnewayContextProxy proxy((DIDParser::OnewayContext*)node);
    return detail::To_Ruby<OnewayContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<tree::TerminalNodeImpl*>(node)) {
    TerminalNodeProxy proxy(node);
    return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
  } else {
    return Nil;
  }
}


extern "C"
void Init_did_parser() {
  Module rb_mDIDParser = define_module("DIDParser");

  rb_cToken = define_class_under<Token>(rb_mDIDParser, "Token")
    .define_method("text", &Token::getText)
    .define_method("channel", &Token::getChannel)
    .define_method("token_index", &Token::getTokenIndex);

  rb_cParseTree = define_class_under<tree::ParseTree>(rb_mDIDParser, "ParseTree");

  rb_cContextProxy = define_class_under<ContextProxy>(rb_mDIDParser, "Context")
    .define_method("children", &ContextProxy::getChildren)
    .define_method("child_count", &ContextProxy::childCount)
    .define_method("text", &ContextProxy::getText)
    .define_method("start", &ContextProxy::getStart)
    .define_method("stop", &ContextProxy::getStop)
    .define_method("parent", &ContextProxy::getParent)
    .define_method("==", &ContextProxy::doubleEquals);

  rb_cTerminalNode = define_class_under<TerminalNodeProxy, ContextProxy>(rb_mDIDParser, "TerminalNodeImpl");

  define_class_under<DIDParserBaseVisitor>(rb_mDIDParser, "Visitor")
    .define_director<VisitorProxy>()
    .define_constructor(Constructor<VisitorProxy, Object>())
    .define_method("visit", &VisitorProxy::ruby_visit)
    .define_method("visit_children", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_program", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defination", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_actor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_actortype", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_primitive", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_comptype", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_option", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_vector", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_empty_record", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_record", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_empty_variant", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_variant", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_record_kv", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_record_data", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_variant_kv", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_variant_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_reftype", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_functype", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_empty_tuple", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_tuple", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_argtypes", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_oneway", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_methodtype", &VisitorProxy::ruby_visitChildren);

  rb_cParser = define_class_under<ParserProxy>(rb_mDIDParser, "Parser")
    .define_singleton_function("parse", &ParserProxy::parse)
    .define_singleton_function("parse_file", &ParserProxy::parseFile)
    .define_method("actor", &ParserProxy::actor, Return().keepAlive())
    .define_method("visit", &ParserProxy::visit, Return().keepAlive());

  rb_cProgramContext = define_class_under<ProgramContextProxy, ContextProxy>(rb_mDIDParser, "ProgramContext")
    .define_method("defination", &ProgramContextProxy::defination)
    .define_method("defination_at", &ProgramContextProxy::definationAt)
    .define_method("actor", &ProgramContextProxy::actor);

  rb_cDefinationContext = define_class_under<DefinationContextProxy, ContextProxy>(rb_mDIDParser, "DefinationContext")
    .define_method("datatype", &DefinationContextProxy::datatype)
    .define_method("Type", &DefinationContextProxy::Type)
    .define_method("Name", &DefinationContextProxy::Name)
    .define_method("Eq", &DefinationContextProxy::Eq)
    .define_method("Semicolon", &DefinationContextProxy::Semicolon);

  rb_cActorContext = define_class_under<ActorContextProxy, ContextProxy>(rb_mDIDParser, "ActorContext")
    .define_method("actortype", &ActorContextProxy::actortype)
    .define_method("tuptype", &ActorContextProxy::tuptype)
    .define_method("Service", &ActorContextProxy::Service)
    .define_method("Colon", &ActorContextProxy::Colon)
    .define_method("Name", &ActorContextProxy::Name)
    .define_method("NameAt", &ActorContextProxy::Name)
    .define_method("Arrow", &ActorContextProxy::Arrow);

  rb_cDatatypeContext = define_class_under<DatatypeContextProxy, ContextProxy>(rb_mDIDParser, "DatatypeContext");

  rb_cActortypeContext = define_class_under<ActortypeContextProxy, ContextProxy>(rb_mDIDParser, "ActortypeContext")
    .define_method("methodtype", &ActortypeContextProxy::methodtype)
    .define_method("methodtype_at", &ActortypeContextProxy::methodtypeAt)
    .define_method("LeftB", &ActortypeContextProxy::LeftB)
    .define_method("RightB", &ActortypeContextProxy::RightB)
    .define_method("Semicolon", &ActortypeContextProxy::Semicolon)
    .define_method("SemicolonAt", &ActortypeContextProxy::Semicolon);

  rb_cTuptypeContext = define_class_under<TuptypeContextProxy, ContextProxy>(rb_mDIDParser, "TuptypeContext");

  rb_cMethodtypeContext = define_class_under<MethodtypeContextProxy, ContextProxy>(rb_mDIDParser, "MethodtypeContext")
    .define_method("functype", &MethodtypeContextProxy::functype)
    .define_method("Name", &MethodtypeContextProxy::Name)
    .define_method("Colon", &MethodtypeContextProxy::Colon);

  rb_cPrimitiveContext = define_class_under<PrimitiveContextProxy, ContextProxy>(rb_mDIDParser, "PrimitiveContext")
    .define_method("PrimType", &PrimitiveContextProxy::PrimType);

  rb_cComptypeContext = define_class_under<ComptypeContextProxy, ContextProxy>(rb_mDIDParser, "ComptypeContext")
    .define_method("constype", &ComptypeContextProxy::constype)
    .define_method("reftype", &ComptypeContextProxy::reftype);

  rb_cComponentContext = define_class_under<ComponentContextProxy, ContextProxy>(rb_mDIDParser, "ComponentContext")
    .define_method("comptype", &ComponentContextProxy::comptype);

  rb_cNameContext = define_class_under<NameContextProxy, ContextProxy>(rb_mDIDParser, "NameContext")
    .define_method("Name", &NameContextProxy::Name);

  rb_cConstypeContext = define_class_under<ConstypeContextProxy, ContextProxy>(rb_mDIDParser, "ConstypeContext");

  rb_cReftypeContext = define_class_under<ReftypeContextProxy, ContextProxy>(rb_mDIDParser, "ReftypeContext")
    .define_method("functype", &ReftypeContextProxy::functype)
    .define_method("actortype", &ReftypeContextProxy::actortype)
    .define_method("FUNC", &ReftypeContextProxy::FUNC)
    .define_method("Service", &ReftypeContextProxy::Service);

  rb_cVariantContext = define_class_under<VariantContextProxy, ContextProxy>(rb_mDIDParser, "VariantContext")
    .define_method("variantfield", &VariantContextProxy::variantfield)
    .define_method("variantfield_at", &VariantContextProxy::variantfieldAt)
    .define_method("VARIANT", &VariantContextProxy::VARIANT)
    .define_method("LeftB", &VariantContextProxy::LeftB)
    .define_method("RightB", &VariantContextProxy::RightB)
    .define_method("Semicolon", &VariantContextProxy::Semicolon)
    .define_method("SemicolonAt", &VariantContextProxy::Semicolon);

  rb_cVariantfieldContext = define_class_under<VariantfieldContextProxy, ContextProxy>(rb_mDIDParser, "VariantfieldContext");

  rb_cEmptyRecordContext = define_class_under<EmptyRecordContextProxy, ContextProxy>(rb_mDIDParser, "EmptyRecordContext")
    .define_method("RECORD", &EmptyRecordContextProxy::RECORD)
    .define_method("LeftB", &EmptyRecordContextProxy::LeftB)
    .define_method("RightB", &EmptyRecordContextProxy::RightB);

  rb_cEmptyVariantContext = define_class_under<EmptyVariantContextProxy, ContextProxy>(rb_mDIDParser, "EmptyVariantContext")
    .define_method("VARIANT", &EmptyVariantContextProxy::VARIANT)
    .define_method("LeftB", &EmptyVariantContextProxy::LeftB)
    .define_method("RightB", &EmptyVariantContextProxy::RightB);

  rb_cOptionContext = define_class_under<OptionContextProxy, ContextProxy>(rb_mDIDParser, "OptionContext")
    .define_method("datatype", &OptionContextProxy::datatype)
    .define_method("OPT", &OptionContextProxy::OPT);

  rb_cRecordContext = define_class_under<RecordContextProxy, ContextProxy>(rb_mDIDParser, "RecordContext")
    .define_method("recordfield", &RecordContextProxy::recordfield)
    .define_method("recordfield_at", &RecordContextProxy::recordfieldAt)
    .define_method("RECORD", &RecordContextProxy::RECORD)
    .define_method("LeftB", &RecordContextProxy::LeftB)
    .define_method("RightB", &RecordContextProxy::RightB)
    .define_method("Semicolon", &RecordContextProxy::Semicolon)
    .define_method("SemicolonAt", &RecordContextProxy::Semicolon);

  rb_cRecordfieldContext = define_class_under<RecordfieldContextProxy, ContextProxy>(rb_mDIDParser, "RecordfieldContext");

  rb_cVectorContext = define_class_under<VectorContextProxy, ContextProxy>(rb_mDIDParser, "VectorContext")
    .define_method("datatype", &VectorContextProxy::datatype)
    .define_method("VEC", &VectorContextProxy::VEC);

  rb_cRecordDataContext = define_class_under<RecordDataContextProxy, ContextProxy>(rb_mDIDParser, "RecordDataContext")
    .define_method("datatype", &RecordDataContextProxy::datatype);

  rb_cRecordKVContext = define_class_under<RecordKVContextProxy, ContextProxy>(rb_mDIDParser, "RecordKVContext")
    .define_method("datatype", &RecordKVContextProxy::datatype)
    .define_method("Name", &RecordKVContextProxy::Name)
    .define_method("Colon", &RecordKVContextProxy::Colon);

  rb_cVariantNameContext = define_class_under<VariantNameContextProxy, ContextProxy>(rb_mDIDParser, "VariantNameContext")
    .define_method("Name", &VariantNameContextProxy::Name);

  rb_cVariantKVContext = define_class_under<VariantKVContextProxy, ContextProxy>(rb_mDIDParser, "VariantKVContext")
    .define_method("datatype", &VariantKVContextProxy::datatype)
    .define_method("Name", &VariantKVContextProxy::Name)
    .define_method("Colon", &VariantKVContextProxy::Colon);

  rb_cFunctypeContext = define_class_under<FunctypeContextProxy, ContextProxy>(rb_mDIDParser, "FunctypeContext")
    .define_method("tuptype", &FunctypeContextProxy::tuptype)
    .define_method("tuptype_at", &FunctypeContextProxy::tuptypeAt)
    .define_method("funcann", &FunctypeContextProxy::funcann)
    .define_method("Arrow", &FunctypeContextProxy::Arrow);

  rb_cFuncannContext = define_class_under<FuncannContextProxy, ContextProxy>(rb_mDIDParser, "FuncannContext");

  rb_cEmptyTupleContext = define_class_under<EmptyTupleContextProxy, ContextProxy>(rb_mDIDParser, "EmptyTupleContext")
    .define_method("LeftP", &EmptyTupleContextProxy::LeftP)
    .define_method("RightP", &EmptyTupleContextProxy::RightP);

  rb_cTupleContext = define_class_under<TupleContextProxy, ContextProxy>(rb_mDIDParser, "TupleContext")
    .define_method("argtypes", &TupleContextProxy::argtypes)
    .define_method("LeftP", &TupleContextProxy::LeftP)
    .define_method("RightP", &TupleContextProxy::RightP);

  rb_cArgtypesContext = define_class_under<ArgtypesContextProxy, ContextProxy>(rb_mDIDParser, "ArgtypesContext")
    .define_method("datatype", &ArgtypesContextProxy::datatype)
    .define_method("datatype_at", &ArgtypesContextProxy::datatypeAt)
    .define_method("Comma", &ArgtypesContextProxy::Comma)
    .define_method("CommaAt", &ArgtypesContextProxy::Comma)
    .define_method("Name", &ArgtypesContextProxy::Name)
    .define_method("Colon", &ArgtypesContextProxy::Colon);

  rb_cQueryContext = define_class_under<QueryContextProxy, ContextProxy>(rb_mDIDParser, "QueryContext")
    .define_method("Query", &QueryContextProxy::Query);

  rb_cOnewayContext = define_class_under<OnewayContextProxy, ContextProxy>(rb_mDIDParser, "OnewayContext")
    .define_method("Oneway", &OnewayContextProxy::Oneway);
}

