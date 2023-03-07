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
#line 59 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
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
        value.YY_MOVE_OR_COPY< expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.YY_MOVE_OR_COPY< func_main* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
        value.YY_MOVE_OR_COPY< instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.YY_MOVE_OR_COPY< list_instruction* > (YY_MOVE (that.value));
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
        value.move< expression* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.move< func_main* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
        value.move< instruction* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.move< list_instruction* > (YY_MOVE (that.value));
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
        value.copy< expression* > (that.value);
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.copy< func_main* > (that.value);
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
        value.copy< instruction* > (that.value);
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.copy< list_instruction* > (that.value);
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
        value.move< expression* > (that.value);
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        value.move< func_main* > (that.value);
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
        value.move< instruction* > (that.value);
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        value.move< list_instruction* > (that.value);
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
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 566 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_NUMERO: // NUMERO
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 572 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ID: // ID
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 578 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_STRING: // STRING
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 584 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_SUMA: // SUMA
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 590 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MENOS: // MENOS
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 596 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_POR: // POR
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 602 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_DIV: // DIV
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 608 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PRINTF: // PRINTF
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 614 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RIF: // RIF
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 620 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RELSE: // RELSE
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 626 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MODULO: // MODULO
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 632 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_INCREMENTO: // INCREMENTO
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 638 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_VOID: // VOID
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 644 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_INT: // INT
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 650 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_TSTRING: // TSTRING
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 656 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_BOOLEAN: // BOOLEAN
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 662 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PARA: // PARA
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 668 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PARC: // PARC
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 674 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RMAIN: // RMAIN
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 680 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LLAVA: // LLAVA
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 686 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LLAVC: // LLAVC
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 692 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RTRUE: // RTRUE
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 698 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_RFALSE: // RFALSE
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 704 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_CORA: // CORA
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 710 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_CORC: // CORC
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 716 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_TSFLOAT: // TSFLOAT
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 722 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MAY: // MAY
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 728 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MEN: // MEN
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 734 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MAY_IG: // MAY_IG
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 740 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MEN_IG: // MEN_IG
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 746 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_DIF: // DIF
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 752 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_IG: // IG
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 758 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_AND: // AND
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 764 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_OR: // OR
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < std::string > (); }
#line 770 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_START: // START
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < func_main* > (); }
#line 776 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_MAIN: // MAIN
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < func_main* > (); }
#line 782 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_instruction* > (); }
#line 788 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 794 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PRINT: // PRINT
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 800 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_DECLARATION: // DECLARATION
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 806 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_IF: // IF
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 812 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_instruction* > (); }
#line 818 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ELSEIF: // ELSEIF
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < instruction* > (); }
#line 824 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_ELSE: // ELSE
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < list_instruction* > (); }
#line 830 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_TYPES: // TYPES
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < TipoDato > (); }
#line 836 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_EXP: // EXP
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 842 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_PRIMITIVE: // PRIMITIVE
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 848 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_BOOL: // BOOL
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 854 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
        break;

      case symbol_kind::S_LIST_ARR: // LIST_ARR
#line 101 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yyoutput << yysym.value.template as < expression* > (); }
#line 860 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
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
        yylhs.value.emplace< expression* > ();
        break;

      case symbol_kind::S_START: // START
      case symbol_kind::S_MAIN: // MAIN
        yylhs.value.emplace< func_main* > ();
        break;

      case symbol_kind::S_INSTRUCTION: // INSTRUCTION
      case symbol_kind::S_PRINT: // PRINT
      case symbol_kind::S_DECLARATION: // DECLARATION
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSEIF: // ELSEIF
        yylhs.value.emplace< instruction* > ();
        break;

      case symbol_kind::S_LIST_INST: // LIST_INST
      case symbol_kind::S_ELSEIF_LIST: // ELSEIF_LIST
      case symbol_kind::S_ELSE: // ELSE
        yylhs.value.emplace< list_instruction* > ();
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
#line 109 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
    {
        ctx.Main = yystack_[0].value.as < func_main* > ();
        ctx.Salida = "!Ejecución realizada con éxito!";
        yylhs.value.as < func_main* > () = yystack_[0].value.as < func_main* > ();
    }
#line 1185 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 3: // MAIN: VOID RMAIN PARA PARC LLAVA LIST_INST LLAVC
#line 117 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
{
    yylhs.value.as < func_main* > () = new func_main(0, 0, yystack_[6].value.as < std::string > (), yystack_[1].value.as < list_instruction* > ());
}
#line 1193 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 4: // LIST_INST: LIST_INST INSTRUCTION
#line 123 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[1].value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
            yylhs.value.as < list_instruction* > () = yystack_[1].value.as < list_instruction* > ();
        }
#line 1202 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 5: // LIST_INST: INSTRUCTION
#line 128 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < list_instruction* > () = new list_instruction();
            yylhs.value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
        }
#line 1211 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 6: // INSTRUCTION: PRINT ';'
#line 134 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                        { yylhs.value.as < instruction* > () = yystack_[1].value.as < instruction* > (); }
#line 1217 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 7: // INSTRUCTION: DECLARATION ';'
#line 135 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                              { yylhs.value.as < instruction* > () = yystack_[1].value.as < instruction* > (); }
#line 1223 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 8: // INSTRUCTION: IF
#line 136 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yylhs.value.as < instruction* > () = yystack_[0].value.as < instruction* > (); }
#line 1229 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 9: // PRINT: PRINTF PARA EXP PARC
#line 139 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                             { yylhs.value.as < instruction* > () = new print(0,0,yystack_[1].value.as < expression* > ()); }
#line 1235 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 10: // DECLARATION: TYPES ID '=' EXP
#line 142 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                               { yylhs.value.as < instruction* > () = new declaration(0,0,yystack_[3].value.as < TipoDato > (),yystack_[2].value.as < std::string > (),yystack_[0].value.as < expression* > ()); }
#line 1241 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 11: // IF: RIF EXP LLAVA LIST_INST LLAVC ELSEIF_LIST ELSE
#line 147 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
    {
        yylhs.value.as < instruction* > () = new func_if(0,0,yystack_[5].value.as < expression* > (),yystack_[3].value.as < list_instruction* > (),yystack_[1].value.as < list_instruction* > (),yystack_[0].value.as < list_instruction* > ());
    }
#line 1249 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 12: // IF: RIF EXP LLAVA LIST_INST LLAVC ELSE
#line 151 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
    {
        yylhs.value.as < instruction* > () = new func_if(0,0,yystack_[4].value.as < expression* > (),yystack_[2].value.as < list_instruction* > (),nullptr,yystack_[0].value.as < list_instruction* > ());
    }
#line 1257 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 13: // ELSEIF_LIST: ELSEIF_LIST ELSEIF
#line 157 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yystack_[1].value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
            yylhs.value.as < list_instruction* > () = yystack_[1].value.as < list_instruction* > ();
        }
#line 1266 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 14: // ELSEIF_LIST: ELSEIF
#line 162 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < list_instruction* > () = new list_instruction();
            yylhs.value.as < list_instruction* > ()->newInst(yystack_[0].value.as < instruction* > ());
        }
#line 1275 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 15: // ELSEIF: RELSE RIF EXP LLAVA LIST_INST LLAVC
#line 169 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
        {
            yylhs.value.as < instruction* > () = new func_if(0,0,yystack_[3].value.as < expression* > (),yystack_[1].value.as < list_instruction* > (), nullptr, nullptr);
        }
#line 1283 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 16: // ELSE: RELSE LLAVA LIST_INST LLAVC
#line 174 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                   { yylhs.value.as < list_instruction* > () = yystack_[1].value.as < list_instruction* > (); }
#line 1289 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 17: // ELSE: %empty
#line 175 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             { }
#line 1295 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 18: // TYPES: INT
#line 178 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
            { yylhs.value.as < TipoDato > () = INTEGER; }
#line 1301 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 19: // TYPES: TSTRING
#line 179 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
              { yylhs.value.as < TipoDato > () = STRING; }
#line 1307 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 20: // TYPES: BOOLEAN
#line 180 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
              { yylhs.value.as < TipoDato > () = BOOL; }
#line 1313 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 21: // TYPES: TSFLOAT
#line 181 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
              { yylhs.value.as < TipoDato > () = FLOAT; }
#line 1319 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 22: // EXP: EXP SUMA EXP
#line 184 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                   { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "+",false); }
#line 1325 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 23: // EXP: EXP MENOS EXP
#line 185 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                    { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "-",false); }
#line 1331 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 24: // EXP: EXP POR EXP
#line 186 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "*",false); }
#line 1337 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 25: // EXP: EXP DIV EXP
#line 187 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "/",false); }
#line 1343 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 26: // EXP: EXP MODULO EXP
#line 188 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                     { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "%",false); }
#line 1349 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 27: // EXP: EXP MEN EXP
#line 189 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "<",false); }
#line 1355 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 28: // EXP: EXP MAY EXP
#line 190 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), ">",false); }
#line 1361 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 29: // EXP: EXP MEN_IG EXP
#line 191 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                     { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "<=",false); }
#line 1367 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 30: // EXP: EXP MAY_IG EXP
#line 192 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                     { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), ">=",false); }
#line 1373 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 31: // EXP: EXP DIF EXP
#line 193 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "!=",false); }
#line 1379 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 32: // EXP: EXP IG EXP
#line 194 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "==",false); }
#line 1385 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 33: // EXP: EXP AND EXP
#line 195 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "&&",false); }
#line 1391 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 34: // EXP: EXP OR EXP
#line 196 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[2].value.as < expression* > (), yystack_[0].value.as < expression* > (), "||",false); }
#line 1397 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 35: // EXP: PARA EXP PARC
#line 197 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                    { yylhs.value.as < expression* > () = yystack_[1].value.as < expression* > (); }
#line 1403 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 36: // EXP: PRIMITIVE
#line 198 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                { yylhs.value.as < expression* > () = yystack_[0].value.as < expression* > (); }
#line 1409 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 37: // EXP: ID INCREMENTO
#line 199 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                    { }
#line 1415 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 38: // EXP: MENOS EXP
#line 200 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                             { yylhs.value.as < expression* > () = new operation(0, 0, yystack_[0].value.as < expression* > (), 0, "UNARIO",true); }
#line 1421 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 39: // PRIMITIVE: NUMERO
#line 203 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                  {
            int num = std::stoi(yystack_[0].value.as < std::string > ());
            yylhs.value.as < expression* > () = new primitive(0,0,INTEGER,"",num,false,0.0);
        }
#line 1430 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 40: // PRIMITIVE: STRING
#line 207 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                {
            std::string str1 = yystack_[0].value.as < std::string > ().erase(0,1);
            std::string str2 = str1.erase(str1.length()-1,1);
            yylhs.value.as < expression* > () = new primitive(0,0,STRING,str2,0,false,0.0);
        }
#line 1440 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 41: // PRIMITIVE: BOOL
#line 212 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
               { yylhs.value.as < expression* > () = yystack_[0].value.as < expression* > (); }
#line 1446 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 42: // PRIMITIVE: LIST_ARR
#line 213 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                   { yylhs.value.as < expression* > () = yystack_[0].value.as < expression* > (); }
#line 1452 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 43: // PRIMITIVE: DECIMAL
#line 214 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                 {
            float num2 = std::stof(yystack_[0].value.as < std::string > ());
            yylhs.value.as < expression* > () = new primitive(0,0,FLOAT,"",0,false,num2);
        }
#line 1461 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 44: // BOOL: RTRUE
#line 220 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             { yylhs.value.as < expression* > () = new primitive(0,0,BOOL,"",0,true,0.0); }
#line 1467 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 45: // BOOL: RFALSE
#line 221 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             { yylhs.value.as < expression* > () = new primitive(0,0,BOOL,"",0,false,0.0); }
#line 1473 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 46: // LIST_ARR: LIST_ARR CORA EXP CORC
#line 224 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
                                  { yylhs.value.as < expression* > () = new array_access(0,0,yystack_[3].value.as < expression* > (),yystack_[1].value.as < expression* > ()); }
#line 1479 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;

  case 47: // LIST_ARR: ID
#line 225 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"
             {
            yylhs.value.as < expression* > () = new access(0,0,yystack_[0].value.as < std::string > ()); }
#line 1486 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"
    break;


#line 1490 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"

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


  const signed char Parser::yypact_ninf_ = -46;

  const signed char Parser::yytable_ninf_ = -1;

  const short
  Parser::yypact_[] =
  {
      -8,   -13,    16,   -46,    -2,   -46,    -1,    17,   208,     1,
      42,   -46,   -46,   -46,   -46,    -7,   -46,     3,     4,   -46,
      23,    42,   -46,   -46,    28,   -46,    42,    42,   -46,   -46,
      47,   -46,   -46,    22,   -46,   -46,   -46,   -46,    13,    78,
     -46,   -46,    86,    42,    42,    42,    42,    42,   208,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,   -46,
     -46,     5,     5,    39,    39,    39,   205,   250,   250,   250,
     250,   200,   200,   171,   171,   117,   163,    45,   -46,   -10,
      45,   -46,   -46,    42,   208,   -46,   -46,   132,   224,   208,
     -46,   227,   -46
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     2,     0,     1,     0,     0,     0,     0,
       0,    18,    19,    20,    21,     0,     5,     0,     0,     8,
       0,     0,    43,    39,    47,    40,     0,     0,    44,    45,
       0,    36,    41,    42,     3,     4,     6,     7,     0,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      35,    22,    23,    24,    25,    26,     0,    28,    27,    30,
      29,    31,    32,    33,    34,     0,    10,    17,    46,     0,
      17,    14,    12,     0,     0,    13,    11,     0,     0,     0,
      16,     0,    15
  };

  const signed char
  Parser::yypgoto_[] =
  {
     -46,   -46,   -46,   -45,   -15,   -46,   -46,   -46,   -46,   -21,
     -16,   -46,   -20,   -46,   -46,   -46
  };

  const signed char
  Parser::yydefgoto_[] =
  {
       0,     2,     3,    15,    16,    17,    18,    19,    80,    81,
      82,    20,    30,    31,    32,    33
  };

  const signed char
  Parser::yytable_[] =
  {
      35,    39,    83,    66,     9,    10,    41,    42,     1,     4,
      11,    12,    13,    84,    45,    46,     5,    34,     6,    47,
       7,    21,    14,    61,    62,    63,    64,    65,    38,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    88,
       8,    36,    37,    40,    91,    22,    23,    24,    25,    57,
      26,    35,    58,    47,    43,    44,    45,    46,    79,    85,
       0,    47,    27,    87,    86,     0,     0,    28,    29,     0,
      48,     0,     0,    35,     0,     0,    35,    49,    50,    51,
      52,    53,    54,    55,    56,    43,    44,    45,    46,     0,
       0,     0,    47,    43,    44,    45,    46,     0,     0,    59,
      47,     0,     0,     0,     0,     0,     0,    60,    49,    50,
      51,    52,    53,    54,    55,    56,    49,    50,    51,    52,
      53,    54,    55,    56,    43,    44,    45,    46,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    45,    46,     0,     0,    78,    47,    49,    50,    51,
      52,    53,    54,    55,    56,    89,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      43,    44,    45,    46,     0,     0,     0,    47,    43,    44,
      45,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    49,    50,    51,    52,    53,    54,    43,    44,    45,
      46,     0,     0,     0,    47,     0,     9,    10,     0,     9,
      10,     0,    11,    12,    13,    11,    12,    13,     0,    77,
      49,    50,    51,    52,    14,     9,    10,    14,     9,    10,
       0,    11,    12,    13,    11,    12,    13,     0,    90,     0,
       0,    92,     0,    14,     0,     0,    14,    43,    44,    45,
      46,     0,     0,     0,    47
  };

  const signed char
  Parser::yycheck_[] =
  {
      15,    21,    12,    48,    11,    12,    26,    27,    16,    22,
      17,    18,    19,    23,     9,    10,     0,    24,    20,    14,
      21,    20,    29,    43,    44,    45,    46,    47,     5,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    84,
      23,    38,    38,    15,    89,     3,     4,     5,     6,    27,
       8,    66,    39,    14,     7,     8,     9,    10,    13,    80,
      -1,    14,    20,    83,    80,    -1,    -1,    25,    26,    -1,
      23,    -1,    -1,    88,    -1,    -1,    91,    30,    31,    32,
      33,    34,    35,    36,    37,     7,     8,     9,    10,    -1,
      -1,    -1,    14,     7,     8,     9,    10,    -1,    -1,    21,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    30,    31,
      32,    33,    34,    35,    36,    37,    30,    31,    32,    33,
      34,    35,    36,    37,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    28,    14,    30,    31,    32,
      33,    34,    35,    36,    37,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
       7,     8,     9,    10,    -1,    -1,    -1,    14,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    30,    31,    32,    33,    34,    35,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    11,    12,    -1,    11,
      12,    -1,    17,    18,    19,    17,    18,    19,    -1,    24,
      30,    31,    32,    33,    29,    11,    12,    29,    11,    12,
      -1,    17,    18,    19,    17,    18,    19,    -1,    24,    -1,
      -1,    24,    -1,    29,    -1,    -1,    29,     7,     8,     9,
      10,    -1,    -1,    -1,    14
  };

  const signed char
  Parser::yystos_[] =
  {
       0,    16,    42,    43,    22,     0,    20,    21,    23,    11,
      12,    17,    18,    19,    29,    44,    45,    46,    47,    48,
      52,    20,     3,     4,     5,     6,     8,    20,    25,    26,
      53,    54,    55,    56,    24,    45,    38,    38,     5,    53,
      15,    53,    53,     7,     8,     9,    10,    14,    23,    30,
      31,    32,    33,    34,    35,    36,    37,    27,    39,    21,
      21,    53,    53,    53,    53,    53,    44,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    24,    28,    13,
      49,    50,    51,    12,    23,    50,    51,    53,    44,    23,
      24,    44,    24
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    41,    42,    43,    44,    44,    45,    45,    45,    46,
      47,    48,    48,    49,    49,    50,    51,    51,    52,    52,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    54,    54,    54,    55,    55,    56,    56
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     7,     2,     1,     2,     2,     1,     4,
       4,     7,     6,     2,     1,     6,     4,     0,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     1
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
  "';'", "'='", "UMINUS", "$accept", "START", "MAIN", "LIST_INST",
  "INSTRUCTION", "PRINT", "DECLARATION", "IF", "ELSEIF_LIST", "ELSEIF",
  "ELSE", "TYPES", "EXP", "PRIMITIVE", "BOOL", "LIST_ARR", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  Parser::yyrline_[] =
  {
       0,   108,   108,   116,   122,   127,   134,   135,   136,   139,
     142,   146,   150,   156,   161,   168,   174,   175,   178,   179,
     180,   181,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   203,
     207,   212,   213,   214,   220,   221,   224,   225
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
#line 2048 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.cpp"

#line 229 "/home/luis/Escritorio/COMPI2/Proyectos/-OLC2-P1_1S2023_201700841/Proyecto1/Parser/parser.y"


/* función de error */
void yy::Parser::error(const yy::location& l, const std::string& m)
{
    std::cerr << l << ": " << m << std::endl;
}

