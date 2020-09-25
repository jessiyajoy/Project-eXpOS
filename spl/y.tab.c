/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ALIAS = 258,
     DEFINE = 259,
     DO = 260,
     ELSE = 261,
     ENDIF = 262,
     ENDWHILE = 263,
     IF = 264,
     RETURN = 265,
     IRETURN = 266,
     LOAD = 267,
     STORE = 268,
     THEN = 269,
     WHILE = 270,
     HALT = 271,
     REG = 272,
     NUM = 273,
     ASSIGNOP = 274,
     ARITHOP1 = 275,
     ARITHOP2 = 276,
     RELOP = 277,
     LOGOP = 278,
     NOTOP = 279,
     ID = 280,
     BREAK = 281,
     CONTINUE = 282,
     CHKPT = 283,
     READ = 284,
     READI = 285,
     PRINT = 286,
     STRING = 287,
     INLINE = 288,
     BACKUP = 289,
     RESTORE = 290,
     LOADI = 291,
     GOTO = 292,
     CALL = 293,
     ENCRYPT = 294,
     PORT = 295,
     MULTIPUSH = 296,
     MULTIPOP = 297,
     UMIN = 298
   };
#endif
/* Tokens.  */
#define ALIAS 258
#define DEFINE 259
#define DO 260
#define ELSE 261
#define ENDIF 262
#define ENDWHILE 263
#define IF 264
#define RETURN 265
#define IRETURN 266
#define LOAD 267
#define STORE 268
#define THEN 269
#define WHILE 270
#define HALT 271
#define REG 272
#define NUM 273
#define ASSIGNOP 274
#define ARITHOP1 275
#define ARITHOP2 276
#define RELOP 277
#define LOGOP 278
#define NOTOP 279
#define ID 280
#define BREAK 281
#define CONTINUE 282
#define CHKPT 283
#define READ 284
#define READI 285
#define PRINT 286
#define STRING 287
#define INLINE 288
#define BACKUP 289
#define RESTORE 290
#define LOADI 291
#define GOTO 292
#define CALL 293
#define ENCRYPT 294
#define PORT 295
#define MULTIPUSH 296
#define MULTIPOP 297
#define UMIN 298




/* Copy the first part of user declarations.  */
#line 1 "splparser.y"

#include "data.h"
#include "spl.h"
#include "file.h"
#include "node.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "splparser.y"
{
    struct tree *n;
}
/* Line 193 of yacc.c.  */
#line 197 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 210 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    47,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    44,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    12,    17,    23,    26,
      28,    33,    38,    45,    54,    61,    66,    74,    82,    90,
      93,    96,    99,   102,   105,   109,   112,   115,   119,   123,
     126,   129,   133,   137,   141,   144,   150,   156,   160,   164,
     168,   172,   175,   178,   182,   186,   188,   190,   192,   194,
     196,   198,   202,   204,   206
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    56,    -1,    54,    -1,    54,    55,
      -1,    -1,     4,    25,    18,    44,    -1,     4,    25,    20,
      18,    44,    -1,    56,    57,    -1,    57,    -1,    58,    19,
      58,    44,    -1,    58,    19,    40,    44,    -1,    59,    58,
      14,    56,     7,    44,    -1,    59,    58,    14,    56,    60,
      56,     7,    44,    -1,    61,    58,     5,    56,     8,    44,
      -1,     3,    25,    17,    44,    -1,    12,    45,    58,    46,
      58,    47,    44,    -1,    13,    45,    58,    46,    58,    47,
      44,    -1,    36,    45,    58,    46,    58,    47,    44,    -1,
      10,    44,    -1,    11,    44,    -1,    26,    44,    -1,    27,
      44,    -1,    16,    44,    -1,    33,    32,    44,    -1,    28,
      44,    -1,    29,    44,    -1,    30,    63,    44,    -1,    31,
      58,    44,    -1,    34,    44,    -1,    35,    44,    -1,    39,
      63,    44,    -1,    37,    25,    44,    -1,    38,    25,    44,
      -1,    25,    48,    -1,    41,    45,    62,    47,    44,    -1,
      42,    45,    62,    47,    44,    -1,    58,    20,    58,    -1,
      58,    21,    58,    -1,    58,    22,    58,    -1,    58,    23,
      58,    -1,    20,    18,    -1,    24,    58,    -1,    49,    58,
      50,    -1,    45,    58,    47,    -1,    18,    -1,    63,    -1,
      32,    -1,     9,    -1,     6,    -1,    15,    -1,    17,    46,
      62,    -1,    17,    -1,    25,    -1,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    36,    41,    42,    45,    48,    56,    59,
      64,    76,    88,    93,    99,   105,   109,   112,   115,   118,
     121,   124,   132,   140,   143,   150,   153,   156,   164,   167,
     170,   173,   181,   188,   195,   199,   202,   207,   210,   213,
     216,   219,   224,   227,   230,   233,   236,   239,   244,   249,
     254,   261,   264,   269,   272
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALIAS", "DEFINE", "DO", "ELSE", "ENDIF",
  "ENDWHILE", "IF", "RETURN", "IRETURN", "LOAD", "STORE", "THEN", "WHILE",
  "HALT", "REG", "NUM", "ASSIGNOP", "ARITHOP1", "ARITHOP2", "RELOP",
  "LOGOP", "NOTOP", "ID", "BREAK", "CONTINUE", "CHKPT", "READ", "READI",
  "PRINT", "STRING", "INLINE", "BACKUP", "RESTORE", "LOADI", "GOTO",
  "CALL", "ENCRYPT", "PORT", "MULTIPUSH", "MULTIPOP", "UMIN", "';'", "'('",
  "','", "')'", "':'", "'['", "']'", "$accept", "body", "definelistpad",
  "definelist", "definestmt", "stmtlist", "stmt", "expr", "ifpad",
  "elsepad", "whilepad", "reglist", "ids", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    59,    40,    44,    41,    58,    91,
      93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    60,
      61,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     4,     5,     2,     1,
       4,     4,     6,     8,     6,     4,     7,     7,     7,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     3,     2,
       2,     3,     3,     3,     2,     5,     5,     3,     3,     3,
       3,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     3,     1,     0,    48,     0,     0,     0,
       0,    50,     0,    54,    45,     0,     0,    53,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     9,     0,     0,
       0,    46,     0,     4,     0,    19,    20,     0,     0,    23,
      41,    53,    42,    34,    21,    22,    25,    26,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    24,     0,    32,    33,    31,
      52,     0,     0,    44,    43,     0,     0,    37,    38,    39,
      40,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,    11,    10,     0,     0,     6,     0,     0,     0,
       0,    51,    35,    36,    49,     0,     0,     0,     7,     0,
       0,     0,    12,     0,    14,    16,    17,    18,     0,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     3,    43,    36,    37,    38,    39,   126,
      40,    91,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
     -67,    12,   217,    19,   -67,    -9,   -67,   -10,    -4,    -1,
       0,   -67,     3,   -67,   -67,    23,    -3,   -18,    30,    46,
      56,    69,   -12,    -3,   -67,    41,    70,    88,    32,   110,
     111,   -12,    94,    95,    -3,    -3,   217,   -67,   264,    -3,
      -3,   -67,   117,   -67,   132,   -67,   -67,    -3,    -3,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   131,   255,
     134,   -67,   -67,    -3,   137,   138,   146,   178,   178,    29,
      16,   -67,   -14,    -3,    -3,    -3,    -3,    61,   284,   -11,
     153,    65,   247,   -67,   -67,   -67,   251,   -67,   -67,   -67,
     108,   151,   152,   -67,   -67,   172,   259,   198,   -67,     7,
     136,   217,   217,   179,   204,   -67,    -3,    -3,    -3,   178,
     180,   187,   -67,   -67,    92,   135,   -67,   192,    33,    42,
      47,   -67,   -67,   -67,   -67,   194,   217,   195,   -67,   196,
     213,   216,   -67,   176,   -67,   -67,   -67,   -67,   219,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   -67,   -67,   -67,   -30,   -36,   -15,   -67,   -67,
     -67,   -66,    84
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      71,    52,    92,    13,    14,    13,    15,   103,    59,   104,
      16,    51,     4,    51,    13,    14,    44,    15,    24,    69,
      70,    16,    51,    42,    77,    78,    95,    73,    74,    24,
      53,    34,    81,    82,    45,    35,    73,    74,    75,    76,
      46,    50,    34,   121,    47,    48,    35,    49,    86,    73,
      74,    75,    76,    73,    74,    75,    76,    96,    97,    98,
      99,   100,    73,    74,    75,    76,    94,    73,    74,    75,
      76,   114,   115,    60,    54,   101,    93,    63,    71,    71,
     129,    73,    74,    75,    76,    73,    74,    75,    76,   130,
      55,   118,   119,   120,   131,     5,   133,    71,   124,   125,
      56,     6,     7,     8,     9,    10,    58,    11,    12,    13,
      14,   106,    15,    57,    61,    66,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    62,    32,    33,    64,    65,    34,     5,    67,
      68,    35,    79,   127,     6,     7,     8,     9,    10,    80,
      11,    12,    13,    14,   109,    15,    73,    74,    75,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    83,    32,    33,    85,     5,
      34,    87,    88,   138,    35,     6,     7,     8,     9,    10,
      89,    11,    12,    13,    14,    90,    15,   105,   110,   111,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   112,    32,    33,    74,
       5,    34,   117,   116,   122,    35,     6,     7,     8,     9,
      10,   123,    11,    12,    13,    14,   128,    15,   132,   134,
     135,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   136,    32,    33,
     137,     0,    34,   139,     0,     0,    35,    73,    74,    75,
      76,    73,    74,    75,    76,    73,    74,    75,    76,    73,
      74,    75,    76,    72,    73,    74,    75,    76,     0,   102,
       0,     0,     0,   107,     0,     0,     0,   108,     0,    84,
       0,     0,     0,   113,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
      36,    16,    68,    17,    18,    17,    20,    18,    23,    20,
      24,    25,     0,    25,    17,    18,    25,    20,    32,    34,
      35,    24,    25,     4,    39,    40,    40,    20,    21,    32,
      48,    45,    47,    48,    44,    49,    20,    21,    22,    23,
      44,    18,    45,   109,    45,    45,    49,    44,    63,    20,
      21,    22,    23,    20,    21,    22,    23,    72,    73,    74,
      75,    76,    20,    21,    22,    23,    50,    20,    21,    22,
      23,   101,   102,    32,    44,    14,    47,    45,   114,   115,
      47,    20,    21,    22,    23,    20,    21,    22,    23,    47,
      44,   106,   107,   108,    47,     3,   126,   133,     6,     7,
      44,     9,    10,    11,    12,    13,    22,    15,    16,    17,
      18,    46,    20,    44,    44,    31,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    44,    41,    42,    25,    25,    45,     3,    45,
      45,    49,    25,     8,     9,    10,    11,    12,    13,    17,
      15,    16,    17,    18,    46,    20,    20,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    44,    41,    42,    44,     3,
      45,    44,    44,     7,    49,     9,    10,    11,    12,    13,
      44,    15,    16,    17,    18,    17,    20,    44,    47,    47,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    44,    41,    42,    21,
       3,    45,    18,    44,    44,    49,     9,    10,    11,    12,
      13,    44,    15,    16,    17,    18,    44,    20,    44,    44,
      44,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    44,    41,    42,
      44,    -1,    45,    44,    -1,    -1,    49,    20,    21,    22,
      23,    20,    21,    22,    23,    20,    21,    22,    23,    20,
      21,    22,    23,    19,    20,    21,    22,    23,    -1,     5,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    46,    -1,    44,
      -1,    -1,    -1,    44,    20,    21,    22,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,    54,     0,     3,     9,    10,    11,    12,
      13,    15,    16,    17,    18,    20,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    41,    42,    45,    49,    56,    57,    58,    59,
      61,    63,     4,    55,    25,    44,    44,    45,    45,    44,
      18,    25,    58,    48,    44,    44,    44,    44,    63,    58,
      32,    44,    44,    45,    25,    25,    63,    45,    45,    58,
      58,    57,    19,    20,    21,    22,    23,    58,    58,    25,
      17,    58,    58,    44,    44,    44,    58,    44,    44,    44,
      17,    62,    62,    47,    50,    40,    58,    58,    58,    58,
      58,    14,     5,    18,    20,    44,    46,    46,    46,    46,
      47,    47,    44,    44,    56,    56,    44,    18,    58,    58,
      58,    62,    44,    44,     6,     7,    60,     8,    44,    47,
      47,    47,    44,    56,    44,    44,    44,    44,     7,    44
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 29 "splparser.y"
    {
                                    codegen((yyvsp[(2) - (2)].n));
                                    out_linecount++;
                                    fprintf(fp, "HALT");
                                }
    break;

  case 3:
#line 36 "splparser.y"
    {
                                    add_predefined_constants();
                                }
    break;

  case 6:
#line 45 "splparser.y"
    {
                                                    insert_constant((yyvsp[(2) - (4)].n)->name, (yyvsp[(3) - (4)].n)->value);
                                                }
    break;

  case 7:
#line 48 "splparser.y"
    {
                                                    if (node_getType((yyvsp[(3) - (5)].n)) == NODE_SUB)
                                                        insert_constant((yyvsp[(2) - (5)].n)->name, -1 * (yyvsp[(4) - (5)].n)->value);
                                                    else
                                                        insert_constant((yyvsp[(2) - (5)].n)->name, (yyvsp[(4) - (5)].n)->value);
                                                }
    break;

  case 8:
#line 56 "splparser.y"
    {
                                                    (yyval.n) = create_nontermNode(NODE_STMTLIST, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n));
                                                }
    break;

  case 9:
#line 59 "splparser.y"
    {
                                                    (yyval.n) = (yyvsp[(1) - (1)].n);
                                                }
    break;

  case 10:
#line 64 "splparser.y"
    {
                                                    if (node_getType((yyvsp[(1) - (4)].n)) == NODE_REG || node_getType((yyvsp[(1) - (4)].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[(2) - (4)].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[(2) - (4)].n), (yyvsp[(1) - (4)].n), (yyvsp[(3) - (4)].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n", linecount);
                                                        exit(0);
                                                    }
                                                }
    break;

  case 11:
#line 76 "splparser.y"
    {
                                                    if (node_getType((yyvsp[(1) - (4)].n)) == NODE_REG || node_getType((yyvsp[(1) - (4)].n)) == NODE_ADDR_EXPR)
                                                    {
                                                        (yyvsp[(2) - (4)].n)->value = 2;
                                                        (yyval.n) = create_tree((yyvsp[(2) - (4)].n), (yyvsp[(1) - (4)].n), (yyvsp[(3) - (4)].n), NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n",  linecount);
                                                        exit(0);
                                                    }
                                                }
    break;

  case 12:
#line 88 "splparser.y"
    {
                                                            (yyval.n) = create_tree((yyvsp[(1) - (6)].n), (yyvsp[(2) - (6)].n), (yyvsp[(4) - (6)].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                        }
    break;

  case 13:
#line 94 "splparser.y"
    {
                                                            (yyval.n) = create_tree((yyvsp[(1) - (8)].n), (yyvsp[(2) - (8)].n), (yyvsp[(4) - (8)].n), (yyvsp[(6) - (8)].n));
                                                            pop_alias();
                                                            depth--;
                                                        }
    break;

  case 14:
#line 99 "splparser.y"
    {
                                                            (yyval.n) = create_tree((yyvsp[(1) - (6)].n), (yyvsp[(2) - (6)].n), (yyvsp[(4) - (6)].n), NULL);
                                                            pop_alias();
                                                            depth--;
                                                            flag_break--;
                                                        }
    break;

  case 15:
#line 105 "splparser.y"
    {
                                                            push_alias((yyvsp[(2) - (4)].n)->name, (yyvsp[(3) - (4)].n)->value);
                                                            (yyval.n) = NULL;
                                                        }
    break;

  case 16:
#line 109 "splparser.y"
    {
                                                            (yyval.n) = create_tree((yyvsp[(1) - (7)].n), (yyvsp[(3) - (7)].n), (yyvsp[(5) - (7)].n), NULL);
                                                        }
    break;

  case 17:
#line 112 "splparser.y"
    {
                                                            (yyval.n) = create_tree((yyvsp[(1) - (7)].n), (yyvsp[(3) - (7)].n), (yyvsp[(5) - (7)].n), NULL);
                                                        }
    break;

  case 18:
#line 115 "splparser.y"
    {
                                                            (yyval.n) = create_tree((yyvsp[(1) - (7)].n), (yyvsp[(3) - (7)].n), (yyvsp[(5) - (7)].n), NULL);
                                                        }
    break;

  case 19:
#line 118 "splparser.y"
    {
                                                            (yyval.n) = (yyvsp[(1) - (2)].n);
                                                        }
    break;

  case 20:
#line 121 "splparser.y"
    {
                                                            (yyval.n) = (yyvsp[(1) - (2)].n);
                                                        }
    break;

  case 21:
#line 124 "splparser.y"
    {
                                                            if (flag_break == 0)
                                                            {
                                                                printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                                exit(0);
                                                            }
                                                            (yyval.n)=(yyvsp[(1) - (2)].n);
                                                        }
    break;

  case 22:
#line 132 "splparser.y"
    {
                                                if (flag_break==0)
                                                {
                                                    printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = (yyvsp[(1) - (2)].n);
                                            }
    break;

  case 23:
#line 140 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (2)].n);
                                            }
    break;

  case 24:
#line 143 "splparser.y"
    {
                                                int temp;
                                                (yyvsp[(2) - (3)].n)->name++;
                                                temp = strlen((yyvsp[(2) - (3)].n)->name);
                                                (yyvsp[(2) - (3)].n)->name[temp - 1] = '\0';
                                                (yyval.n) = create_tree((yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), NULL, NULL);
                                            }
    break;

  case 25:
#line 150 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (2)].n);
                                            }
    break;

  case 26:
#line 153 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (2)].n);
                                            }
    break;

  case 27:
#line 156 "splparser.y"
    {
                                                if (node_getType((yyvsp[(2) - (3)].n)) != NODE_REG || !isAllowedRegister((yyvsp[(2) - (3)].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in read!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), NULL, NULL);
                                            }
    break;

  case 28:
#line 164 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), NULL, NULL);
                                            }
    break;

  case 29:
#line 167 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(1) - (2)].n), NULL, NULL, NULL);
                                            }
    break;

  case 30:
#line 170 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(1) - (2)].n), NULL, NULL, NULL);
                                            }
    break;

  case 31:
#line 173 "splparser.y"
    {
                                                if (node_getType((yyvsp[(2) - (3)].n)) != NODE_REG || !isAllowedRegister((yyvsp[(2) - (3)].n)->value))
                                                {
                                                    printf("\n%d: Invalid operand in encrypt!!\n", linecount);
                                                    exit(0);
                                                }
                                                (yyval.n) = create_tree((yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), NULL, NULL);
                                            }
    break;

  case 32:
#line 181 "splparser.y"
    {
                                                if (lookup_constant(node_getName((yyvsp[(2) - (3)].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[(1) - (3)].n), substitute_id((yyvsp[(2) - (3)].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
    break;

  case 33:
#line 188 "splparser.y"
    {
                                                if(lookup_constant(node_getName((yyvsp[(2) - (3)].n))) != NULL) // if the address to jump to is a predefined value in constants file
                                                    (yyval.n) = create_tree((yyvsp[(1) - (3)].n), substitute_id((yyvsp[(2) - (3)].n)), NULL, NULL);
                                                else
                                                    (yyval.n) = create_tree((yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), NULL, NULL);
                                                (yyval.n)->value = linecount; // Hack to show line numbers in case of syntax errors
                                            }
    break;

  case 34:
#line 195 "splparser.y"
    {
                                                label_add(node_getName((yyvsp[(1) - (2)].n)));
                                                (yyval.n) = create_nontermNode(NODE_LABEL_DEF, (yyvsp[(1) - (2)].n), NULL);
                                            }
    break;

  case 35:
#line 199 "splparser.y"
    {
                                                    (yyval.n) = create_tree((yyvsp[(1) - (5)].n), (yyvsp[(3) - (5)].n), NULL, NULL);
                                                }
    break;

  case 36:
#line 202 "splparser.y"
    {
                                                    (yyval.n) = create_tree((yyvsp[(1) - (5)].n), (yyvsp[(3) - (5)].n), NULL, NULL);
                                                }
    break;

  case 37:
#line 207 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(2) - (3)].n), (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n), NULL);
                                            }
    break;

  case 38:
#line 210 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(2) - (3)].n), (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n), NULL);
                                            }
    break;

  case 39:
#line 213 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(2) - (3)].n), (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n), NULL);
                                            }
    break;

  case 40:
#line 216 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(2) - (3)].n), (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n), NULL);
                                            }
    break;

  case 41:
#line 219 "splparser.y"
    {
                                                if (node_getType((yyvsp[(1) - (2)].n)) == NODE_SUB)
                                                    (yyvsp[(2) - (2)].n)->value = (yyvsp[(2) - (2)].n)->value * -1;
                                                (yyval.n) = (yyvsp[(2) - (2)].n);
                                            }
    break;

  case 42:
#line 224 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n), NULL, NULL);
                                            }
    break;

  case 43:
#line 227 "splparser.y"
    {
                                                (yyval.n) = create_nontermNode(NODE_ADDR_EXPR, (yyvsp[(2) - (3)].n), NULL);
                                            }
    break;

  case 44:
#line 230 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(2) - (3)].n);
                                            }
    break;

  case 45:
#line 233 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (1)].n);
                                            }
    break;

  case 46:
#line 236 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (1)].n);
                                            }
    break;

  case 47:
#line 239 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (1)].n);
                                            }
    break;

  case 48:
#line 244 "splparser.y"
    {
                                                depth++;
                                                (yyval.n) = (yyvsp[(1) - (1)].n);
                                            }
    break;

  case 49:
#line 249 "splparser.y"
    {
                                                pop_alias();
                                            }
    break;

  case 50:
#line 254 "splparser.y"
    {
                                                depth++;
                                                flag_break++;
                                                (yyval.n) = (yyvsp[(1) - (1)].n);
                                            }
    break;

  case 51:
#line 261 "splparser.y"
    {
                                                (yyval.n) = create_tree((yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n), NULL, NULL);
                                            }
    break;

  case 52:
#line 264 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (1)].n);
                                            }
    break;

  case 53:
#line 269 "splparser.y"
    {
                                                (yyval.n) = substitute_id((yyvsp[(1) - (1)].n));
                                            }
    break;

  case 54:
#line 272 "splparser.y"
    {
                                                (yyval.n) = (yyvsp[(1) - (1)].n);
                                            }
    break;


/* Line 1267 of yacc.c.  */
#line 1972 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 276 "splparser.y"


int yyerror (char *msg)
{
    return fprintf (stderr, "%d: %s\n", linecount, msg);
}
