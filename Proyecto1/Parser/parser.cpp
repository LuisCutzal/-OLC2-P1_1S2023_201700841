// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.hpp"


// Unqualified %code blocks.
#line 76 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
 yy::Parser::symbol_type yylex(void* yyscanner, yy::location& loc, class OCL2Calc::ParserCtx & ctx); 

#line 49 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 141 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"

  /// Build a parser object.
  Parser::Parser (void *scanner_yyarg, yy::location& loc_yyarg, class OCL2Calc::ParserCtx & ctx_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      loc (loc_yyarg),
      ctx (ctx_yyarg)
  {}

  Parser::~Parser ()
  {}

  Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Parser::symbol_kind_type
  Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_TYPES: // TYPES
        value.YY_MOVE_OR_COPY< TipoDato > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_EXP: // EXP
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LIST_ARR: // LIST_ARR
      case symbol_kind::S_CALL_EXP: // CALL_EXP
        value.YY_MOVE_OR_COPY< expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.YY_MOVE_OR_COPY< func_main* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FUNCTION: // FUNCTION
      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
      case symbol_kind::S_STRUCT_DECLARATION: // STRUCT_DECLARATION
      case symbol_kind::S_STRUCT_CREATION: // STRUCT_CREATION
      case symbol_kind::S_CALL_INST: // CALL_INST
        value.YY_MOVE_OR_COPY< instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_EXP_LIST: // EXP_LIST
        value.YY_MOVE_OR_COPY< list_expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LIST_FUNC: // LIST_FUNC
      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.YY_MOVE_OR_COPY< list_instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FUNC_LIST: // FUNC_LIST
      case symbol_kind::S_DEC_LIST: // DEC_LIST
        value.YY_MOVE_OR_COPY< map_struct_dec* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_RIF: // RIF
      case symbol_kind::S_RELSE: // RELSE
      case symbol_kind::S_MODULO: // MODULO
      case symbol_kind::S_INCREMENTO: // INCREMENTO
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_TSFLOAT: // TSFLOAT
      case symbol_kind::S_MAY: // MAY
      case symbol_kind::S_MEN: // MEN
      case symbol_kind::S_MAY_IG: // MAY_IG
      case symbol_kind::S_MEN_IG: // MEN_IG
      case symbol_kind::S_DIF: // DIF
      case symbol_kind::S_IG: // IG
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_RRETURN: // RRETURN
      case symbol_kind::S_ARRAY: // ARRAY
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_TYPES: // TYPES
        value.move< TipoDato > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_EXP: // EXP
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LIST_ARR: // LIST_ARR
      case symbol_kind::S_CALL_EXP: // CALL_EXP
        value.move< expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.move< func_main* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FUNCTION: // FUNCTION
      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
      case symbol_kind::S_STRUCT_DECLARATION: // STRUCT_DECLARATION
      case symbol_kind::S_STRUCT_CREATION: // STRUCT_CREATION
      case symbol_kind::S_CALL_INST: // CALL_INST
        value.move< instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_EXP_LIST: // EXP_LIST
        value.move< list_expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LIST_FUNC: // LIST_FUNC
      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.move< list_instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FUNC_LIST: // FUNC_LIST
      case symbol_kind::S_DEC_LIST: // DEC_LIST
        value.move< map_struct_dec* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_RIF: // RIF
      case symbol_kind::S_RELSE: // RELSE
      case symbol_kind::S_MODULO: // MODULO
      case symbol_kind::S_INCREMENTO: // INCREMENTO
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_TSFLOAT: // TSFLOAT
      case symbol_kind::S_MAY: // MAY
      case symbol_kind::S_MEN: // MEN
      case symbol_kind::S_MAY_IG: // MAY_IG
      case symbol_kind::S_MEN_IG: // MEN_IG
      case symbol_kind::S_DIF: // DIF
      case symbol_kind::S_IG: // IG
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_RRETURN: // RRETURN
      case symbol_kind::S_ARRAY: // ARRAY
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_TYPES: // TYPES
        value.copy< TipoDato > (that.value);
        break;

      case symbol_kind::S_EXP: // EXP
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LIST_ARR: // LIST_ARR
      case symbol_kind::S_CALL_EXP: // CALL_EXP
        value.copy< expression* > (that.value);
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.copy< func_main* > (that.value);
        break;

      case symbol_kind::S_FUNCTION: // FUNCTION
      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
      case symbol_kind::S_STRUCT_DECLARATION: // STRUCT_DECLARATION
      case symbol_kind::S_STRUCT_CREATION: // STRUCT_CREATION
      case symbol_kind::S_CALL_INST: // CALL_INST
        value.copy< instruction* > (that.value);
        break;

      case symbol_kind::S_EXP_LIST: // EXP_LIST
        value.copy< list_expression* > (that.value);
        break;

      case symbol_kind::S_LIST_FUNC: // LIST_FUNC
      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.copy< list_instruction* > (that.value);
        break;

      case symbol_kind::S_FUNC_LIST: // FUNC_LIST
      case symbol_kind::S_DEC_LIST: // DEC_LIST
        value.copy< map_struct_dec* > (that.value);
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_RIF: // RIF
      case symbol_kind::S_RELSE: // RELSE
      case symbol_kind::S_MODULO: // MODULO
      case symbol_kind::S_INCREMENTO: // INCREMENTO
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_TSFLOAT: // TSFLOAT
      case symbol_kind::S_MAY: // MAY
      case symbol_kind::S_MEN: // MEN
      case symbol_kind::S_MAY_IG: // MAY_IG
      case symbol_kind::S_MEN_IG: // MEN_IG
      case symbol_kind::S_DIF: // DIF
      case symbol_kind::S_IG: // IG
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_RRETURN: // RRETURN
      case symbol_kind::S_ARRAY: // ARRAY
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_TYPES: // TYPES
        value.move< TipoDato > (that.value);
        break;

      case symbol_kind::S_EXP: // EXP
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LIST_ARR: // LIST_ARR
      case symbol_kind::S_CALL_EXP: // CALL_EXP
        value.move< expression* > (that.value);
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.move< func_main* > (that.value);
        break;

      case symbol_kind::S_FUNCTION: // FUNCTION
      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
      case symbol_kind::S_STRUCT_DECLARATION: // STRUCT_DECLARATION
      case symbol_kind::S_STRUCT_CREATION: // STRUCT_CREATION
      case symbol_kind::S_CALL_INST: // CALL_INST
        value.move< instruction* > (that.value);
        break;

      case symbol_kind::S_EXP_LIST: // EXP_LIST
        value.move< list_expression* > (that.value);
        break;

      case symbol_kind::S_LIST_FUNC: // LIST_FUNC
      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.move< list_instruction* > (that.value);
        break;

      case symbol_kind::S_FUNC_LIST: // FUNC_LIST
      case symbol_kind::S_DEC_LIST: // DEC_LIST
        value.move< map_struct_dec* > (that.value);
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_RIF: // RIF
      case symbol_kind::S_RELSE: // RELSE
      case symbol_kind::S_MODULO: // MODULO
      case symbol_kind::S_INCREMENTO: // INCREMENTO
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_TSFLOAT: // TSFLOAT
      case symbol_kind::S_MAY: // MAY
      case symbol_kind::S_MEN: // MEN
      case symbol_kind::S_MAY_IG: // MAY_IG
      case symbol_kind::S_MEN_IG: // MEN_IG
      case symbol_kind::S_DIF: // DIF
      case symbol_kind::S_IG: // IG
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_RRETURN: // RRETURN
      case symbol_kind::S_ARRAY: // ARRAY
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        switch (yykind)
    {
      case symbol_kind::S_DECIMAL: // DECIMAL
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 642 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_NUMERO: // NUMERO
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 648 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ID: // ID
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 654 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 660 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_SUMA: // SUMA
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 666 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MENOS: // MENOS
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 672 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_POR: // POR
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 678 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_DIV: // DIV
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 684 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PRINTF: // PRINTF
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 690 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RIF: // RIF
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 696 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RELSE: // RELSE
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 702 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MODULO: // MODULO
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 708 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_INCREMENTO: // INCREMENTO
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 714 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_VOID: // VOID
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 720 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 726 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_TSTRING: // TSTRING
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 732 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_BOOLEAN: // BOOLEAN
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 738 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PARA: // PARA
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 744 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PARC: // PARC
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 750 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RMAIN: // RMAIN
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 756 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LLAVA: // LLAVA
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 762 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LLAVC: // LLAVC
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 768 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RTRUE: // RTRUE
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 774 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RFALSE: // RFALSE
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 780 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_CORA: // CORA
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 786 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_CORC: // CORC
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 792 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_TSFLOAT: // TSFLOAT
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 798 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MAY: // MAY
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 804 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MEN: // MEN
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 810 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MAY_IG: // MAY_IG
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 816 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MEN_IG: // MEN_IG
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 822 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_DIF: // DIF
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 828 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_IG: // IG
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 834 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_AND: // AND
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 840 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_OR: // OR
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 846 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_STRUCT: // STRUCT
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 852 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RRETURN: // RRETURN
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 858 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ARRAY: // ARRAY
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 864 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_START: // START
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < func_main* > (); }
#line 870 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LIST_FUNC: // LIST_FUNC
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_instruction* > (); }
#line 876 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_FUNCTION: // FUNCTION
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 882 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_FUNC_LIST: // FUNC_LIST
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < map_struct_dec* > (); }
#line 888 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MAIN: // MAIN
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < func_main* > (); }
#line 894 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_instruction* > (); }
#line 900 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 906 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RETURN: // RETURN
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 912 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PRINT: // PRINT
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 918 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_DECLARATION: // DECLARATION
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 924 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_IF: // IF
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 930 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_instruction* > (); }
#line 936 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ELSEIF: // ELSEIF
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 942 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ELSE: // ELSE
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_instruction* > (); }
#line 948 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_STRUCT_DECLARATION: // STRUCT_DECLARATION
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 954 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_DEC_LIST: // DEC_LIST
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < map_struct_dec* > (); }
#line 960 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_STRUCT_CREATION: // STRUCT_CREATION
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 966 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_EXP_LIST: // EXP_LIST
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_expression* > (); }
#line 972 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_TYPES: // TYPES
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < TipoDato > (); }
#line 978 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_EXP: // EXP
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 984 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 990 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_BOOL: // BOOL
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 996 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LIST_ARR: // LIST_ARR
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 1002 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_CALL_EXP: // CALL_EXP
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 1008 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_CALL_INST: // CALL_INST
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 1014 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      default:
        break;
    }
        yyo << ')';
      }
  }
#endif

  void
  Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  Parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::operator() ()
  {
    return parse ();
  }

  int
  Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (scanner, loc, ctx));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_TYPES: // TYPES
        yylhs.value.emplace< TipoDato > ();
        break;

      case symbol_kind::S_EXP: // EXP
      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
      case symbol_kind::S_BOOL: // BOOL
      case symbol_kind::S_LIST_ARR: // LIST_ARR
      case symbol_kind::S_CALL_EXP: // CALL_EXP
        yylhs.value.emplace< expression* > ();
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        yylhs.value.emplace< func_main* > ();
        break;

      case symbol_kind::S_FUNCTION: // FUNCTION
      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
      case symbol_kind::S_STRUCT_DECLARATION: // STRUCT_DECLARATION
      case symbol_kind::S_STRUCT_CREATION: // STRUCT_CREATION
      case symbol_kind::S_CALL_INST: // CALL_INST
        yylhs.value.emplace< instruction* > ();
        break;

      case symbol_kind::S_EXP_LIST: // EXP_LIST
        yylhs.value.emplace< list_expression* > ();
        break;

      case symbol_kind::S_LIST_FUNC: // LIST_FUNC
      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        yylhs.value.emplace< list_instruction* > ();
        break;

      case symbol_kind::S_FUNC_LIST: // FUNC_LIST
      case symbol_kind::S_DEC_LIST: // DEC_LIST
        yylhs.value.emplace< map_struct_dec* > ();
        break;

      case symbol_kind::S_DECIMAL: // DECIMAL
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_ID: // ID
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_SUMA: // SUMA
      case symbol_kind::S_MENOS: // MENOS
      case symbol_kind::S_POR: // POR
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_PRINTF: // PRINTF
      case symbol_kind::S_RIF: // RIF
      case symbol_kind::S_RELSE: // RELSE
      case symbol_kind::S_MODULO: // MODULO
      case symbol_kind::S_INCREMENTO: // INCREMENTO
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_TSTRING: // TSTRING
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_PARA: // PARA
      case symbol_kind::S_PARC: // PARC
      case symbol_kind::S_RMAIN: // RMAIN
      case symbol_kind::S_LLAVA: // LLAVA
      case symbol_kind::S_LLAVC: // LLAVC
      case symbol_kind::S_RTRUE: // RTRUE
      case symbol_kind::S_RFALSE: // RFALSE
      case symbol_kind::S_CORA: // CORA
      case symbol_kind::S_CORC: // CORC
      case symbol_kind::S_TSFLOAT: // TSFLOAT
      case symbol_kind::S_MAY: // MAY
      case symbol_kind::S_MEN: // MEN
      case symbol_kind::S_MAY_IG: // MAY_IG
      case symbol_kind::S_MEN_IG: // MEN_IG
      case symbol_kind::S_DIF: // DIF
      case symbol_kind::S_IG: // IG
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_STRUCT: // STRUCT
      case symbol_kind::S_RRETURN: // RRETURN
      case symbol_kind::S_ARRAY: // ARRAY
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // START: MAIN
#line 136 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
    {
        ctx.Main = yystack_[0].value.as < func_main* > ();
        ctx.Functions = nullptr;
        ctx.Salida = "!Ejecución realizada con éxito!";
        yylhs.value.as < func_main* > () = yystack_[0].value.as < func_main* > ();
    }
#line 1359 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 3: // START: LIST_FUNC MAIN
#line 143 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
    {
        ctx.Main = yystack_[0].value.as < func_main* > ();
        ctx.Functions = yystack_[1].value.as < list_instruction* > ();
        ctx.Salida = "!Ejecución realizada con éxito!";
        yylhs.value.as < func_main* > () = yystack_[0].value.as < func_main* > ();
    }
#line 1370 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 4: // LIST_FUNC: LIST_FUNC FUNCTION
#line 152 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[1].value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
            yylhs.value.as < list_instruction* > () = yystack_[1].value.as < list_instruction* > ();
        }
#line 1379 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 5: // LIST_FUNC: FUNCTION
#line 157 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < list_instruction* > () = new list_instruction();
            yylhs.value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
        }
#line 1388 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 6: // FUNCTION: TYPES ID PARA FUNC_LIST PARC LLAVA LIST_INST LLAVC
#line 164 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < instruction* > () = new function(0,0,yystack_[7].value.as < TipoDato > (),yystack_[6].value.as < std::string > (),yystack_[4].value.as < map_struct_dec* > (),yystack_[1].value.as < list_instruction* > ());
        }
#line 1396 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 7: // FUNCTION: TYPES ID PARA PARC LLAVA LIST_INST LLAVC
#line 168 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < instruction* > () = new function(0,0,yystack_[6].value.as < TipoDato > (),yystack_[5].value.as < std::string > (),nullptr,yystack_[1].value.as < list_instruction* > ());
        }
#line 1404 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 8: // FUNC_LIST: FUNC_LIST ',' TYPES ID
#line 174 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[3].value.as < map_struct_dec* > ()->newMap(yystack_[0].value.as < std::string > (),yystack_[1].value.as < TipoDato > ());
            yylhs.value.as < map_struct_dec* > () = yystack_[3].value.as < map_struct_dec* > ();
        }
#line 1413 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 9: // FUNC_LIST: TYPES ID
#line 179 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < map_struct_dec* > () = new map_struct_dec();
            yylhs.value.as < map_struct_dec* > ()->newMap(yystack_[0].value.as < std::string > (), yystack_[1].value.as < TipoDato > ());
        }
#line 1422 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 10: // MAIN: VOID RMAIN PARA PARC LLAVA LIST_INST LLAVC
#line 187 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
{
    yylhs.value.as < func_main* > () = new func_main(0, 0, yystack_[6].value.as < std::string > (), yystack_[1].value.as < list_instruction* > ());
}
#line 1430 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 11: // LIST_INST: LIST_INST INSTRUCTION
#line 193 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[1].value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
            yylhs.value.as < list_instruction* > () = yystack_[1].value.as < list_instruction* > ();
        }
#line 1439 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 12: // LIST_INST: INSTRUCTION
#line 198 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < list_instruction* > () = new list_instruction();
            yylhs.value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
        }
#line 1448 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 13: // INSTRUCTION: PRINT ';'
#line 204 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                        { yylhs.value.as < instruction* > () = yystack_[1].value.as < instruction* > (); }
#line 1454 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 14: // INSTRUCTION: DECLARATION ';'
#line 205 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                              { yylhs.value.as < instruction* > () = yystack_[1].value.as < instruction* > (); }
#line 1460 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 15: // INSTRUCTION: IF
#line 206 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yylhs.value.as < instruction* > () = yystack_[0].value.as < instruction* > (); }
#line 1466 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 16: // INSTRUCTION: STRUCT_DECLARATION
#line 207 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                 { yylhs.value.as < instruction* > () = yystack_[0].value.as < instruction* > (); }
#line 1472 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 17: // INSTRUCTION: STRUCT_CREATION
#line 208 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                              { yylhs.value.as < instruction* > () = yystack_[0].value.as < instruction* > (); }
#line 1478 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 18: // INSTRUCTION: CALL_INST
#line 209 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                        { yylhs.value.as < instruction* > () = yystack_[0].value.as < instruction* > (); }
#line 1484 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 19: // INSTRUCTION: RETURN ';'
#line 210 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                         { yylhs.value.as < instruction* > () = yystack_[1].value.as < instruction* > (); }
#line 1490 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 20: // RETURN: RRETURN EXP
#line 213 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                     { yylhs.value.as < instruction* > () = new inst_return(0,0,yystack_[0].value.as < expression* > ()); }
#line 1496 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 21: // RETURN: RRETURN
#line 214 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
              { yylhs.value.as < instruction* > () = new inst_return(0,0,nullptr); }
#line 1502 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 22: // PRINT: PRINTF PARA EXP PARC
#line 218 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                             { yylhs.value.as < instruction* > () = new print(0,0,yystack_[1].value.as < expression* > ()); }
#line 1508 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 23: // DECLARATION: TYPES ID '=' EXP
#line 221 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                               { yylhs.value.as < instruction* > () = new declaration(0,0,yystack_[3].value.as < TipoDato > (),yystack_[2].value.as < std::string > (),yystack_[0].value.as < expression* > ()); }
#line 1514 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 24: // IF: RIF EXP LLAVA LIST_INST LLAVC ELSEIF_LIST ELSE
#line 226 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
    {
        yylhs.value.as < instruction* > () = new func_if(0,0,yystack_[5].value.as < expression* > (),yystack_[3].value.as < list_instruction* > (),yystack_[1].value.as < list_instruction* > (),yystack_[0].value.as < list_instruction* > ());
    }
#line 1522 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 25: // IF: RIF EXP LLAVA LIST_INST LLAVC ELSE
#line 230 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
    {
        yylhs.value.as < instruction* > () = new func_if(0,0,yystack_[4].value.as < expression* > (),yystack_[2].value.as < list_instruction* > (),nullptr,yystack_[0].value.as < list_instruction* > ());
    }
#line 1530 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 26: // ELSEIF_LIST: ELSEIF_LIST ELSEIF
#line 236 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[1].value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
            yylhs.value.as < list_instruction* > () = yystack_[1].value.as < list_instruction* > ();
        }
#line 1539 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 27: // ELSEIF_LIST: ELSEIF
#line 241 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < list_instruction* > () = new list_instruction();
            yylhs.value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
        }
#line 1548 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 28: // ELSEIF: RELSE RIF EXP LLAVA LIST_INST LLAVC
#line 248 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < instruction* > () = new func_if(0,0,yystack_[3].value.as < expression* > (),yystack_[1].value.as < list_instruction* > (), nullptr, nullptr);
        }
#line 1556 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 29: // ELSE: RELSE LLAVA LIST_INST LLAVC
#line 253 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                   { yylhs.value.as < list_instruction* > () = yystack_[1].value.as < list_instruction* > (); }
#line 1562 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 30: // ELSE: %empty
#line 254 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             { }
#line 1568 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 31: // STRUCT_DECLARATION: STRUCT ID LLAVA DEC_LIST LLAVC
#line 257 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                                    {yylhs.value.as < instruction* > () = new dec_struct(0,0,yystack_[1].value.as < map_struct_dec* > (),yystack_[3].value.as < std::string > ()); }
#line 1574 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 32: // DEC_LIST: DEC_LIST TYPES ID ';'
#line 261 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[3].value.as < map_struct_dec* > ()->newMap(yystack_[1].value.as < std::string > (),yystack_[2].value.as < TipoDato > ());
            yylhs.value.as < map_struct_dec* > () = yystack_[3].value.as < map_struct_dec* > ();
        }
#line 1583 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 33: // DEC_LIST: TYPES ID ';'
#line 266 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < map_struct_dec* > () = new map_struct_dec();
            yylhs.value.as < map_struct_dec* > ()->newMap(yystack_[1].value.as < std::string > (), yystack_[2].value.as < TipoDato > ());
        }
#line 1592 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 34: // STRUCT_CREATION: STRUCT ID ID '=' LLAVA EXP_LIST LLAVC
#line 273 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                {
                    yylhs.value.as < instruction* > () = new create_struct(0,0,yystack_[5].value.as < std::string > (),yystack_[4].value.as < std::string > (),yystack_[1].value.as < list_expression* > ());
                }
#line 1600 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 35: // EXP_LIST: EXP_LIST ',' EXP
#line 279 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[2].value.as < list_expression* > ()->newExp(yystack_[0].value.as < expression* > ());
            yylhs.value.as < list_expression* > () = yystack_[2].value.as < list_expression* > ();
        }
#line 1609 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 36: // EXP_LIST: EXP
#line 284 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < list_expression* > () = new list_expression();
            yylhs.value.as < list_expression* > ()->newExp(yystack_[0].value.as < expression* > ());
        }
#line 1618 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 37: // TYPES: INT
#line 290 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
            { yylhs.value.as < TipoDato > () = INTEGER; }
#line 1624 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 38: // TYPES: TSTRING
#line 291 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
              { yylhs.value.as < TipoDato > () = STRING; }
#line 1630 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 39: // TYPES: BOOLEAN
#line 292 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
              { yylhs.value.as < TipoDato > () = BOOL; }
#line 1636 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 40: // TYPES: TSFLOAT
#line 293 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
              { yylhs.value.as < TipoDato > () = FLOAT; }
#line 1642 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 41: // TYPES: VOID
#line 294 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
           { yylhs.value.as < TipoDato > () = NULO; }
#line 1648 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 42: // TYPES: ARRAY
#line 295 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
            { yylhs.value.as < TipoDato > () = ARRAY; }
#line 1654 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 43: // EXP: EXP SUMA EXP
#line 298 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                   { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "+",false); }
#line 1660 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 44: // EXP: EXP MENOS EXP
#line 299 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                    { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "-",false); }
#line 1666 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 45: // EXP: EXP POR EXP
#line 300 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "*",false); }
#line 1672 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 46: // EXP: EXP DIV EXP
#line 301 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "/",false); }
#line 1678 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 47: // EXP: EXP MODULO EXP
#line 302 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                     { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "%",false); }
#line 1684 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 48: // EXP: EXP MEN EXP
#line 303 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "<",false); }
#line 1690 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 49: // EXP: EXP MAY EXP
#line 304 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), ">",false); }
#line 1696 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 50: // EXP: EXP MEN_IG EXP
#line 305 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                     { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "<=",false); }
#line 1702 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 51: // EXP: EXP MAY_IG EXP
#line 306 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                     { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), ">=",false); }
#line 1708 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 52: // EXP: EXP DIF EXP
#line 307 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "!=",false); }
#line 1714 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 53: // EXP: EXP IG EXP
#line 308 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "==",false); }
#line 1720 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 54: // EXP: EXP AND EXP
#line 309 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "&&",false); }
#line 1726 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 55: // EXP: EXP OR EXP
#line 310 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "||",false); }
#line 1732 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 56: // EXP: PARA EXP PARC
#line 311 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                    { yylhs.value.as < expression* > () = yystack_[1].value.as < expression* > (); }
#line 1738 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 57: // EXP: LLAVA EXP_LIST LLAVC
#line 312 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                           { yylhs.value.as < expression* > () = new array_exp(0,0,yystack_[1].value.as < list_expression* > ()); }
#line 1744 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 58: // EXP: CALL_EXP
#line 313 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
               { yylhs.value.as < expression* > () = yystack_[0].value.as < expression* > (); }
#line 1750 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 59: // EXP: PRIMITIVE
#line 314 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                { yylhs.value.as < expression* > () = yystack_[0].value.as < expression* > (); }
#line 1756 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 60: // EXP: ID INCREMENTO
#line 315 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                    { }
#line 1762 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 61: // EXP: MENOS EXP
#line 316 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                             { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[0].value.as < expression* > (), 0, "UNARIO",true); }
#line 1768 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 62: // PRIMITIVE: NUMERO
#line 319 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  {
            int num = std::stoi(yystack_[0].value.as < std::string > ());
            yylhs.value.as < expression* > () = new primitive(0,0,INTEGER,"",num,false,0.0);
        }
#line 1777 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 63: // PRIMITIVE: STRING
#line 323 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                {
            std::string str1 = yystack_[0].value.as < std::string > ().erase(0,1);
            std::string str2 = str1.erase(str1.length()-1,1);
            yylhs.value.as < expression* > () = new primitive(0,0,STRING,str2,0,false,0.0);
        }
#line 1787 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 64: // PRIMITIVE: BOOL
#line 328 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
               { yylhs.value.as < expression* > () = yystack_[0].value.as < expression* > (); }
#line 1793 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 65: // PRIMITIVE: LIST_ARR
#line 329 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                   { yylhs.value.as < expression* > () = yystack_[0].value.as < expression* > (); }
#line 1799 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 66: // PRIMITIVE: DECIMAL
#line 330 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 {
            float num2 = std::stof(yystack_[0].value.as < std::string > ());
            yylhs.value.as < expression* > () = new primitive(0,0,FLOAT,"",0,false,num2);
        }
#line 1808 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 67: // BOOL: RTRUE
#line 336 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             { yylhs.value.as < expression* > () = new primitive(0,0,BOOL,"",0,true,0.0); }
#line 1814 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 68: // BOOL: RFALSE
#line 337 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             { yylhs.value.as < expression* > () = new primitive(0,0,BOOL,"",0,false,0.0); }
#line 1820 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 69: // LIST_ARR: LIST_ARR CORA EXP CORC
#line 340 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                  { yylhs.value.as < expression* > () = new array_access(0,0,yystack_[3].value.as < expression* > (),yystack_[1].value.as < expression* > ()); }
#line 1826 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 70: // LIST_ARR: LIST_ARR '.' ID
#line 341 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                          { yylhs.value.as < expression* > () = new struct_access(0,0,yystack_[2].value.as < expression* > (),yystack_[0].value.as < std::string > ()); }
#line 1832 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 71: // LIST_ARR: ID
#line 342 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             {yylhs.value.as < expression* > () = new access(0,0,yystack_[0].value.as < std::string > ()); }
#line 1838 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 72: // CALL_EXP: ID PARA EXP_LIST PARC
#line 345 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                 { yylhs.value.as < expression* > () = new call_exp(0,0,yystack_[3].value.as < std::string > (),yystack_[1].value.as < list_expression* > ()); }
#line 1844 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 73: // CALL_EXP: ID PARA PARC
#line 346 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                       { yylhs.value.as < expression* > () = new call_exp(0,0,yystack_[2].value.as < std::string > (),nullptr); }
#line 1850 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 74: // CALL_INST: ID PARA EXP_LIST PARC ';'
#line 349 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                      { yylhs.value.as < instruction* > () = new call_inst(0,0,yystack_[4].value.as < std::string > (),yystack_[2].value.as < list_expression* > ());}
#line 1856 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 75: // CALL_INST: ID PARA PARC ';'
#line 350 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                           { yylhs.value.as < instruction* > () = new call_inst(0,0,yystack_[3].value.as < std::string > (),nullptr); }
#line 1862 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;


#line 1866 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  Parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // Parser::context.
  Parser::context::context (const Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  Parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char Parser::yypact_ninf_ = -51;

  const signed char Parser::yytable_ninf_ = -1;

  const short
  Parser::yypact_[] =
  {
      25,    -9,   -51,   -51,   -51,   -51,   -51,    11,    25,   -51,
     -51,    30,    35,   -51,   -51,   -51,    36,    24,    43,    34,
     -51,    59,   -17,    53,   242,   242,    67,   118,   -51,    46,
      71,   446,    89,   446,    88,   -51,    61,    68,    69,   -51,
     -51,   -51,   113,   -51,   127,   242,   116,   415,   446,   -51,
     -51,   133,   -51,   446,   446,   446,   -51,   -51,    16,   -51,
     -51,   -21,   -51,    -2,   345,   -51,   -51,   -51,   -51,   -51,
      82,   -51,   152,   -51,    70,   -13,   345,   265,   -51,   422,
     -51,   296,   -10,   446,   446,   446,   446,   446,   242,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   128,    98,
     118,   446,   -51,   -51,   100,   446,   -51,   -51,   -11,   -51,
     -51,    78,    78,   135,   135,   135,   177,   106,   106,   106,
     106,   384,   384,   376,   376,   306,   -51,   119,    79,   145,
     345,   -51,   345,   -51,   139,   -51,   446,   -51,   149,   114,
      -5,   139,   -51,   -51,    -8,   120,   -51,   446,   242,   -51,
     -51,   -51,   -51,   337,   202,   242,   -51,   227,   -51
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,    41,    37,    38,    39,    40,    42,     0,     0,     5,
       2,     0,     0,     1,     4,     3,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    21,     0,    12,     0,     0,     0,    15,
      16,    17,     0,    18,     0,     0,     0,     0,     0,    66,
      62,    71,    63,     0,     0,     0,    67,    68,     0,    59,
      64,    65,    58,     0,    20,    10,    11,    19,    13,    14,
       0,     7,     0,     8,     0,     0,    36,     0,    60,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,    75,     0,     0,    22,    73,     0,    56,
      57,    43,    44,    45,    46,    47,     0,    49,    48,    51,
      50,    52,    53,    54,    55,     0,    70,     0,     0,     0,
      23,    74,    35,    72,    30,    69,     0,    31,     0,     0,
       0,    30,    27,    25,     0,     0,    33,     0,     0,    26,
      24,    34,    32,     0,     0,     0,    29,     0,    28
  };

  const short
  Parser::yypgoto_[] =
  {
     -51,   -51,   -51,   151,   -51,   154,   -25,   -32,   -51,   -51,
     -51,   -51,   -51,    19,    31,   -51,   -51,   -51,   -50,     1,
     -16,   -51,   -51,   -51,   -51,   -51
  };

  const unsigned char
  Parser::yydefgoto_[] =
  {
       0,     7,     8,     9,    22,    10,    34,    35,    36,    37,
      38,    39,   141,   142,   143,    40,   128,    41,    75,    42,
      76,    59,    60,    61,    62,    43
  };

  const unsigned char
  Parser::yytable_[] =
  {
      44,    11,    66,    99,    26,    82,    97,   147,   104,    11,
     133,    13,    66,    12,   110,    58,   151,    64,   148,    23,
      72,   100,    98,    83,    84,    85,    86,    27,    46,   108,
      87,   105,    77,   105,   105,    16,   105,    80,    81,    88,
      66,     1,     2,     3,     4,    19,    89,    90,    91,    92,
      93,    94,    95,    96,     5,    17,    18,    24,    28,    20,
       2,     3,     4,   116,    21,     6,    47,   111,   112,   113,
     114,   115,     5,   117,   118,   119,   120,   121,   122,   123,
     124,   125,    25,     6,    66,   130,   144,    85,    86,   132,
      45,    48,    87,    29,    63,    20,     2,     3,     4,    30,
      31,   129,    67,   137,    20,     2,     3,     4,     5,    68,
      69,   103,    65,    83,    84,    85,    86,     5,    70,     6,
      87,    73,    66,   154,   101,    66,    32,    33,     6,   138,
     157,   153,    29,   126,    20,     2,     3,     4,    30,    31,
     127,   131,   136,    20,     2,     3,     4,     5,    78,    87,
     139,    71,   140,    79,   145,   146,     5,    29,     6,    14,
     149,   152,    15,    30,    31,    32,    33,     6,    20,     2,
       3,     4,   150,     0,     0,     0,   102,     0,     0,     0,
       0,     5,    29,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     6,    20,     2,     3,     4,     0,     0,     0,
       0,   134,     0,     0,     0,     0,     5,    29,     0,     0,
       0,     0,     0,    30,    31,    32,    33,     6,    20,     2,
       3,     4,     0,     0,     0,     0,   156,     0,     0,     0,
       0,     5,    29,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     6,    20,     2,     3,     4,    29,     0,     0,
       0,   158,     0,    30,    31,     0,     5,     0,    20,     2,
       3,     4,     0,     0,     0,    32,    33,     6,     0,     0,
       0,     5,    83,    84,    85,    86,     0,     0,     0,    87,
      32,    33,     6,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    83,    84,    85,    86,     0,     0,     0,
      87,     0,     0,    83,    84,    85,    86,   109,     0,     0,
      87,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,   135,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    83,    84,    85,    86,     0,     0,
       0,    87,    83,    84,    85,    86,     0,     0,     0,    87,
     155,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    89,    90,    91,    92,    93,
      94,    95,    96,    83,    84,    85,    86,     0,     0,     0,
      87,    83,    84,    85,    86,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,     0,     0,    89,    90,    91,    92,    49,    50,
      51,    52,     0,    53,     0,    49,    50,    51,    52,     0,
      53,     0,     0,     0,     0,    54,    74,     0,    55,     0,
      56,    57,    54,   107,     0,    55,     0,    56,    57,    49,
      50,    51,    52,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,    55,
       0,    56,    57
  };

  const short
  Parser::yycheck_[] =
  {
      25,     0,    34,     5,    21,    55,    27,    12,    21,     8,
      21,     0,    44,    22,    24,    31,    24,    33,    23,    18,
      45,    23,    43,     7,     8,     9,    10,    44,    27,    79,
      14,    44,    48,    44,    44,     5,    44,    53,    54,    23,
      72,    16,    17,    18,    19,    21,    30,    31,    32,    33,
      34,    35,    36,    37,    29,    20,    20,    23,     5,    16,
      17,    18,    19,    88,    21,    40,    20,    83,    84,    85,
      86,    87,    29,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    23,    40,   116,   101,   136,     9,    10,   105,
      23,    20,    14,     5,     5,    16,    17,    18,    19,    11,
      12,   100,    41,    24,    16,    17,    18,    19,    29,    41,
      41,    41,    24,     7,     8,     9,    10,    29,     5,    40,
      14,     5,   154,   148,    42,   157,    38,    39,    40,   128,
     155,   147,     5,     5,    16,    17,    18,    19,    11,    12,
      42,    41,    23,    16,    17,    18,    19,    29,    15,    14,
       5,    24,    13,    20,     5,    41,    29,     5,    40,     8,
     141,    41,     8,    11,    12,    38,    39,    40,    16,    17,
      18,    19,   141,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      38,    39,    40,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    38,    39,    40,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      38,    39,    40,    16,    17,    18,    19,     5,    -1,    -1,
      -1,    24,    -1,    11,    12,    -1,    29,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    29,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      38,    39,    40,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,     7,     8,     9,    10,    21,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,     7,     8,     9,    10,    -1,    -1,
      -1,    14,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    30,    31,    32,    33,    34,
      35,    36,    37,     7,     8,     9,    10,    -1,    -1,    -1,
      14,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    -1,    -1,    30,    31,    32,    33,     3,     4,
       5,     6,    -1,     8,    -1,     3,     4,     5,     6,    -1,
       8,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    20,    21,    -1,    23,    -1,    25,    26,     3,
       4,     5,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    23,
      -1,    25,    26
  };

  const signed char
  Parser::yystos_[] =
  {
       0,    16,    17,    18,    19,    29,    40,    47,    48,    49,
      51,    65,    22,     0,    49,    51,     5,    20,    20,    21,
      16,    21,    50,    65,    23,    23,    21,    44,     5,     5,
      11,    12,    38,    39,    52,    53,    54,    55,    56,    57,
      61,    63,    65,    71,    52,    23,    65,    20,    20,     3,
       4,     5,     6,     8,    20,    23,    25,    26,    66,    67,
      68,    69,    70,     5,    66,    24,    53,    41,    41,    41,
       5,    24,    52,     5,    21,    64,    66,    66,    15,    20,
      66,    66,    64,     7,     8,     9,    10,    14,    23,    30,
      31,    32,    33,    34,    35,    36,    37,    27,    43,     5,
      23,    42,    24,    41,    21,    44,    21,    21,    64,    21,
      24,    66,    66,    66,    66,    66,    52,    66,    66,    66,
      66,    66,    66,    66,    66,    66,     5,    42,    62,    65,
      66,    41,    66,    21,    24,    28,    23,    24,    65,     5,
      13,    58,    59,    60,    64,     5,    41,    12,    23,    59,
      60,    24,    41,    66,    52,    23,    24,    52,    24
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      51,    52,    52,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    56,    57,    57,    58,    58,    59,    60,
      60,    61,    62,    62,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    69,    70,    70,    71,    71
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     2,     2,     1,     8,     7,     4,     2,
       7,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       2,     1,     4,     4,     7,     6,     2,     1,     6,     4,
       0,     5,     4,     3,     7,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     1,     4,     3,     5,     4
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "END", "error", "\"invalid token\"", "DECIMAL", "NUMERO", "ID",
  "STRING", "SUMA", "MENOS", "POR", "DIV", "PRINTF", "RIF", "RELSE",
  "MODULO", "INCREMENTO", "VOID", "INT", "TSTRING", "BOOLEAN", "PARA",
  "PARC", "RMAIN", "LLAVA", "LLAVC", "RTRUE", "RFALSE", "CORA", "CORC",
  "TSFLOAT", "MAY", "MEN", "MAY_IG", "MEN_IG", "DIF", "IG", "AND", "OR",
  "STRUCT", "RRETURN", "ARRAY", "';'", "'='", "'.'", "','", "UMINUS",
  "$accept", "START", "LIST_FUNC", "FUNCTION", "FUNC_LIST", "MAIN",
  "LIST_INST", "INSTRUCTION", "RETURN", "PRINT", "DECLARATION", "IF",
  "ELSEIF_LIST", "ELSEIF", "ELSE", "STRUCT_DECLARATION", "DEC_LIST",
  "STRUCT_CREATION", "EXP_LIST", "TYPES", "EXP", "PRIMITIVE", "BOOL",
  "LIST_ARR", "CALL_EXP", "CALL_INST", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  Parser::yyrline_[] =
  {
       0,   135,   135,   142,   151,   156,   163,   167,   173,   178,
     186,   192,   197,   204,   205,   206,   207,   208,   209,   210,
     213,   214,   218,   221,   225,   229,   235,   240,   247,   253,
     254,   257,   260,   265,   272,   278,   283,   290,   291,   292,
     293,   294,   295,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   319,   323,   328,   329,   330,   336,   337,   340,
     341,   342,   345,   346,   349,   350
  };

  void
  Parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  Parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 2498 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"

#line 353 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"


/* función de error */
void yy::Parser::error(const yy::location& l, const std::string& m)
{
    ast *Root = new ast();
    std::ostringstream ss;
    std::cerr << l << ": " << m << std::endl;
    Root->ErrorOut +  ss.str();
}

