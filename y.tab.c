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
#line 1 "bison.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void yyerror();
extern FILE *yyin;
extern FILE *yyout;                                
extern int yylineno;


#line 78 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    RELOP = 260,
    COMPOP = 261,
    HASH = 262,
    FROM = 263,
    AS = 264,
    ELIF = 265,
    ELSE = 266,
    IF = 267,
    IMPORT = 268,
    PRINT = 269,
    CLASS = 270,
    IN = 271,
    IS = 272,
    DEF = 273,
    FOR = 274,
    OPBR = 275,
    CLBR = 276,
    OPSQ = 277,
    CLSQ = 278,
    SETDEFAULT = 279,
    COMMENT = 280,
    OPCL = 281,
    CLCL = 282,
    US = 283,
    DQ = 284,
    DOT = 285,
    CO = 286,
    COLLON = 287,
    ID = 288,
    SPACE = 289,
    NEWLINE = 290,
    TAB = 291,
    INIT = 292,
    SELF = 293,
    RANGE = 294,
    EQUAL = 295,
    LAMBDA = 296,
    DICT = 297,
    ITEMS = 298
  };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define RELOP 260
#define COMPOP 261
#define HASH 262
#define FROM 263
#define AS 264
#define ELIF 265
#define ELSE 266
#define IF 267
#define IMPORT 268
#define PRINT 269
#define CLASS 270
#define IN 271
#define IS 272
#define DEF 273
#define FOR 274
#define OPBR 275
#define CLBR 276
#define OPSQ 277
#define CLSQ 278
#define SETDEFAULT 279
#define COMMENT 280
#define OPCL 281
#define CLCL 282
#define US 283
#define DQ 284
#define DOT 285
#define CO 286
#define COLLON 287
#define ID 288
#define SPACE 289
#define NEWLINE 290
#define TAB 291
#define INIT 292
#define SELF 293
#define RANGE 294
#define EQUAL 295
#define LAMBDA 296
#define DICT 297
#define ITEMS 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "bison.y" /* yacc.c:355  */

	float f;
	char *s;

#line 209 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   402

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  313

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
       2,     2,    47,    44,     2,    45,     2,    46,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    30,    31,    34,    35,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    56,    57,    58,    59,    62,    63,    64,
      67,    68,    69,    70,    71,    72,    75,    76,    79,    80,
      81,    82,    85,    88,    91,    92,    93,    96,    99,   102,
     103,   104,   105,   106,   107,   108,   109,   112,   115,   116,
     119,   120,   123,   124,   125,   128,   129,   130,   131,   132,
     133,   134,   135,   138,   139,   140,   141,   142,   143,   146,
     147,   148,   149,   152,   153,   154,   155,   156,   157,   160,
     161,   164,   167,   170,   171,   174,   175,   176,   177,   180,
     185,   189,   190,   192,   195,   196,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   210,   214,   218,   223,   224,
     225,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "RELOP", "COMPOP",
  "HASH", "FROM", "AS", "ELIF", "ELSE", "IF", "IMPORT", "PRINT", "CLASS",
  "IN", "IS", "DEF", "FOR", "OPBR", "CLBR", "OPSQ", "CLSQ", "SETDEFAULT",
  "COMMENT", "OPCL", "CLCL", "US", "DQ", "DOT", "CO", "COLLON", "ID",
  "SPACE", "NEWLINE", "TAB", "INIT", "SELF", "RANGE", "EQUAL", "LAMBDA",
  "DICT", "ITEMS", "'+'", "'-'", "'/'", "'*'", "$accept", "START", "NL",
  "PRG", "IMPORTSTMT", "COMMENTSTMT", "STRING", "MULTIPLECOMMENT",
  "CLASSDEF", "CLASSNAME", "CONSTRUCTOR", "FUNCDEF", "FNAME", "SELF_STUFF",
  "PARAMETER", "OBJECTCREATE", "FUNCTIONCALL", "FORSTMT", "IFSTMT",
  "CONDEXP", "PRINTSTMT", "MATHOP", "OPERATIONS", "VARDECL", "STRINGDECL",
  "STRINGNAME", "NUMBERDECL", "OPERATOR", "LAMBDADEC", "LAMBDAOPERATIONS",
  "DICTIONARIESDEC", "DICTMULTIPLELINES", "DICTPARAMETER",
  "APOSTROPHESTRING", "ITEMSMETHOD", "SETDEFAULTMETHOD",
  "SETDEFAULTPARAMETER", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    43,    45,    47,    42
};
# endif

#define YYPACT_NINF -272

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-272)))

#define YYTABLE_NINF -43

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     337,   -10,     1,    23,     1,     7,    69,    36,    75,    84,
     337,   101,    37,    99,   102,   167,   366,    44,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,    44,
      44,  -272,  -272,  -272,  -272,   147,     8,    19,   138,   139,
     141,    76,   103,  -272,   150,  -272,   163,   168,   366,  -272,
     157,    72,   154,    57,   337,   166,  -272,   302,  -272,    44,
    -272,  -272,   337,   337,   337,   -21,   187,   194,   173,    15,
     175,  -272,  -272,  -272,  -272,    18,   164,   174,   176,   180,
     337,   160,   188,   152,    -1,   193,    66,    72,   104,   366,
    -272,    92,   196,   198,   204,   206,   203,   199,  -272,  -272,
       3,   152,   148,    72,   205,   218,   133,  -272,  -272,    44,
    -272,   208,   114,  -272,    44,  -272,  -272,  -272,    44,    44,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   207,   337,
     210,    44,  -272,    44,    44,   152,   152,   152,   213,    44,
     223,    44,  -272,   226,   216,   219,  -272,  -272,    92,   220,
      72,    72,    72,    72,    44,    72,   152,     3,   221,   225,
     222,   227,   230,    44,   155,   228,   229,    72,   112,   112,
     112,   112,   337,   217,   238,   337,   337,   337,   337,  -272,
     337,   337,   337,   337,  -272,  -272,  -272,   242,   337,    44,
     337,   232,   224,    72,  -272,   236,  -272,  -272,  -272,  -272,
     337,   245,   239,   240,    44,    44,   142,    44,   142,  -272,
      49,   337,  -272,  -272,   156,  -272,   155,   142,   248,  -272,
    -272,   115,   115,  -272,  -272,  -272,   241,    72,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,    44,  -272,   337,  -272,
      -7,   235,   251,   244,  -272,    44,  -272,  -272,   337,  -272,
     246,   250,   337,   252,   253,    72,   254,   255,  -272,  -272,
     259,    44,    44,   258,   337,  -272,    99,  -272,   337,   243,
      44,   337,  -272,   142,   142,  -272,   142,   142,   260,    49,
      44,   261,   337,  -272,   262,  -272,  -272,   256,   337,  -272,
    -272,  -272,  -272,  -272,   264,  -272,   337,    44,  -272,    44,
     257,  -272,    49,  -272,   337,   265,   337,  -272,  -272,   266,
    -272,   102,  -272
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     5,     6,     0,    22,     2,     7,     8,
       9,    11,    10,    12,    13,    14,    15,    16,    17,     0,
       0,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    47,     0,     0,    22,    28,
       0,    56,     0,     0,    22,     0,     1,     6,     4,     2,
       5,     6,    22,    22,    22,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,    56,     0,    22,
      27,     0,    54,    55,    49,     0,     0,     0,    83,    84,
     114,     0,    95,    56,     0,     0,    93,    91,    94,     0,
      45,     0,     0,    40,     0,     3,    90,    89,     0,     0,
      65,    66,    72,    68,    67,    71,    70,    69,     0,    22,
       0,     0,    23,     0,     0,    33,    35,    30,     0,     0,
       0,     0,    38,     0,     0,     0,    41,    37,     0,     0,
      56,    56,    56,    56,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,     0,    22,     0,     0,    22,    22,    22,    22,    64,
      22,    22,    22,    22,    32,    34,    31,     0,    22,     0,
      22,     0,     0,    56,    36,     0,    53,    52,    50,    51,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      56,    22,    97,    98,    95,    96,     0,   114,     0,    83,
      84,    85,    87,    88,    86,    99,     0,    56,    39,    25,
      26,    63,    62,    24,    73,    77,     0,    78,    22,    75,
      46,     0,     0,     0,    58,     0,   115,   105,    22,   104,
     112,   113,    22,   107,   109,    56,   121,     0,   116,   100,
       0,     0,     0,     0,    22,    76,     0,    44,    22,     0,
       0,    22,   103,   114,   114,   101,   114,   114,     0,    56,
       0,     0,    22,    48,     0,    74,    60,     0,    22,    59,
     110,   111,   106,   108,   119,   120,    22,     0,    57,     0,
       0,    29,    56,   117,    22,     0,    22,   118,   102,     0,
      61,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,   -13,     0,    40,  -272,  -272,   -64,   158,   201,   237,
    -272,    56,  -272,   -11,   -29,  -272,  -272,  -272,  -272,     5,
    -272,  -101,    63,  -272,  -272,  -272,  -272,  -162,  -272,  -272,
    -272,  -272,  -124,  -138,  -272,  -272,  -271
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    89,    17,    18,    19,   158,   149,    20,    44,
     114,    21,    46,    22,   256,    23,    24,    25,    26,    38,
      27,    75,   106,    28,    29,   107,    30,   108,    31,   109,
      32,   204,   159,   160,    33,    34,   257
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,   164,   215,    58,    36,    69,   135,   136,   295,    40,
      48,     8,   118,    66,    67,    70,    16,    62,   123,   138,
     139,   126,    96,    35,    68,    69,   119,   148,   266,    63,
      64,   307,   156,   205,    37,    70,   137,   161,    60,    61,
      41,    80,   140,    71,    72,    73,    74,    85,   124,   115,
      49,   127,    92,    93,   259,    39,    59,    51,   143,    62,
      98,    99,    16,    71,    72,    73,    74,    52,   251,    43,
     254,   184,   185,   186,   165,    92,    93,    53,   255,    60,
      61,     7,    94,   100,   148,    79,   101,    95,    90,    42,
     102,   147,   202,   260,   110,   135,   136,   113,   103,   104,
     157,    60,    61,   116,   117,    94,    81,    82,    45,   172,
      95,    60,    61,   164,   175,   219,   220,    47,   176,   177,
     132,   196,   197,   198,   199,   137,   201,    60,    61,   146,
      50,   181,    83,   182,   183,    54,    84,   144,   218,   188,
      55,   190,   250,   145,   253,   135,   136,    45,   147,   290,
     291,   174,   292,   293,   200,   135,   136,   203,   212,   213,
      65,   170,   171,   211,   242,    66,    67,    56,   -42,   179,
      76,   156,   162,    78,    77,   137,    68,   168,   169,   170,
     171,   133,    86,    87,    88,   137,    91,    97,   214,   238,
     120,   163,    71,    72,    73,    74,   111,   121,   263,   128,
      71,    72,    73,    74,   248,   249,   122,   252,   125,   134,
     129,   130,   225,   131,   141,   228,   229,   230,   231,   155,
     232,   233,   234,   235,   154,   166,   278,   150,   237,   151,
     239,   221,   222,   223,   224,   152,   264,   153,   167,   193,
     244,   173,   187,   178,   189,   271,   180,   191,   192,   195,
     210,   258,   207,   206,   208,   217,   209,   226,   227,   241,
     216,   282,   283,   236,   240,   243,   245,   247,   246,   261,
     288,   268,   269,   270,   262,   287,   280,   273,   265,   284,
     296,   274,   297,   276,   277,   279,   281,   142,   272,   294,
     105,   300,   275,   306,   299,   302,   267,   304,   312,   305,
       0,   309,   311,     0,   285,     0,   194,     0,   286,     0,
       1,   289,     2,     3,     4,     5,     6,     7,     0,     0,
     112,     9,   298,     0,     0,     0,     0,    10,   301,     0,
       0,    11,     0,     0,     0,    12,   303,    13,    14,     0,
      55,     0,     0,     0,   308,     1,   310,     2,     3,     4,
       5,     6,     7,     0,     0,     8,     9,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,     0,     0,     0,
      12,     0,    13,    14,     1,     0,     2,     3,     4,     5,
       6,     7,     0,     0,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,     0,    12,
       0,    13,    57
};

static const yytype_int16 yycheck[] =
{
       0,   102,   164,    16,     3,     6,     3,     4,   279,     4,
      10,    18,    33,     5,     6,    16,    16,    17,     3,    83,
      21,     3,    51,    33,    16,     6,    47,    91,    35,    29,
      30,   302,    29,   157,    33,    16,    33,   101,    35,    36,
      33,    41,    43,    44,    45,    46,    47,    42,    33,    62,
      10,    33,     3,     4,   216,    32,    16,    20,    87,    59,
       3,     4,    62,    44,    45,    46,    47,    30,   206,    33,
     208,   135,   136,   137,   103,     3,     4,    40,    29,    35,
      36,    15,    33,    26,   148,     9,    29,    38,    48,    20,
      33,    91,   156,   217,    54,     3,     4,    57,    41,    42,
     100,    35,    36,    63,    64,    33,     3,     4,    33,   109,
      38,    35,    36,   214,   114,     3,     4,    33,   118,   119,
      80,   150,   151,   152,   153,    33,   155,    35,    36,    89,
      29,   131,    29,   133,   134,    36,    33,    33,   167,   139,
      38,   141,   206,    39,   208,     3,     4,    33,   148,   273,
     274,    37,   276,   277,   154,     3,     4,   157,     3,     4,
      13,    46,    47,   163,   193,     5,     6,     0,    20,   129,
      32,    29,    24,    32,    35,    33,    16,    44,    45,    46,
      47,    21,    32,    20,    16,    33,    29,    33,    33,   189,
       3,    43,    44,    45,    46,    47,    30,     3,   227,    35,
      44,    45,    46,    47,   204,   205,    33,   207,    33,    21,
      36,    35,   172,    33,    21,   175,   176,   177,   178,    20,
     180,   181,   182,   183,    21,    20,   255,    31,   188,    31,
     190,   168,   169,   170,   171,    31,   236,    31,    20,    20,
     200,    33,    29,    36,    21,   245,    36,    21,    32,    29,
      20,   211,    27,    32,    32,    26,    29,    40,    20,    35,
      32,   261,   262,    21,    32,    29,    21,    27,    29,    21,
     270,    36,    21,    29,    33,    32,    21,    31,   238,    21,
     280,    31,    21,    31,    31,    31,    27,    86,   248,    29,
      53,    35,   252,    36,    32,    31,   240,   297,   309,   299,
      -1,    36,    36,    -1,   264,    -1,   148,    -1,   268,    -1,
       8,   271,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,   282,    -1,    -1,    -1,    -1,    25,   288,    -1,
      -1,    29,    -1,    -1,    -1,    33,   296,    35,    36,    -1,
      38,    -1,    -1,    -1,   304,     8,   306,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    10,    11,    12,    13,    14,    15,    18,    19,
      25,    29,    33,    35,    36,    49,    50,    51,    52,    53,
      56,    59,    61,    63,    64,    65,    66,    68,    71,    72,
      74,    76,    78,    82,    83,    33,     3,    33,    67,    32,
      67,    33,    20,    33,    57,    33,    60,    33,    50,    51,
      29,    20,    30,    40,    36,    38,     0,    36,    49,    51,
      35,    36,    50,    50,    50,    13,     5,     6,    16,     6,
      16,    44,    45,    46,    47,    69,    32,    35,    32,     9,
      50,     3,     4,    29,    33,    67,    32,    20,    16,    50,
      51,    29,     3,     4,    33,    38,    62,    33,     3,     4,
      26,    29,    33,    41,    42,    57,    70,    73,    75,    77,
      51,    30,    18,    51,    58,    49,    51,    51,    33,    47,
       3,     3,    33,     3,    33,    33,     3,    33,    35,    36,
      35,    33,    51,    21,    21,     3,     4,    33,    54,    21,
      43,    21,    56,    62,    33,    39,    51,    50,    54,    55,
      31,    31,    31,    31,    21,    20,    29,    50,    54,    80,
      81,    54,    24,    43,    69,    62,    20,    20,    44,    45,
      46,    47,    50,    33,    37,    50,    50,    50,    36,    51,
      36,    50,    50,    50,    54,    54,    54,    29,    50,    21,
      50,    21,    32,    20,    55,    29,    62,    62,    62,    62,
      50,    62,    54,    50,    79,    80,    32,    27,    32,    29,
      20,    50,     3,     4,    33,    75,    32,    26,    62,     3,
       4,    70,    70,    70,    70,    51,    40,    20,    51,    51,
      51,    51,    51,    51,    51,    51,    21,    51,    50,    51,
      32,    35,    62,    29,    51,    21,    29,    27,    50,    50,
      54,    81,    50,    54,    81,    29,    62,    84,    51,    75,
      80,    21,    33,    62,    50,    51,    35,    59,    36,    21,
      29,    50,    51,    31,    31,    51,    31,    31,    62,    31,
      21,    27,    50,    50,    21,    51,    51,    32,    50,    51,
      80,    80,    80,    80,    29,    84,    50,    21,    51,    32,
      35,    51,    31,    51,    50,    50,    36,    84,    51,    36,
      51,    36,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    52,    52,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      56,    56,    57,    58,    59,    59,    59,    60,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    64,    64,
      65,    65,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    73,    74,    74,    75,    75,    75,    75,    76,
      77,    78,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    82,    83,    84,    84,
      84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     6,     6,     6,     3,     2,     9,
       1,     2,     2,     1,     2,     1,     2,     1,     4,     5,
       3,     2,     1,     9,     7,     3,     0,     1,     7,     1,
       3,     3,     3,     3,     1,     1,     0,     8,     6,     8,
       8,    11,     6,     6,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     6,     8,     6,     7,     6,     6,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     1,     5,
       4,     7,    10,     7,     2,     2,     5,     3,     5,     3,
       5,     5,     3,     3,     0,     3,     6,     9,     5,     3,
       3,     1
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
        case 73:
#line 138 "bison.y" /* yacc.c:1646  */
    { printf("\nPRINTING << %f >>\n", (yyvsp[-3].f)); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 139 "bison.y" /* yacc.c:1646  */
    { printf("\nPRINTING << %s >>\n", (yyvsp[-4].s)); }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 142 "bison.y" /* yacc.c:1646  */
    { printf("\nPRINTING << %f >>\n", (yyvsp[-3].f)); }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 154 "bison.y" /* yacc.c:1646  */
    { (yyval.f) = (yyvsp[-2].f) + (yyvsp[0].f); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 155 "bison.y" /* yacc.c:1646  */
    { (yyval.f) = (yyvsp[-2].f) * (yyvsp[0].f); }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 156 "bison.y" /* yacc.c:1646  */
    { (yyval.f) = (yyvsp[-2].f) - (yyvsp[0].f); }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 157 "bison.y" /* yacc.c:1646  */
    { if ((yyvsp[0].f) == 0) { printf("\nCannot divide by zero\n"); exit(1);} else (yyval.f) = (yyvsp[-2].f) / (yyvsp[0].f); }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 170 "bison.y" /* yacc.c:1646  */
    { printf("\nVariable %s = %f\n", (yyvsp[-2].s),(yyvsp[0].f)); }
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1572 "y.tab.c" /* yacc.c:1646  */
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
#line 230 "bison.y" /* yacc.c:1906  */



int main(int argc, char *argv[]){
	
    yyin = fopen(argv[1], "r");

	if(yyin == NULL)
	{
		printf("Error with the file!\n");
		exit(EXIT_FAILURE);
	}

	yyparse();
	
	printf("\nParsing is successfully complete!\n");

    return 0;
		
	
}

void yyerror()
{
	printf("\nSyntax Error in Line: %d\n", yylineno);
	exit(0); // if error found exit the program
}
