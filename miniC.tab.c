/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "miniC.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "AST.h"

#line 72 "miniC.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "miniC.tab.h".  */
#ifndef YY_YY_MINIC_TAB_H_INCLUDED
# define YY_YY_MINIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTNUM = 258,
    FLOATNUM = 259,
    ID = 260,
    INT = 261,
    FLOAT = 262,
    FOR = 263,
    WHILE = 264,
    DO = 265,
    IF = 266,
    ELSE = 267,
    RELA = 268,
    EQLT = 269,
    RETURN = 270,
    UNARY = 271
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "miniC.y" /* yacc.c:355  */

	struct PROGRAM *ptr_program;
	struct DECLARATION *ptr_declaration;
	struct IDENTIFIER *ptr_identifier;
	struct FUNCTION *ptr_function;
	struct PARAMETER *ptr_parameter;
	struct COMPOUNDSTMT *ptr_compoundstmt;

	struct STMT *ptr_stmt;
	struct ASSIGN *ptr_assign;
	struct CALL *ptr_call;
	struct ARG *ptr_arg;

	struct WHILE_S *ptr_while_s;
	struct FOR_S *ptr_for_s;
	struct IF_S *ptr_if_s;
	struct EXPR *ptr_expr;
	struct UNOP *ptr_unop;
	struct ADDIOP *ptr_addiop;
	struct MULTOP *ptr_multop;
	struct RELAOP *ptr_relaop;
	struct EQLTOP *ptr_eqltop;
	struct ID_S *ptr_id_s;

	int intnum;
	float floatnum;
	char* id;

#line 158 "miniC.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINIC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "miniC.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,    22,    28,    26,    20,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    17,
      31,    25,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,    24,     2,     2,     2,     2,
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
      15,    16,    32,    33,    34,    35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    77,    83,    91,    99,   107,   114,   122,
     130,   137,   144,   151,   161,   170,   180,   189,   198,   206,
     215,   224,   232,   240,   247,   253,   259,   265,   273,   280,
     288,   295,   303,   310,   318,   325,   333,   340,   348,   355,
     363,   371,   379,   387,   394,   401,   408,   416,   424,   433,
     443,   451,   460,   467,   474,   481,   488,   495,   502,   509,
     516,   523,   531,   539,   547,   556,   564,   573,   581,   589,
     597,   606,   614,   623,   630
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTNUM", "FLOATNUM", "ID", "INT",
  "FLOAT", "FOR", "WHILE", "DO", "IF", "ELSE", "RELA", "EQLT", "RETURN",
  "UNARY", "';'", "'['", "']'", "','", "'('", "')'", "'{'", "'}'", "'='",
  "'+'", "'-'", "'*'", "'/'", "'>'", "'<'", "\">=\"", "\"<=\"", "\"==\"",
  "\"!=\"", "$accept", "PROGRAM", "DECLARATION", "IDENTIFIER", "FUNCTION",
  "PARAMETER", "COMPOUNDSTMT", "STMT", "ASSIGN", "CALL", "ARG", "WHILE_S",
  "FOR_S", "IF_S", "EXPR", "UNOP", "ADDIOP", "MULTOP", "RELAOP", "EQLTOP",
  "ID_S", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    59,    91,    93,
      44,    40,    41,   123,   125,    61,    43,    45,    42,    47,
      62,    60,   272,   273,   274,   275
};
# endif

#define YYPACT_NINF -66

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-66)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      80,     2,     8,    39,   133,   -66,    98,    19,   116,    24,
     -66,    46,    58,   -66,    41,    60,     6,   135,    36,   135,
      47,    53,    63,   -15,   -66,    60,    66,    69,    60,    60,
     -66,    66,    76,   -66,    97,    94,    70,   133,    66,   133,
      66,    60,   -66,    78,   100,   102,    38,   105,   208,   -66,
     151,    38,   109,    38,    38,    38,    38,    38,   -66,   133,
     -66,   133,   -66,   208,    51,   208,   139,   208,   136,   208,
     -66,   -66,   222,   208,   208,   -66,   120,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   134,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   218,   140,   141,   250,   150,    -9,
     147,   264,   144,   278,    51,   316,   316,   292,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   -66,   -66,
     143,   -66,   152,   208,   -66,   208,    38,   208,    38,   234,
     -66,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   208,   -66,   -66,   169,   -66,   306,   158,   188,   139,
     154,    38,   -66,   165,   -66,   -66,    38,   -66
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     4,    12,     0,    12,     0,
       1,     0,     0,     2,     0,     0,     0,     7,     0,     8,
       0,     0,     0,    12,    10,     0,     0,     0,     0,     0,
       5,     0,     0,     6,    11,    22,     0,    18,     0,    20,
       0,     0,    21,     0,     0,     0,     0,     0,     0,    26,
       0,    40,     0,    28,    30,    34,    36,    38,    17,    14,
      19,    16,     9,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    74,     0,     0,    57,    32,    52,    53,    54,
      55,    56,    59,    25,     0,    39,    24,    27,    29,    33,
      35,    37,    13,    15,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,    73,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    23,
       0,    44,     0,     0,    42,     0,     0,     0,     0,     0,
      58,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    43,    45,     0,    47,     0,    51,     0,     0,
       0,     0,    41,     0,    48,    50,     0,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,   -13,     9,    -2,   -10,    57,   -24,   -65,   -36,
      49,   -66,   -66,   -66,    -3,   -66,   -66,   -66,   -66,   -66,
     -66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     7,     5,    27,    51,    52,    53,    75,
      96,    55,    56,    57,    97,    77,    78,    79,    80,    81,
      82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      54,   100,    13,    14,    30,    15,    33,     6,    32,    63,
      54,     9,    25,     8,    54,    54,    65,    54,    54,    54,
      54,    54,    68,    50,    24,    42,    84,    85,    26,    87,
      88,    89,    90,    91,    35,    58,    17,    60,     9,    10,
      54,    19,    25,    43,    22,    76,    44,    45,    46,    47,
      62,    20,   118,    48,    70,    71,    72,    92,    31,    93,
      94,    36,    98,    21,   101,    23,   103,    73,    16,   105,
     106,   107,    74,    95,    18,    43,    28,    29,    44,    45,
      46,    47,    34,    37,   153,    48,     1,     2,    39,    36,
      54,    38,    54,    36,    49,    59,    63,    61,    40,    64,
      25,   129,   145,    65,   147,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    54,    14,    41,    15,    16,
      54,    66,   144,    67,   146,    43,    69,   155,    44,    45,
      46,    47,   157,    86,    14,    48,    15,    18,   148,    11,
      12,    28,    29,    36,    99,   102,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    43,   121,   119,    44,
      45,    46,    47,   122,   125,   127,    48,   124,   141,   142,
     151,   154,   143,     0,    36,    83,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   149,   156,     0,     0,
       0,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   152,     0,     0,     0,     0,
       0,    70,    71,    72,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    73,    70,    71,    72,     0,    74,
       0,     0,     0,     0,     0,     0,     0,   120,    73,     0,
       0,     0,     0,   104,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   123,     0,   130,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     123,     0,     0,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   126,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     128,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   130,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   150,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117
};

static const yytype_int16 yycheck[] =
{
      36,    66,     4,    18,    17,    20,    19,     5,    18,    18,
      46,     2,     6,     5,    50,    51,    25,    53,    54,    55,
      56,    57,    46,    36,    15,    35,    50,    51,    22,    53,
      54,    55,    56,    57,    25,    37,    17,    39,    29,     0,
      76,    17,     6,     5,     3,    48,     8,     9,    10,    11,
      41,     5,    76,    15,     3,     4,     5,    59,    22,    61,
      63,    23,    65,     5,    67,     5,    69,    16,    21,    72,
      73,    74,    21,    22,    21,     5,     6,     7,     8,     9,
      10,    11,    19,    26,   149,    15,     6,     7,    31,    23,
     126,    22,   128,    23,    24,    38,    18,    40,    22,    21,
       6,   104,   126,    25,   128,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   151,    18,    20,    20,    21,
     156,    21,   125,    21,   127,     5,    21,   151,     8,     9,
      10,    11,   156,    24,    18,    15,    20,    21,   141,     6,
       7,     6,     7,    23,     5,     9,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     5,    17,    24,     8,
       9,    10,    11,    22,    17,    21,    15,    17,    25,    17,
      12,    17,   123,    -1,    23,    24,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    17,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    17,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    16,     3,     4,     5,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    16,    -1,
      -1,    -1,    -1,    21,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    20,    -1,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    37,    38,    40,     5,    39,     5,    39,
       0,     6,     7,    40,    18,    20,    21,    17,    21,    17,
       5,     5,     3,     5,    39,     6,    22,    41,     6,     7,
      38,    22,    41,    38,    19,    39,    23,    42,    22,    42,
      22,    20,    41,     5,     8,     9,    10,    11,    15,    24,
      38,    42,    43,    44,    45,    47,    48,    49,    40,    42,
      40,    42,    39,    18,    21,    25,    21,    21,    43,    21,
       3,     4,     5,    16,    21,    45,    50,    51,    52,    53,
      54,    55,    56,    24,    43,    43,    24,    43,    43,    43,
      43,    43,    40,    40,    50,    22,    46,    50,    50,     5,
      44,    50,     9,    50,    21,    50,    50,    50,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    43,    24,
      19,    17,    22,    20,    17,    17,    22,    21,    22,    50,
      22,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    25,    17,    46,    50,    43,    50,    43,    50,    17,
      22,    12,    17,    44,    17,    43,    22,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    37,    38,    38,    38,    38,    39,
      39,    39,    39,    40,    40,    40,    40,    40,    40,    40,
      40,    41,    41,    42,    42,    42,    42,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    44,    44,    45,    45,    46,    46,    47,    47,    48,
      49,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    52,    52,    53,    53,    54,    54,    54,
      54,    55,    55,    56,    56
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     4,     4,     3,     3,     6,
       3,     4,     1,     7,     6,     7,     6,     6,     5,     6,
       5,     3,     2,     4,     3,     3,     2,     2,     1,     2,
       1,     3,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     7,     4,     5,     4,     3,     1,     5,     7,     9,
       7,     5,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 70 "miniC.y" /* yacc.c:1646  */
    {
	struct PROGRAM *program = (struct PROGRAM *) malloc (sizeof (struct PROGRAM));
	program->decl = (yyvsp[-1].ptr_declaration);
	program->func = (yyvsp[0].ptr_function);
	(yyval.ptr_program) = program;
}
#line 1396 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "miniC.y" /* yacc.c:1646  */
    {
	struct PROGRAM *program = (struct PROGRAM *) malloc (sizeof (struct PROGRAM));
	program->decl = (yyvsp[0].ptr_declaration);
	(yyval.ptr_program) = program;
}
#line 1406 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 83 "miniC.y" /* yacc.c:1646  */
    {
	struct PROGRAM *program = (struct PROGRAM *) malloc (sizeof (struct PROGRAM));
	program->func = (yyvsp[0].ptr_function);
	(yyval.ptr_program) = program;
}
#line 1416 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 91 "miniC.y" /* yacc.c:1646  */
    {
	struct DECLARATION *decl = (struct DECLARATION *) malloc (sizeof (struct DECLARATION));
	decl->t = eInt;
	decl->id = (yyvsp[-2].ptr_identifier);
	decl->prev = (yyvsp[0].ptr_declaration);
	(yyval.ptr_declaration) = decl;
}
#line 1428 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 99 "miniC.y" /* yacc.c:1646  */
    {
	struct DECLARATION *decl = (struct DECLARATION *) malloc (sizeof (struct DECLARATION));
	decl->t = eFloat;
	decl->id = (yyvsp[-2].ptr_identifier);
	decl->prev = (yyvsp[0].ptr_declaration);
	(yyval.ptr_declaration) = decl;
}
#line 1440 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 107 "miniC.y" /* yacc.c:1646  */
    {
	struct DECLARATION *decl = (struct DECLARATION *) malloc (sizeof (struct DECLARATION));
	decl->t = eInt;
	decl->id = (yyvsp[-1].ptr_identifier);
	(yyval.ptr_declaration) = decl;
}
#line 1451 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 114 "miniC.y" /* yacc.c:1646  */
    {
	struct DECLARATION *decl = (struct DECLARATION *) malloc (sizeof (struct DECLARATION));
	decl->t = eFloat;
	decl->id = (yyvsp[-1].ptr_identifier);
	(yyval.ptr_declaration) = decl;
}
#line 1462 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 122 "miniC.y" /* yacc.c:1646  */
    {
	struct IDENTIFIER *ident = (struct IDENTIFIER *) malloc (sizeof (struct IDENTIFIER));
	ident->ID = (yyvsp[-5].id);
	ident->intnum = (yyvsp[-3].intnum);
	ident->prev = (yyvsp[0].ptr_identifier);
	(yyval.ptr_identifier)=ident;
}
#line 1474 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 130 "miniC.y" /* yacc.c:1646  */
    {
	struct IDENTIFIER *ident = (struct IDENTIFIER *) malloc (sizeof (struct IDENTIFIER));
	ident->ID = (yyvsp[-2].id);
	ident->prev = (yyvsp[0].ptr_identifier);
	(yyval.ptr_identifier)=ident;
}
#line 1485 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 137 "miniC.y" /* yacc.c:1646  */
    {
	struct IDENTIFIER *ident = (struct IDENTIFIER *) malloc (sizeof (struct IDENTIFIER));
	ident->ID = (yyvsp[-3].id);
	ident->intnum = (yyvsp[-1].intnum);
	(yyval.ptr_identifier)=ident;
}
#line 1496 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 144 "miniC.y" /* yacc.c:1646  */
    {
	struct IDENTIFIER *ident = (struct IDENTIFIER *) malloc (sizeof (struct IDENTIFIER));
	ident->ID = (yyvsp[0].id);
	(yyval.ptr_identifier)=ident;
}
#line 1506 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 151 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eInt;
	func->ID=(yyvsp[-5].id);
	func->param=(yyvsp[-3].ptr_parameter);
	func->cstmt=(yyvsp[-1].ptr_compoundstmt);
	func->prev=(yyvsp[0].ptr_function);
	(yyval.ptr_function)=func;
}
#line 1520 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 161 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eInt;
	func->ID=(yyvsp[-4].id);
	func->param=(yyvsp[-2].ptr_parameter);
	func->cstmt=(yyvsp[0].ptr_compoundstmt);
	(yyval.ptr_function)=func;
}
#line 1533 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eFloat;
	func->ID=(yyvsp[-5].id);
	func->param=(yyvsp[-3].ptr_parameter);
	func->cstmt=(yyvsp[-1].ptr_compoundstmt);
	func->prev=(yyvsp[0].ptr_function);
	(yyval.ptr_function)=func;
}
#line 1547 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 180 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eFloat;
	func->ID=(yyvsp[-4].id);
	func->param=(yyvsp[-2].ptr_parameter);
	func->cstmt=(yyvsp[0].ptr_compoundstmt);
	(yyval.ptr_function)=func;
}
#line 1560 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 189 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eInt;
	func->ID=(yyvsp[-4].id);
	func->cstmt=(yyvsp[-1].ptr_compoundstmt);
	func->prev=(yyvsp[-1].ptr_compoundstmt);
	(yyval.ptr_function)=func;
}
#line 1573 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 198 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eInt;
	func->ID=(yyvsp[-3].id);
	func->cstmt=(yyvsp[0].ptr_compoundstmt);
	(yyval.ptr_function)=func;
}
#line 1585 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 206 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eFloat;
	func->ID=(yyvsp[-4].id);
	func->cstmt=(yyvsp[-1].ptr_compoundstmt);
	func->prev=(yyvsp[0].ptr_function);
	(yyval.ptr_function)=func;
}
#line 1598 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 215 "miniC.y" /* yacc.c:1646  */
    {
	struct FUNCTION *func = (struct FUNCTION *) malloc (sizeof (struct FUNCTION));
	func->t=eFloat;
	func->ID=(yyvsp[-3].id);
	func->cstmt=(yyvsp[0].ptr_compoundstmt);
	(yyval.ptr_function)=func;
}
#line 1610 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 224 "miniC.y" /* yacc.c:1646  */
    {
	struct PARAMETER *para = (struct PARAMETER *) malloc (sizeof (struct PARAMETER));
	para->t = eInt;
	para->id = (yyvsp[-1].ptr_identifier);
	para->prev = (yyvsp[0].ptr_parameter);
	(yyval.ptr_parameter)=para;
}
#line 1622 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 232 "miniC.y" /* yacc.c:1646  */
    {
	struct PARAMETER *para = (struct PARAMETER *) malloc (sizeof (struct PARAMETER));
	para->t = eInt;
	para->id = (yyvsp[0].ptr_identifier);
	(yyval.ptr_parameter)=para;
}
#line 1633 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 240 "miniC.y" /* yacc.c:1646  */
    {
	struct COMPOUNDSTMT *cstmt = (struct COMPOUNDSTMT *) malloc (sizeof (struct COMPOUNDSTMT));
	cstmt->decl=(yyvsp[-2].ptr_declaration);
	cstmt->stmt=(yyvsp[-1].ptr_stmt);
	(yyval.ptr_compoundstmt)=cstmt;
}
#line 1644 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 247 "miniC.y" /* yacc.c:1646  */
    {
	struct COMPOUNDSTMT *cstmt = (struct COMPOUNDSTMT *) malloc (sizeof (struct COMPOUNDSTMT));
	cstmt->stmt=(yyvsp[-1].ptr_stmt);
	(yyval.ptr_compoundstmt)=cstmt;
}
#line 1654 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 253 "miniC.y" /* yacc.c:1646  */
    {
	struct COMPOUNDSTMT *cstmt = (struct COMPOUNDSTMT *) malloc (sizeof (struct COMPOUNDSTMT));
	cstmt->decl=(yyvsp[-1].ptr_declaration);
	(yyval.ptr_compoundstmt)=cstmt;
}
#line 1664 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 259 "miniC.y" /* yacc.c:1646  */
    {
	struct COMPOUNDSTMT *cstmt = (struct COMPOUNDSTMT *) malloc (sizeof (struct COMPOUNDSTMT));
	(yyval.ptr_compoundstmt)=cstmt;
}
#line 1673 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 265 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eAssign;
	stmt->stmt.assign_ = (yyvsp[-1].ptr_assign);
	stmt->prev = (yyvsp[0].ptr_stmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1685 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 273 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eAssign;
	stmt->stmt.assign_ = (yyvsp[0].ptr_assign);
	(yyval.ptr_stmt) = stmt;
}
#line 1696 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 280 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eCall;
	stmt->stmt.call_ = (yyvsp[-1].ptr_call);
	stmt->prev = (yyvsp[0].ptr_stmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1708 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 288 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eCall;
	stmt->stmt.call_ = (yyvsp[0].ptr_call);
	(yyval.ptr_stmt) = stmt;
}
#line 1719 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 295 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eRet;
	stmt->stmt.return_ = (yyvsp[-1].ptr_expr);
	stmt->prev = (yyvsp[0].ptr_stmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1731 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 303 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eRet;
	stmt->stmt.return_ = (yyvsp[0].ptr_expr);
	(yyval.ptr_stmt) = stmt;
}
#line 1742 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 310 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eWhile;
	stmt->stmt.while_ = (yyvsp[-1].ptr_while_s);
	stmt->prev = (yyvsp[0].ptr_stmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1754 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 318 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eWhile;
	stmt->stmt.while_ = (yyvsp[0].ptr_while_s);
	(yyval.ptr_stmt) = stmt;
}
#line 1765 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 325 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eFor;
	stmt->stmt.for_ = (yyvsp[-1].ptr_for_s);
	stmt->prev = (yyvsp[0].ptr_stmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1777 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 333 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eFor;
	stmt->stmt.for_ = (yyvsp[0].ptr_for_s);
	(yyval.ptr_stmt) = stmt;
}
#line 1788 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 340 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eIf;
	stmt->stmt.if_ = (yyvsp[-1].ptr_if_s);
	stmt->prev = (yyvsp[0].ptr_stmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1800 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 348 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eIf;
	stmt->stmt.if_ = (yyvsp[0].ptr_if_s);
	(yyval.ptr_stmt) = stmt;
}
#line 1811 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 355 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eCompound;
	stmt->stmt.cstmt_ = (yyvsp[-1].ptr_compoundstmt);
	stmt->prev = (yyvsp[0].ptr_stmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1823 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 363 "miniC.y" /* yacc.c:1646  */
    {
	struct STMT *stmt = (struct STMT *) malloc (sizeof (struct STMT));
	stmt->s = eCompound;
	stmt->stmt.cstmt_ = (yyvsp[0].ptr_compoundstmt);
	(yyval.ptr_stmt) = stmt;
}
#line 1834 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 371 "miniC.y" /* yacc.c:1646  */
    {
	struct ASSIGN *asmt = (struct ASSIGN *) malloc (sizeof (struct ASSIGN));
	asmt->ID = (yyvsp[-6].id);
	asmt->index = (yyvsp[-4].ptr_expr);
	asmt->expr = (yyvsp[-1].ptr_expr);
	(yyval.ptr_assign)=asmt;
}
#line 1846 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 379 "miniC.y" /* yacc.c:1646  */
    {
	struct ASSIGN *asmt = (struct ASSIGN *) malloc (sizeof (struct ASSIGN));
	asmt->ID = (yyvsp[-3].id);
	asmt->expr = (yyvsp[-1].ptr_expr);
	(yyval.ptr_assign)=asmt;
}
#line 1857 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 387 "miniC.y" /* yacc.c:1646  */
    {
	struct CALL *cl = (struct CALL *) malloc (sizeof (struct CALL));
	cl->ID=(yyvsp[-4].id);
	cl->arg=(yyvsp[-2].ptr_arg);
	(yyval.ptr_call)=cl;
}
#line 1868 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 394 "miniC.y" /* yacc.c:1646  */
    {
	struct CALL *cl = (struct CALL *) malloc (sizeof (struct CALL));
	cl->ID=(yyvsp[-3].id);
	(yyval.ptr_call)=cl;
}
#line 1878 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 401 "miniC.y" /* yacc.c:1646  */
    {
	struct ARG *ar = (struct ARG *) malloc (sizeof (struct ARG));
	ar->expr=(yyvsp[-2].ptr_expr);
	ar->prev=(yyvsp[0].ptr_arg);
	(yyval.ptr_arg)=ar;
}
#line 1889 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 408 "miniC.y" /* yacc.c:1646  */
    {
	struct ARG *ar = (struct ARG *) malloc (sizeof (struct ARG));
	ar->expr=(yyvsp[0].ptr_expr);
	(yyval.ptr_arg)=ar;
}
#line 1899 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 416 "miniC.y" /* yacc.c:1646  */
    {
	struct WHILE_S *wh_s = (struct WHILE_S *) malloc (sizeof (struct WHILE_S));
	wh_s->do_while = false;
	wh_s->cond = (yyvsp[-2].ptr_expr);
	wh_s->stmt = (yyvsp[0].ptr_stmt);
	(yyval.ptr_while_s)=wh_s;
}
#line 1911 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 424 "miniC.y" /* yacc.c:1646  */
    {
	struct WHILE_S *wh_s = (struct WHILE_S *) malloc (sizeof (struct WHILE_S));
	wh_s->do_while = true;
	wh_s->cond = (yyvsp[-2].ptr_expr);
	wh_s->stmt = (yyvsp[-5].ptr_stmt);
	(yyval.ptr_while_s)=wh_s;
}
#line 1923 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 433 "miniC.y" /* yacc.c:1646  */
    {
	struct FOR_S *f_s = (struct FOR_S *) malloc (sizeof (struct FOR_S));
	f_s->init = (yyvsp[-6].ptr_assign);
	f_s->cond = (yyvsp[-4].ptr_expr);
	f_s->inc = (yyvsp[-2].ptr_assign);
	f_s->stmt = (yyvsp[0].ptr_stmt);
	(yyval.ptr_for_s) = f_s;
}
#line 1936 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 443 "miniC.y" /* yacc.c:1646  */
    {
	struct IF_S *i_s = (struct IF_S *) malloc (sizeof (struct IF_S));
	i_s->cond = (yyvsp[-4].ptr_expr);
	i_s->if_ = (yyvsp[-2].ptr_stmt);
	i_s->else_ = (yyvsp[0].ptr_stmt);
	(yyval.ptr_if_s) = i_s;
}
#line 1948 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 451 "miniC.y" /* yacc.c:1646  */
    {
	struct IF_S *i_s = (struct IF_S *) malloc (sizeof (struct IF_S));
	i_s->cond = (yyvsp[-2].ptr_expr);
	i_s->if_ = (yyvsp[0].ptr_stmt);
	(yyval.ptr_if_s) = i_s;
}
#line 1959 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 460 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eUnop;
	exp->expression.unop_=(yyvsp[0].ptr_unop);
	(yyval.ptr_expr)=exp;
}
#line 1970 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 467 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eAddi;
	exp->expression.addiop_=(yyvsp[0].ptr_addiop);
	(yyval.ptr_expr)=exp;
}
#line 1981 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 474 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eMulti;
	exp->expression.multop_=(yyvsp[0].ptr_multop);
	(yyval.ptr_expr)=exp;
}
#line 1992 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 481 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eRela;
	exp->expression.relaop_=(yyvsp[0].ptr_relaop);
	(yyval.ptr_expr)=exp;
}
#line 2003 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 488 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eEqlt;
	exp->expression.eqltop_=(yyvsp[0].ptr_eqltop);
	(yyval.ptr_expr)=exp;
}
#line 2014 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 495 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eCallExpr;
	exp->expression.call_=(yyvsp[0].ptr_call);
	(yyval.ptr_expr)=exp;
}
#line 2025 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 502 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eExpr;
	exp->expression.bracket=(yyvsp[-1].ptr_expr);
	(yyval.ptr_expr)=exp;
}
#line 2036 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 509 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eId;
	exp->expression.ID_=(yyvsp[0].ptr_id_s);
	(yyval.ptr_expr)=exp;
}
#line 2047 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 516 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eIntnum;
	exp->expression.intnum=(yyvsp[0].intnum);
	(yyval.ptr_expr)=exp;
}
#line 2058 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 523 "miniC.y" /* yacc.c:1646  */
    {
	struct EXPR *exp = (struct EXPR *) malloc (sizeof (struct EXPR));
	exp->e = eFloatnum;
	exp->expression.floatnum=(yyvsp[0].floatnum);
	(yyval.ptr_expr)=exp;
}
#line 2069 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 531 "miniC.y" /* yacc.c:1646  */
    {
	struct UNOP *uo = (struct UNOP *) malloc (sizeof (struct UNOP));
	uo->u = eNegative;
	uo->expr = (yyvsp[0].ptr_expr);
	(yyval.ptr_unop)=uo;
}
#line 2080 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 539 "miniC.y" /* yacc.c:1646  */
    {
	struct ADDIOP *ado = (struct ADDIOP *) malloc (sizeof (struct ADDIOP));
	ado->a = ePlus;
	ado->lhs = (yyvsp[-2].ptr_expr);
	ado->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_addiop)=ado;
}
#line 2092 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 547 "miniC.y" /* yacc.c:1646  */
    {
	struct ADDIOP *ado = (struct ADDIOP *) malloc (sizeof (struct ADDIOP));
	ado->a = eMinus;
	ado->lhs = (yyvsp[-2].ptr_expr);
	ado->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_addiop)=ado;
}
#line 2104 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 556 "miniC.y" /* yacc.c:1646  */
    {
	struct MULTOP *mto = (struct MULTOP *) malloc (sizeof (struct MULTOP));
	mto->m = eMult;
	mto->lhs = (yyvsp[-2].ptr_expr);
	mto->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_multop)=mto;
}
#line 2116 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 564 "miniC.y" /* yacc.c:1646  */
    {
	struct MULTOP *mto = (struct MULTOP *) malloc (sizeof (struct MULTOP));
	mto->m = eDiv;
	mto->lhs = (yyvsp[-2].ptr_expr);
	mto->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_multop)=mto;
}
#line 2128 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 573 "miniC.y" /* yacc.c:1646  */
    {
	struct RELAOP *rlo = (struct RELAOP *) malloc (sizeof (struct RELAOP));
	rlo->r = eGT;
	rlo->lhs = (yyvsp[-2].ptr_expr);
	rlo->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_relaop)=rlo;
}
#line 2140 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 581 "miniC.y" /* yacc.c:1646  */
    {
	struct RELAOP *rlo = (struct RELAOP *) malloc (sizeof (struct RELAOP));
	rlo->r = eLT;
	rlo->lhs = (yyvsp[-2].ptr_expr);
	rlo->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_relaop)=rlo;
}
#line 2152 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 589 "miniC.y" /* yacc.c:1646  */
    {
	struct RELAOP *rlo = (struct RELAOP *) malloc (sizeof (struct RELAOP));
	rlo->r = eGE;
	rlo->lhs = (yyvsp[-2].ptr_expr);
	rlo->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_relaop)=rlo;
}
#line 2164 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 597 "miniC.y" /* yacc.c:1646  */
    {
	struct RELAOP *rlo = (struct RELAOP *) malloc (sizeof (struct RELAOP));
	rlo->r = eLE;
	rlo->lhs = (yyvsp[-2].ptr_expr);
	rlo->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_relaop)=rlo;
}
#line 2176 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 606 "miniC.y" /* yacc.c:1646  */
    {
	struct EQLTOP *eqo = (struct EQLTOP *) malloc (sizeof (struct EQLTOP));
	eqo->e = eEQ;
	eqo->lhs = (yyvsp[-2].ptr_expr);
	eqo->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_eqltop)=eqo;
}
#line 2188 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 614 "miniC.y" /* yacc.c:1646  */
    {
	struct EQLTOP *eqo = (struct EQLTOP *) malloc (sizeof (struct EQLTOP));
	eqo->e = eNE;
	eqo->lhs = (yyvsp[-2].ptr_expr);
	eqo->rhs = (yyvsp[0].ptr_expr);
	(yyval.ptr_eqltop)=eqo;
}
#line 2200 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 623 "miniC.y" /* yacc.c:1646  */
    {
	struct ID_S *is = (struct ID_S *) malloc (sizeof (struct ID_S));
	is->ID = (yyvsp[-1].id);
	is->expr = (yyvsp[0].ptr_expr);
	(yyval.ptr_id_s)=is;
}
#line 2211 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 630 "miniC.y" /* yacc.c:1646  */
    {
	struct ID_S *is = (struct ID_S *) malloc (sizeof (struct ID_S));
	is->ID = (yyvsp[0].id);
	(yyval.ptr_id_s)=is;
}
#line 2221 "miniC.tab.c" /* yacc.c:1646  */
    break;


#line 2225 "miniC.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 636 "miniC.y" /* yacc.c:1906  */

/* USER CODE */
int yyerror(char const *str) {
    extern char *yytext;
    extern char *yylineno;
    printf("parser error near line : %d, error token is \"%s\"\n", yylineno, yytext);
    return 0;
}
