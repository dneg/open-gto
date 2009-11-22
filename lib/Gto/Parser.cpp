
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         GTOparse
#define yylex           GTOlex
#define yyerror         GTOerror
#define yylval          GTOlval
#define yychar          GTOchar
#define yydebug         GTOdebug
#define yynerrs         GTOnerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Parser.y"

//
//  Copyright (c) 2009, Tweak Software
//  All rights reserved.
// 
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions
//  are met:
//
//     * Redistributions of source code must retain the above
//       copyright notice, this list of conditions and the following
//       disclaimer.
//
//     * Redistributions in binary form must reproduce the above
//       copyright notice, this list of conditions and the following
//       disclaimer in the documentation and/or other materials
//       provided with the distribution.
//
//     * Neither the name of the Tweak Software nor the names of its
//       contributors may be used to endorse or promote products
//       derived from this software without specific prior written
//       permission.
// 
//  THIS SOFTWARE IS PROVIDED BY Tweak Software ''AS IS'' AND ANY EXPRESS
//  OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL Tweak Software BE LIABLE FOR
//  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
//  OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
//  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
//  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
//  DAMAGE.
//

#define YYPARSE_PARAM state
#define YYLEX_PARAM state
#define YYDEBUG 1
#ifdef yyerror
#undef yyerror
#endif
#define yyerror(MSG) GTOParseError(YYPARSE_PARAM, MSG)
#define IN_GRAMMAR
#define READER (reinterpret_cast<GTOFlexLexer*>(state)->readerObject())

#include "FlexLexer.h"
#include <iostream>
#include "Reader.h"
#include "Utilities.h"
#include <stdarg.h>

#ifdef GTO_SUPPORT_HALF
#include <half.h>
#endif

int  yylex(void*, void*);
void GTOParseError(void*, const char *,...);
void GTOParseWarning(void*, const char *,...);



/* Line 189 of yacc.c  */
#line 145 "Parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     GTO_STRINGCONST = 258,
     GTO_INTCONST = 259,
     GTO_FLOATCONST = 260,
     GTO_GTOID = 261,
     GTO_AS = 262,
     GTO_INTTYPE = 263,
     GTO_FLOATTYPE = 264,
     GTO_DOUBLETYPE = 265,
     GTO_STRINGTYPE = 266,
     GTO_HALFTYPE = 267,
     GTO_BOOLTYPE = 268,
     GTO_SHORTTYPE = 269,
     GTO_BYTETYPE = 270,
     GTO_ELLIPSIS = 271
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 68 "Parser.y"

    int             _token;
    int             _int;
    unsigned int    _uint;
    double          _double;
    Gto::TypeSpec   _type;
    Gto::Number     _number;



/* Line 214 of yacc.c  */
#line 208 "Parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 220 "Parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   95

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  92

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      17,    18,     2,     2,     2,    25,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    21,     2,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,     2,    20,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    16,    18,    21,    22,
      28,    29,    37,    38,    49,    51,    54,    55,    58,    59,
      66,    68,    71,    72,    79,    80,    89,    91,    96,   104,
     106,   108,   110,   112,   114,   116,   118,   120,   121,   123,
     126,   128,   131,   133,   137,   139,   141,   143,   145,   147,
     150,   152,   154,   157,   159,   161,   163,   166,   168
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      27,     0,    -1,    -1,     6,    28,    30,    -1,    -1,     6,
      17,     4,    18,    29,    30,    -1,    31,    -1,    30,    31,
      -1,    -1,     3,    19,    32,    35,    20,    -1,    -1,     3,
      21,     3,    19,    33,    35,    20,    -1,    -1,     3,    21,
       3,    17,     4,    18,    19,    34,    35,    20,    -1,    37,
      -1,    35,    37,    -1,    -1,     7,     3,    -1,    -1,     3,
      36,    19,    38,    39,    20,    -1,    40,    -1,    39,    40,
      -1,    -1,    43,     3,    36,    22,    41,    49,    -1,    -1,
      43,     3,    36,    22,    42,    23,    45,    24,    -1,    44,
      -1,    44,    23,     4,    24,    -1,    44,    23,     4,    24,
      23,     4,    24,    -1,     9,    -1,     8,    -1,    11,    -1,
      14,    -1,    15,    -1,    12,    -1,    13,    -1,    10,    -1,
      -1,    46,    -1,    46,    16,    -1,    47,    -1,    46,    47,
      -1,    49,    -1,    23,    48,    24,    -1,    50,    -1,    52,
      -1,    51,    -1,    53,    -1,    51,    -1,    50,    51,    -1,
       3,    -1,    53,    -1,    52,    53,    -1,    54,    -1,    55,
      -1,     5,    -1,    25,     5,    -1,     4,    -1,    25,     4,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   116,   116,   115,   125,   124,   135,   136,   141,   140,
     147,   146,   153,   152,   160,   161,   166,   170,   178,   177,
     185,   186,   191,   190,   218,   217,   255,   262,   269,   278,
     279,   280,   281,   282,   283,   284,   285,   289,   290,   291,
     295,   296,   300,   301,   313,   314,   318,   319,   323,   324,
     328,   347,   348,   352,   436,   537,   538,   542,   543
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "GTO_STRINGCONST", "GTO_INTCONST",
  "GTO_FLOATCONST", "GTO_GTOID", "GTO_AS", "GTO_INTTYPE", "GTO_FLOATTYPE",
  "GTO_DOUBLETYPE", "GTO_STRINGTYPE", "GTO_HALFTYPE", "GTO_BOOLTYPE",
  "GTO_SHORTTYPE", "GTO_BYTETYPE", "GTO_ELLIPSIS", "'('", "')'", "'{'",
  "'}'", "':'", "'='", "'['", "']'", "'-'", "$accept", "file", "$@1",
  "$@2", "object_list", "object", "$@3", "$@4", "$@5", "component_list",
  "interp_string_opt", "component", "$@6", "property_list", "property",
  "$@7", "$@8", "type", "basic_type", "complex_element_list",
  "element_list", "element", "atomic_value_list", "atomic_value",
  "string_value_list", "string_value", "numeric_value_list",
  "numeric_value", "float_num", "int_num", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    40,    41,   123,
     125,    58,    61,    91,    93,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    26,    28,    27,    29,    27,    30,    30,    32,    31,
      33,    31,    34,    31,    35,    35,    36,    36,    38,    37,
      39,    39,    41,    40,    42,    40,    43,    43,    43,    44,
      44,    44,    44,    44,    44,    44,    44,    45,    45,    45,
      46,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      51,    52,    52,    53,    53,    54,    54,    55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     6,     1,     2,     0,     5,
       0,     7,     0,    10,     1,     2,     0,     2,     0,     6,
       1,     2,     0,     6,     0,     8,     1,     4,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     1,     0,     0,     3,     6,
       4,     8,     0,     7,     0,     0,     0,     5,    16,     0,
      14,     0,    10,     0,     0,     9,    15,     0,     0,    17,
      18,     0,     0,     0,    12,    11,    30,    29,    36,    31,
      34,    35,    32,    33,     0,    20,     0,    26,     0,    19,
      21,    16,     0,     0,     0,     0,    13,    22,    27,     0,
       0,     0,    50,    57,    55,     0,    23,    46,    47,    53,
      54,    37,     0,    58,    56,     0,     0,    38,    40,    42,
      28,     0,    44,    48,    45,    51,    25,    39,    41,    43,
      49,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     4,    14,     8,     9,    15,    28,    48,    19,
      24,    20,    33,    44,    45,    59,    60,    46,    47,    76,
      77,    78,    81,    79,    82,    67,    84,    68,    69,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -61
static const yytype_int8 yypact[] =
{
      11,     3,    50,    47,    49,   -61,    35,     9,    49,   -61,
     -61,   -61,    61,   -61,    49,    62,     8,    49,    59,    13,
     -61,    63,   -61,    65,    51,   -61,   -61,    53,    62,   -61,
     -61,    54,    15,    48,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,    29,   -61,    66,    52,    62,   -61,
     -61,    59,    68,    16,    55,    56,   -61,    58,    60,     4,
      64,    70,   -61,   -61,   -61,    43,   -61,   -61,   -61,   -61,
     -61,     1,    67,   -61,   -61,     4,    69,    -2,   -61,   -61,
     -61,    71,    73,   -61,     6,   -61,   -61,   -61,   -61,   -61,
     -61,   -61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   -61,   -61,    72,    37,   -61,   -61,   -61,   -16,
      27,   -19,   -61,   -61,    38,   -61,   -61,   -61,   -61,   -61,
     -61,     2,   -61,    25,   -61,   -60,   -61,   -29,   -61,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -25
static const yytype_int8 yytable[] =
{
      26,    62,    63,    64,    62,    63,    64,    62,    63,    64,
      63,    64,    32,    26,    87,    83,    18,     1,    18,    18,
       3,    75,    90,    65,    75,    21,    65,    22,    11,    65,
      12,    65,    53,    25,    26,    35,    56,    36,    37,    38,
      39,    40,    41,    42,    43,    13,    85,    73,    74,    49,
       5,     6,     7,    10,    13,    91,    36,    37,    38,    39,
      40,    41,    42,    43,    16,    18,    23,    27,    29,    51,
      30,    31,    55,    34,    72,    52,    62,    57,    54,    88,
      58,   -24,    50,    61,    66,     0,    17,    71,     0,     0,
       0,    80,     0,    86,     0,    89
};

static const yytype_int8 yycheck[] =
{
      19,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       4,     5,    28,    32,    16,    75,     3,     6,     3,     3,
      17,    23,    82,    25,    23,    17,    25,    19,    19,    25,
      21,    25,    48,    20,    53,    20,    20,     8,     9,    10,
      11,    12,    13,    14,    15,     8,    75,     4,     5,    20,
       0,     4,     3,    18,    17,    84,     8,     9,    10,    11,
      12,    13,    14,    15,     3,     3,     7,     4,     3,     3,
      19,    18,     4,    19,     4,    23,     3,    22,    51,    77,
      24,    23,    44,    23,    59,    -1,    14,    23,    -1,    -1,
      -1,    24,    -1,    24,    -1,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    27,    17,    28,     0,     4,     3,    30,    31,
      18,    19,    21,    31,    29,    32,     3,    30,     3,    35,
      37,    17,    19,     7,    36,    20,    37,     4,    33,     3,
      19,    18,    35,    38,    19,    20,     8,     9,    10,    11,
      12,    13,    14,    15,    39,    40,    43,    44,    34,    20,
      40,     3,    23,    35,    36,     4,    20,    22,    24,    41,
      42,    23,     3,     4,     5,    25,    49,    51,    53,    54,
      55,    23,     4,     4,     5,    23,    45,    46,    47,    49,
      24,    48,    50,    51,    52,    53,    24,    16,    47,    24,
      51,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 116 "Parser.y"
    {
        READER->beginHeader(GTO_VERSION);
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 120 "Parser.y"
    { 
        READER->endFile(); 
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 125 "Parser.y"
    {
        READER->beginHeader((yyvsp[(3) - (4)]._int));
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 129 "Parser.y"
    { 
        READER->endFile(); 
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 141 "Parser.y"
    {
        READER->beginObject((yyvsp[(1) - (2)]._int), READER->internString("object"));
    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    {
        READER->beginObject((yyvsp[(1) - (4)]._int), (yyvsp[(3) - (4)]._int));
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 153 "Parser.y"
    {
        READER->beginObject((yyvsp[(1) - (7)]._int), (yyvsp[(3) - (7)]._int), (yyvsp[(5) - (7)]._int));
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    {
        (yyval._int) = READER->internString("");
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 171 "Parser.y"
    {
        (yyval._int) = (yyvsp[(2) - (2)]._int);
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    {
        READER->beginComponent((yyvsp[(1) - (3)]._int), (yyvsp[(2) - (3)]._int));
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 191 "Parser.y"
    {
        READER->beginProperty((yyvsp[(2) - (4)]._int), (yyvsp[(3) - (4)]._int), (yyvsp[(1) - (4)]._type).width, (yyvsp[(1) - (4)]._type).size, (yyvsp[(1) - (4)]._type).type);
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 195 "Parser.y"
    {
        if (READER->currentType().width != 1)
        {
            GTOParseError(state, "expected data width of %d, found 1",
                          READER->currentType().width);
            YYERROR;
        }
        else if ((yyvsp[(1) - (6)]._type).size != 0 && 
                 READER->numAtomicValuesInBuffer() != (yyvsp[(1) - (6)]._type).size)
        {
            GTOParseError(state, 
                          "property size mismatch, found %d, expect %d",
                          READER->numAtomicValuesInBuffer(),
                          (yyvsp[(1) - (6)]._type).size);
            YYERROR;
        }
        else
        {
            READER->endProperty();
        }
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 218 "Parser.y"
    {
        READER->beginProperty((yyvsp[(2) - (4)]._int), (yyvsp[(3) - (4)]._int), (yyvsp[(1) - (4)]._type).width, (yyvsp[(1) - (4)]._type).size, (yyvsp[(1) - (4)]._type).type);
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 222 "Parser.y"
    {
        size_t nelements = READER->numElementsInBuffer();

        if ((yyvsp[(1) - (8)]._type).size != 0 && nelements != (yyvsp[(1) - (8)]._type).size)
        {
            if ((yyvsp[(7) - (8)]._token) == GTO_ELLIPSIS)
            {
                READER->fillToSize((yyvsp[(1) - (8)]._type).size);
                READER->endProperty();
            }
            else
            {
                GTOParseError(state, 
                              "property size mismatch, found %d, expect %d",
                              nelements,
                              (yyvsp[(1) - (8)]._type).size);
                YYERROR;
            }
        }
        else if ((yyvsp[(1) - (8)]._type).size == 0 && (yyvsp[(7) - (8)]._token) == GTO_ELLIPSIS)
        {
            GTOParseError(state,
              "use of ... requires fixed property size but none was provided");
            YYERROR;
        }
        else
        {
            READER->endProperty();
        }
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 256 "Parser.y"
    {
        (yyval._type).type  = (yyvsp[(1) - (1)]._type).type;
        (yyval._type).width = 1;
        (yyval._type).size  = 0;
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 263 "Parser.y"
    {
        (yyval._type).type  = (yyvsp[(1) - (4)]._type).type;
        (yyval._type).width = (yyvsp[(3) - (4)]._int);
        (yyval._type).size  = 0;
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 270 "Parser.y"
    {
        (yyval._type).type  = (yyvsp[(1) - (7)]._type).type;
        (yyval._type).width = (yyvsp[(3) - (7)]._int);
        (yyval._type).size  = (yyvsp[(6) - (7)]._int);
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 278 "Parser.y"
    { (yyval._type).type = Gto::Float; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 279 "Parser.y"
    { (yyval._type).type = Gto::Int; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 280 "Parser.y"
    { (yyval._type).type = Gto::String; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 281 "Parser.y"
    { (yyval._type).type = Gto::Short; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 282 "Parser.y"
    { (yyval._type).type = Gto::Byte; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 283 "Parser.y"
    { (yyval._type).type = Gto::Half; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 284 "Parser.y"
    { (yyval._type).type = Gto::Boolean; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 285 "Parser.y"
    { (yyval._type).type = Gto::Double; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 289 "Parser.y"
    { (yyval._token) = 0; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 290 "Parser.y"
    { (yyval._token) = 0; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 291 "Parser.y"
    { (yyval._token) = GTO_ELLIPSIS; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 302 "Parser.y"
    {
        if ((yyvsp[(2) - (3)]._uint) != READER->currentType().width)
        {
            GTOParseError(state, "expected data width of %d, found %d",
                          READER->currentType().width, (yyvsp[(2) - (3)]._uint));
            YYERROR;
        }
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 318 "Parser.y"
    { ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 319 "Parser.y"
    { ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 323 "Parser.y"
    { (yyval._uint) = 1; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 324 "Parser.y"
    { (yyval._uint) = (yyvsp[(1) - (2)]._uint) + 1; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 329 "Parser.y"
    {
        if (READER->currentType().type != Gto::String)
        {
            GTOParseError(state, 
                          "expected a numeric value, found string \"%s\"",
                          READER->stringFromId((yyvsp[(1) - (1)]._int)).c_str());
            YYERROR;
        }
        else
        {
            READER->addToPropertyBuffer((yyvsp[(1) - (1)]._int));
        }

        (yyval._int) = (yyvsp[(1) - (1)]._int);
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 347 "Parser.y"
    { (yyval._uint) = 1; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 348 "Parser.y"
    { (yyval._uint) = (yyvsp[(1) - (2)]._uint) + 1; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 353 "Parser.y"
    {
        Gto::DataType t = Gto::DataType(READER->properties().back().type);

        switch (t)
        {
          case Gto::Int:
              if ((yyvsp[(1) - (1)]._double) != int((yyvsp[(1) - (1)]._double)))
              {
                  GTOParseWarning(state, "floating point value truncated "
                                  "to match integer property type (%f => %d)",
                                  (yyvsp[(1) - (1)]._double), int((yyvsp[(1) - (1)]._double)));
              }
              
              (yyval._number).type = Gto::Int;
              (yyval._number)._int = int((yyvsp[(1) - (1)]._double));
              READER->addToPropertyBuffer(int((yyvsp[(1) - (1)]._double)));
              break;
              
          case Gto::Float:
              (yyval._number).type = Gto::Float;
              (yyval._number)._double = (yyvsp[(1) - (1)]._double);
              READER->addToPropertyBuffer(float((yyvsp[(1) - (1)]._double)));
              break;

          case Gto::Double:
              (yyval._number).type = Gto::Double;
              (yyval._number)._double = (yyvsp[(1) - (1)]._double);
              READER->addToPropertyBuffer(double((yyvsp[(1) - (1)]._double)));
              break;

#ifdef GTO_SUPPORT_HALF
          case Gto::Half:
              (yyval._number).type = Gto::Half;
              (yyval._number)._double = (yyvsp[(1) - (1)]._double);
              READER->addToPropertyBuffer(half((yyvsp[(1) - (1)]._double)));
              break;
#else
          case Gto::Half:
              GTOParseError(state, "numeric type '%s' is currently unsupported "
                            "by the parser", typeName(t));
              YYERROR;
#endif

          case Gto::Short:
              if ((yyvsp[(1) - (1)]._double) != short((yyvsp[(1) - (1)]._double)))
              {
                  GTOParseWarning(state, "floating point value truncated "
                                  "to match short property type (%f => %d)",
                                  (yyvsp[(1) - (1)]._double), int(short((yyvsp[(1) - (1)]._double))));
              }
              
              (yyval._number).type = Gto::Short;
              (yyval._number)._int = short((yyvsp[(1) - (1)]._double));
              READER->addToPropertyBuffer(short((yyvsp[(1) - (1)]._double)));
              break;

          case Gto::Byte:
              if ((yyvsp[(1) - (1)]._double) != (unsigned char)((yyvsp[(1) - (1)]._double)))
              {
                  GTOParseWarning(state, "floating point value truncated "
                                  "to match byte property type (%f => %d)",
                                  (yyvsp[(1) - (1)]._double), int((unsigned char)((yyvsp[(1) - (1)]._double))));
              }
              
              (yyval._number).type = Gto::Byte;
              (yyval._number)._int = (unsigned char)((yyvsp[(1) - (1)]._double));
              READER->addToPropertyBuffer((unsigned char)((yyvsp[(1) - (1)]._double)));
              break;

          case Gto::String:
              GTOParseError(state, "string expected; got a floating "
                            "point number (%f) instead", (yyvsp[(1) - (1)]._double));
              YYERROR;
              break;

          default:
              GTOParseError(state, "unsupported type '%s'; got a floating "
                            "point number (%f) instead", typeName(t), (yyvsp[(1) - (1)]._double));
              YYERROR;
              break;
        }
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 437 "Parser.y"
    {
        Gto::DataType t = Gto::DataType(READER->properties().back().type);

        switch (t)
        {
          case Gto::Int:
              (yyval._number).type = Gto::Int;
              (yyval._number)._int = (yyvsp[(1) - (1)]._int);
              READER->addToPropertyBuffer(int((yyvsp[(1) - (1)]._int)));
              break;
              
          case Gto::Float:
              if ((yyvsp[(1) - (1)]._int) != float((yyvsp[(1) - (1)]._int)))
              {
                  GTOParseWarning(state, "integer cannot be represented "
                                  "as floating point (%d => %f)",
                                  (yyvsp[(1) - (1)]._int), float((yyvsp[(1) - (1)]._int)));
              }
              
              (yyval._number).type = Gto::Float;
              (yyval._number)._double = (yyvsp[(1) - (1)]._int);
              READER->addToPropertyBuffer(float((yyvsp[(1) - (1)]._int)));
              break;

          case Gto::Double:
              if ((yyvsp[(1) - (1)]._int) != double((yyvsp[(1) - (1)]._int)))
              {
                  GTOParseWarning(state, "integer cannot be represented "
                                  "as double (%d => %f)",
                                  (yyvsp[(1) - (1)]._int), double((yyvsp[(1) - (1)]._int)));
              }
              
              (yyval._number).type = Gto::Double;
              (yyval._number)._double = (yyvsp[(1) - (1)]._int);
              READER->addToPropertyBuffer(double((yyvsp[(1) - (1)]._int)));
              break;

#ifdef GTO_SUPPORT_HALF
          case Gto::Half:
              if ((yyvsp[(1) - (1)]._int) != half((yyvsp[(1) - (1)]._int)))
              {
                  GTOParseWarning(state, "integer cannot be represented "
                                  "as half (%d => %f)",
                                  (yyvsp[(1) - (1)]._int), float((yyvsp[(1) - (1)]._int)));
              }
              
              (yyval._number).type = Gto::Half;
              (yyval._number)._double = (yyvsp[(1) - (1)]._int);
              READER->addToPropertyBuffer(half((yyvsp[(1) - (1)]._int)));
              break;
#endif

          case Gto::Short:
              if ((yyvsp[(1) - (1)]._int) != short((yyvsp[(1) - (1)]._int)))
              {
                  GTOParseWarning(state, "integer cannot be represented "
                                  "as short (%d => %d)",
                                  (yyvsp[(1) - (1)]._int), short((yyvsp[(1) - (1)]._int)));
              }
              
              (yyval._number).type = Gto::Short;
              (yyval._number)._int = short((yyvsp[(1) - (1)]._int));
              READER->addToPropertyBuffer(short((yyvsp[(1) - (1)]._int)));
              break;

          case Gto::Byte:
              if ((yyvsp[(1) - (1)]._int) != (unsigned char)((yyvsp[(1) - (1)]._int)))
              {
                  GTOParseWarning(state, "integer cannot be represented "
                                  "as byte (%d => %d)",
                                  (yyvsp[(1) - (1)]._int), (unsigned char)((yyvsp[(1) - (1)]._int)));
              }
              
              (yyval._number).type = Gto::Byte;
              (yyval._number)._int = (unsigned char)((yyvsp[(1) - (1)]._int));
              READER->addToPropertyBuffer((unsigned char)((yyvsp[(1) - (1)]._int)));
              break;

          case Gto::String:
              GTOParseError(state, "string expected; got an integer "
                            "(%d) instead", (yyvsp[(1) - (1)]._int));
              YYERROR;
              break;

          case Gto::Boolean:
              GTOParseError(state, "numeric type '%s' is currently unsupported "
                            "by the parser", typeName(t));
              YYERROR;
              break;

          default:
              GTOParseError(state, "unsupported type '%s'; got an integer "
                            "(%d) instead", typeName(t), (yyvsp[(1) - (1)]._int));
              YYERROR;
              break;
        }
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 537 "Parser.y"
    { (yyval._double) = (yyvsp[(1) - (1)]._double); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 538 "Parser.y"
    { (yyval._double) = -(yyvsp[(2) - (2)]._double); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 542 "Parser.y"
    { (yyval._int) = (yyvsp[(1) - (1)]._int); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 543 "Parser.y"
    { (yyval._int) = -(yyvsp[(2) - (2)]._int); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2072 "Parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 547 "Parser.y"


int yylex(void* yylval, void* state)
{
    GTOFlexLexer* lexer = reinterpret_cast<GTOFlexLexer*>(state);
    lexer->setYYSTYPE(yylval);
    return lexer->yylex();
}

void
GTOParseError(void* state, const char *text, ...)
{
    char temp[256];
    //GTOFlexLexer* lexer = reinterpret_cast<GTOFlexLexer*>(state);

    va_list ap;
    va_start(ap,text);
    vsprintf(temp,text,ap);
    va_end(ap);

    READER->parseError(temp);
}

void
GTOParseWarning(void* state, const char *text, ...)
{
    char temp[256];
    //GTOFlexLexer* lexer = (GTOFlexLexer*)state;

    va_list ap;
    va_start(ap,text);
    vsprintf(temp,text,ap);
    va_end(ap);

    READER->parseWarning(temp);
}

int
GTOParse(Gto::Reader* reader)
{
    //
    //  Initialize state
    //

    yydebug = 0;
    GTOFlexLexer lexer(reader->in(), &std::cerr);
    lexer.init(reader);

    //
    //  Call the (bison) parser
    //

    return yyparse(&lexer) == 0;
}   


// Local Variables:
// mode: c++
// compile-command: "bison -v Parser.y"
// End:



