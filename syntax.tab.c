
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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntax.y"

 int nb_ligne=1, col=1;	
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"ts.h" 
#include "QUAD.h"
#include "QUAD.c"
#include "cod_obg.c"
#include "cod_obg.h"
#include "optimisation.h"
#include "optimisation.c"
int valuetype = 0;
int i=0 ;
int j;
int sauvtype , fin_pos ,sauv_debut_do ,sauv_deb_for; 
int a=0;
int k=1;
int else_pos;
int compatibilite = 0;
 int nTemp=1;
 char tempC[12]="";
char val[12]="";
char  * sauv_idf;
char * id;
typedef struct // structeur pour s'auvgarder les bliotheques importer
     {
        char*  nom_idf  ;
        
     }tab_idf;
 tab_idf  tab[20];

void insert_liste_idf(int code_type  , int distinct_vac_const){
    if(distinct_vac_const == 0)
    {
        
      while(sauv_var != NULL)
        {  
           id= depiler(&sauv_var);
           inserer(strdup(id), code_type , 0 , 0);
           
        }
    }
    else {
      

       while(sauv_var != NULL)
        {  
           id= depiler(&sauv_var);
           inserer(strdup(id), code_type , 0 , 1);
           
        }



    }
    
}






/* Line 189 of yacc.c  */
#line 138 "syntax.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     idf = 258,
     mc_docprg = 259,
     mc_sub = 260,
     mc_variable = 261,
     mc_body = 262,
     mc_as = 263,
     mc_array = 264,
     mc_int = 265,
     mc_flt = 266,
     mc_chr = 267,
     mc_str = 268,
     cro_o = 269,
     cro_f = 270,
     mc_slash = 271,
     mc_bol = 272,
     mc_BOL_LITERAL = 273,
     mc_const = 274,
     egal = 275,
     mc_slashfin = 276,
     entier = 277,
     reel = 278,
     tchar = 279,
     chaine = 280,
     sep_var = 281,
     mc_if = 282,
     mc_then = 283,
     mc_else = 284,
     vrgl = 285,
     mc_aff = 286,
     aco_o = 287,
     aco_f = 288,
     mc_true = 289,
     mc_false = 290,
     fois = 291,
     plus = 292,
     moins = 293,
     par_f = 294,
     par_o = 295,
     mc_and = 296,
     mc_or = 297,
     mc_not = 298,
     mc_sup = 299,
     mc_inf = 300,
     mc_supe = 301,
     mc_infe = 302,
     mc_egale = 303,
     mc_dif = 304,
     mc_input = 305,
     mc_output = 306,
     mc_for = 307,
     mc_do = 308,
     mc_until = 309,
     mc_while = 310,
     mc_ega = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 65 "syntax.y"
char* str;
        int  integer;
       float f;
        
        struct {int type;
                char* res;
                float  val;
                }NT;
       
  


/* Line 214 of yacc.c  */
#line 243 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 255 "syntax.tab.c"

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
#define YYLAST   335

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNRULES -- Number of states.  */
#define YYNSTATES  281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    14,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    14,    17,    20,    23,    25,    27,
      29,    40,    43,    46,    48,    50,    56,    58,    60,    62,
      64,    70,    72,    74,    76,    78,    80,    91,    98,   104,
     106,   108,   110,   112,   114,   125,   132,   138,   142,   144,
     146,   148,   150,   152,   154,   163,   168,   171,   173,   176,
     178,   181,   183,   186,   188,   191,   193,   196,   198,   212,
     218,   228,   234,   241,   243,   248,   254,   260,   264,   271,
     280,   282,   284,   296,   300,   308,   316,   324,   326,   331,
     333,   337,   341,   345,   349,   351,   356,   358,   360,   362,
     364,   368,   375,   382,   389,   396,   403,   410,   417,   424
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    62,    76,    77,    -1,    15,    14,
       4,     3,    16,    -1,    62,    72,    -1,    62,    63,    -1,
      62,    69,    -1,    72,    -1,    63,    -1,    69,    -1,    15,
       5,    20,    16,    64,    15,    17,     5,    20,    16,    -1,
      64,    65,    -1,    64,    67,    -1,    65,    -1,    67,    -1,
      15,     3,    21,    66,    22,    -1,    23,    -1,    24,    -1,
      26,    -1,    25,    -1,    15,    74,     8,    68,    22,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,    18,    -1,
      15,     9,     8,    71,    16,    70,    15,    17,     9,    16,
      -1,    70,    15,     3,    27,    23,    22,    -1,    15,     3,
      27,    23,    22,    -1,    10,    -1,    11,    -1,    12,    -1,
      13,    -1,    18,    -1,    15,     5,     6,    16,    73,    15,
      17,     5,     6,    16,    -1,    73,    15,    74,     8,    75,
      22,    -1,    15,    74,     8,    75,    22,    -1,     3,    28,
      74,    -1,     3,    -1,    10,    -1,    11,    -1,    12,    -1,
      13,    -1,    18,    -1,    15,     7,    16,    78,    15,    17,
       7,    16,    -1,    15,    17,     4,    16,    -1,    78,    79,
      -1,    79,    -1,    78,    84,    -1,    84,    -1,    78,    82,
      -1,    82,    -1,    78,    86,    -1,    86,    -1,    78,    89,
      -1,    89,    -1,    78,    91,    -1,    91,    -1,    80,    15,
      31,    16,    78,    15,    17,    31,    16,    15,    17,    29,
      16,    -1,    80,    15,    17,    29,    16,    -1,    81,    15,
      30,    16,    78,    15,    17,    30,    16,    -1,    15,    29,
      27,    95,    16,    -1,    15,    52,    27,    83,    26,    22,
      -1,     3,    -1,     3,    15,    23,    16,    -1,    15,    53,
      27,    85,    22,    -1,    26,    39,     3,    39,    85,    -1,
      26,    39,     3,    -1,    87,    78,    15,    17,    54,    16,
      -1,    15,    54,     3,    21,    94,    56,    88,    16,    -1,
      23,    -1,     3,    -1,    90,    78,    15,    57,    27,    95,
      22,    15,    17,    55,    16,    -1,    15,    55,    16,    -1,
      15,    33,    27,    92,    32,    94,    22,    -1,    15,    33,
      27,    92,    32,    26,    22,    -1,    15,    33,    27,    92,
      32,    25,    22,    -1,     3,    -1,     3,    34,    23,    35,
      -1,    94,    -1,    94,    39,    94,    -1,    94,    40,    94,
      -1,    94,    38,    94,    -1,    94,    17,    94,    -1,     3,
      -1,     3,    34,    23,    35,    -1,    23,    -1,    24,    -1,
      36,    -1,    37,    -1,    42,    94,    41,    -1,    46,    42,
      93,    32,    93,    41,    -1,    47,    42,    93,    32,    93,
      41,    -1,    48,    42,    93,    32,    93,    41,    -1,    49,
      42,    93,    32,    93,    41,    -1,    50,    42,    93,    32,
      93,    41,    -1,    51,    42,    93,    32,    93,    41,    -1,
      43,    42,    95,    32,    95,    41,    -1,    44,    42,    95,
      32,    95,    41,    -1,    93,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    99,   102,   103,   104,   105,   105,   105,
     107,   110,   110,   110,   110,   113,   116,   116,   116,   116,
     119,   122,   122,   123,   123,   123,   127,   130,   131,   135,
     135,   135,   135,   136,   139,   142,   142,   145,   146,   149,
     149,   150,   150,   150,   155,   157,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   169,   171,
     174,   179,   186,   188,   189,   192,   195,   196,   201,   206,
     210,   211,   216,   221,   228,   234,   235,   239,   240,   243,
     246,   248,   250,   252,   257,   264,   273,   279,   288,   296,
     304,   309,   312,   315,   317,   319,   321,   323,   325,   327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "idf", "mc_docprg", "mc_sub",
  "mc_variable", "mc_body", "mc_as", "mc_array", "mc_int", "mc_flt",
  "mc_chr", "mc_str", "'!'", "cro_o", "cro_f", "mc_slash", "mc_bol",
  "mc_BOL_LITERAL", "mc_const", "egal", "mc_slashfin", "entier", "reel",
  "tchar", "chaine", "':'", "sep_var", "mc_if", "mc_then", "mc_else",
  "vrgl", "mc_aff", "aco_o", "aco_f", "mc_true", "mc_false", "fois",
  "plus", "moins", "par_f", "par_o", "mc_and", "mc_or", "mc_not", "mc_sup",
  "mc_inf", "mc_supe", "mc_infe", "mc_egale", "mc_dif", "mc_input",
  "mc_output", "mc_for", "mc_do", "mc_until", "mc_while", "mc_ega",
  "$accept", "S", "debut_prog", "declaration", "const", "les_constants",
  "dec_const1", "valeur", "dec_const2", "type_const", "array", "dec_array",
  "type_array", "var", "les_variables", "list_idf", "type_var", "body",
  "fin_prog", "instruction", "inst_if", "A", "B", "entree", "id", "sortie",
  "display", "for", "debut_for", "bornesup", "do", "debut_do",
  "affectation", "partie_gauche", "expr_ar", "expr", "condition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    33,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,    58,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    62,    62,    62,    62,    62,    62,
      63,    64,    64,    64,    64,    65,    66,    66,    66,    66,
      67,    68,    68,    68,    68,    68,    69,    70,    70,    71,
      71,    71,    71,    71,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    76,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    81,    82,    83,    83,    84,    85,    85,    86,    87,
      88,    88,    89,    90,    91,    91,    91,    92,    92,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     2,     2,     2,     1,     1,     1,
      10,     2,     2,     1,     1,     5,     1,     1,     1,     1,
       5,     1,     1,     1,     1,     1,    10,     6,     5,     1,
       1,     1,     1,     1,    10,     6,     5,     3,     1,     1,
       1,     1,     1,     1,     8,     4,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,    13,     5,
       9,     5,     6,     1,     4,     5,     5,     3,     6,     8,
       1,     1,    11,     3,     7,     7,     7,     1,     4,     1,
       3,     3,     3,     3,     1,     4,     1,     1,     1,     1,
       3,     6,     6,     6,     6,     6,     6,     6,     6,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     8,     9,
       7,     0,     0,     0,     0,     5,     6,     4,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     0,     0,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    13,    14,     0,     0,     0,    47,     0,     0,    51,
      49,    53,     0,    55,     0,    57,     0,    38,     0,     0,
      38,     0,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    50,    48,    52,    54,    56,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,    37,    39,    40,    41,
      42,    43,     0,     0,     0,    16,    17,    19,    18,     0,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
      84,    86,    87,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,    79,     0,    77,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    15,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,     0,     0,     0,     0,    65,
       0,    44,    59,     0,     0,     0,     0,    34,    35,    10,
      28,     0,    26,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    82,    80,    81,     0,     0,     0,
       0,     0,    62,    67,     0,     0,     0,    68,     0,    27,
      85,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      76,    75,    74,    64,     0,    71,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      69,     0,     0,     0,    97,    98,    91,    92,    93,    94,
      95,    96,     0,    60,     0,     0,     0,     0,    72,     0,
      58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    40,    41,   119,    42,   125,
       9,    66,    34,    10,    38,    61,   112,    18,    25,    45,
      46,    47,    48,    49,   150,    50,   152,    51,    52,   247,
      53,    54,    55,   148,   144,   145,   146
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -163
static const yytype_int16 yypact[] =
{
       8,    22,    52,    42,    18,  -163,    61,    45,  -163,  -163,
    -163,    62,     1,    59,   135,  -163,  -163,  -163,    67,    74,
      87,    94,    51,   101,    66,  -163,  -163,    72,   114,  -163,
    -163,  -163,  -163,  -163,   131,   115,   141,    83,   146,   170,
     160,  -163,  -163,   162,   159,   164,  -163,   165,   166,  -163,
    -163,  -163,   115,  -163,   115,  -163,   158,   156,   178,    14,
       7,   181,    15,  -163,  -163,   182,   175,   191,   192,   193,
     201,   188,   189,   110,  -163,  -163,  -163,  -163,  -163,  -163,
       2,   163,   195,   215,  -163,    83,   123,   224,   223,    70,
     214,   228,   207,    17,    65,   232,   233,   211,   217,  -163,
     234,   210,   226,   227,   143,    71,  -163,  -163,  -163,  -163,
    -163,  -163,   218,   238,   123,  -163,  -163,  -163,  -163,   225,
    -163,  -163,  -163,  -163,  -163,   229,   230,   222,   219,   239,
     220,  -163,  -163,  -163,  -163,    95,   213,   216,   221,   231,
     235,   236,   237,   240,  -163,   183,   241,   242,   243,   244,
     245,   246,   247,    95,   248,   249,   115,   115,   198,   253,
    -163,   250,   252,  -163,  -163,   251,   259,   260,   254,   261,
     129,    65,    65,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,  -163,   263,    55,   264,   266,   257,  -163,
      82,  -163,  -163,   274,   275,   256,    65,  -163,  -163,  -163,
    -163,   269,  -163,   258,  -163,   262,   265,   267,   268,   270,
     271,   272,   273,  -163,  -163,   -12,   -12,   276,   279,   284,
     177,   280,  -163,   277,    27,   149,   154,  -163,   285,  -163,
    -163,    65,    65,    95,    95,    95,    95,    95,    95,  -163,
    -163,  -163,  -163,  -163,   211,  -163,  -163,   282,   278,   283,
     293,   208,   212,   281,   286,   287,   288,   289,   290,  -163,
    -163,   294,   296,   297,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,   300,  -163,   206,   301,   303,   291,  -163,   305,
    -163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,  -163,   255,  -163,   292,  -163,   295,  -163,
     310,  -163,  -163,   316,  -163,    -8,   142,  -163,  -163,   -51,
     -45,  -163,  -163,   -43,  -163,   -41,    24,   -39,  -163,  -163,
     -37,  -163,   -35,  -163,  -162,  -126,  -147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      74,    82,    75,    83,    76,   179,    77,    20,    78,   170,
      79,   207,   208,   209,   210,   211,   212,    57,    60,   101,
     128,    21,    11,     1,   205,   206,   180,   190,    89,    58,
     245,    87,    91,   102,   129,    85,     4,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,   228,
     246,    88,     5,   213,   214,   215,   216,     6,   130,   220,
      14,    29,    30,    31,    32,    19,    12,    22,   130,    33,
      13,   253,   254,   255,   256,   257,   258,   106,   131,   132,
     218,   219,    24,    36,   251,   252,    57,    37,   131,   132,
      26,   133,   134,   115,   116,   117,   118,   135,   130,   179,
      67,   133,   134,    27,    68,   193,   194,   135,   136,   137,
      28,   138,   139,   140,   141,   142,   143,    35,   131,   132,
     180,   181,   182,    69,    70,    71,    72,   100,   159,    39,
      44,   133,   134,   107,   108,   109,   110,   135,   224,    67,
      12,   111,    23,    68,    13,    56,   179,    43,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
     158,    59,    69,    70,    71,    72,   248,   180,   181,   182,
     204,   249,    67,    60,    84,    62,    68,    65,    67,    73,
      80,    81,    68,    67,    85,    92,    86,    68,    67,    90,
      93,    98,    68,   103,   179,    69,    70,    71,    72,   242,
     179,    69,    70,    71,    72,    99,    69,    70,    71,    72,
     104,    69,    70,    71,    72,   180,   181,   182,    94,    95,
      96,   180,   181,   182,   120,   121,   122,   123,    97,   113,
     105,   114,   124,   126,   127,   147,   149,   151,   153,   155,
     160,   154,   156,   157,   161,   166,   167,   163,   168,   264,
     165,   164,   195,   265,   169,   171,   162,   183,   172,   186,
     223,   276,    15,   173,   191,   192,   197,   199,   259,   189,
     202,   187,   227,   174,   198,   185,   184,   175,   176,   177,
     196,   200,   178,   201,   203,   188,   217,   221,   222,   225,
     226,   229,     0,   230,   231,     0,   243,   232,   260,   233,
     234,   240,   235,   236,   237,   238,   241,   250,   263,   261,
     272,   239,   273,   262,   274,   275,   244,    16,   277,   278,
     279,   280,   266,    17,     0,     0,     0,   267,   268,   269,
     270,   271,    63,     0,     0,    64
};

static const yytype_int16 yycheck[] =
{
      45,    52,    45,    54,    45,    17,    45,     6,    45,   135,
      45,   173,   174,   175,   176,   177,   178,     3,     3,    17,
       3,    20,     4,    15,   171,   172,    38,   153,    21,    37,
       3,    17,    17,    31,    17,    28,    14,    82,    83,    82,
      83,    82,    83,    82,    83,    82,    83,    82,    83,   196,
      23,    59,     0,   179,   180,   181,   182,    15,     3,   185,
      15,    10,    11,    12,    13,     3,     5,     8,     3,    18,
       9,   233,   234,   235,   236,   237,   238,    85,    23,    24,
      25,    26,    15,    17,   231,   232,     3,    15,    23,    24,
      16,    36,    37,    23,    24,    25,    26,    42,     3,    17,
      29,    36,    37,    16,    33,   156,   157,    42,    43,    44,
      16,    46,    47,    48,    49,    50,    51,    16,    23,    24,
      38,    39,    40,    52,    53,    54,    55,    17,    57,    15,
      15,    36,    37,    10,    11,    12,    13,    42,    56,    29,
       5,    18,     7,    33,     9,     4,    17,    16,   193,   194,
     193,   194,   193,   194,   193,   194,   193,   194,   193,   194,
      17,    15,    52,    53,    54,    55,    17,    38,    39,    40,
      41,    17,    29,     3,    16,    15,    33,    15,    29,    15,
      15,    15,    33,    29,    28,     3,     8,    33,    29,     8,
      15,     3,    33,    30,    17,    52,    53,    54,    55,    22,
      17,    52,    53,    54,    55,    16,    52,    53,    54,    55,
      15,    52,    53,    54,    55,    38,    39,    40,    27,    27,
      27,    38,    39,    40,    10,    11,    12,    13,    27,     5,
      15,     8,    18,     5,    27,     3,     3,    26,    21,    29,
      22,     7,    16,    16,     6,    23,    27,    22,     9,    41,
      20,    22,    54,    41,    34,    42,   114,    16,    42,    15,
       3,    55,     7,    42,    16,    16,    16,    16,   244,    22,
      16,    26,    16,    42,    22,    32,    34,    42,    42,    42,
      27,    22,    42,    23,    23,    39,    23,    23,    22,    15,
      15,    22,    -1,    35,    32,    -1,    16,    32,    16,    32,
      32,    22,    32,    32,    32,    32,    22,    22,    15,    31,
      16,    35,    16,    30,    17,    15,    39,     7,    17,    16,
      29,    16,    41,     7,    -1,    -1,    -1,    41,    41,    41,
      41,    41,    40,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    60,    61,    14,     0,    15,    62,    63,    69,
      72,     4,     5,     9,    15,    63,    69,    72,    76,     3,
       6,    20,     8,     7,    15,    77,    16,    16,    16,    10,
      11,    12,    13,    18,    71,    16,    17,    15,    73,    15,
      64,    65,    67,    16,    15,    78,    79,    80,    81,    82,
      84,    86,    87,    89,    90,    91,     4,     3,    74,    15,
       3,    74,    15,    65,    67,    15,    70,    29,    33,    52,
      53,    54,    55,    15,    79,    82,    84,    86,    89,    91,
      15,    15,    78,    78,    16,    28,     8,    17,    74,    21,
       8,    17,     3,    15,    27,    27,    27,    27,     3,    16,
      17,    17,    31,    30,    15,    15,    74,    10,    11,    12,
      13,    18,    75,     5,     8,    23,    24,    25,    26,    66,
      10,    11,    12,    13,    18,    68,     5,    27,     3,    17,
       3,    23,    24,    36,    37,    42,    43,    44,    46,    47,
      48,    49,    50,    51,    93,    94,    95,     3,    92,     3,
      83,    26,    85,    21,     7,    29,    16,    16,    17,    57,
      22,     6,    75,    22,    22,    20,    23,    27,     9,    34,
      94,    42,    42,    42,    42,    42,    42,    42,    42,    17,
      38,    39,    40,    16,    34,    32,    15,    26,    39,    22,
      94,    16,    16,    78,    78,    54,    27,    16,    22,    16,
      22,    23,    16,    23,    41,    95,    95,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    23,    25,    26,
      94,    23,    22,     3,    56,    15,    15,    16,    95,    22,
      35,    32,    32,    32,    32,    32,    32,    32,    32,    35,
      22,    22,    22,    16,    39,     3,    23,    88,    17,    17,
      22,    95,    95,    93,    93,    93,    93,    93,    93,    85,
      16,    31,    30,    15,    41,    41,    41,    41,    41,    41,
      41,    41,    16,    16,    17,    15,    55,    17,    16,    29,
      16
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
#line 96 "syntax.y"
    {printf("prog syntaxiquement correct");YYACCEPT;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 113 "syntax.y"
    { doubleDeclaration(strdup((yyvsp[(2) - (5)].str))); inserer(strdup((yyvsp[(2) - (5)].str)),sauvtype,0,1);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 116 "syntax.y"
    {sauvtype = 1 ;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 116 "syntax.y"
    {sauvtype = 2 ;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 116 "syntax.y"
    {sauvtype = 4 ;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 116 "syntax.y"
    {sauvtype = 3 ;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 122 "syntax.y"
    { insert_liste_idf(1,1) ; i=0;  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 122 "syntax.y"
    { insert_liste_idf(2,1) ;i=0; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 123 "syntax.y"
    { insert_liste_idf(3,1) ; i=0; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 123 "syntax.y"
    {insert_liste_idf(4,1) ;i=0; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 123 "syntax.y"
    {insert_liste_idf(5,1) ;i=0;  ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 130 "syntax.y"
    { doubleDeclaration(strdup((yyvsp[(3) - (6)].str))); inserer(strdup((yyvsp[(3) - (6)].str)), sauvtype , (yyvsp[(5) - (6)].integer) ,0 ) ;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 131 "syntax.y"
    {doubleDeclaration(strdup((yyvsp[(2) - (5)].str)));  inserer(strdup((yyvsp[(2) - (5)].str)), sauvtype,(yyvsp[(4) - (5)].integer),0) ;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 135 "syntax.y"
    {  sauvtype = 1; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 135 "syntax.y"
    {  sauvtype = 2;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 135 "syntax.y"
    {   sauvtype = 3;;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 135 "syntax.y"
    {  sauvtype = 4; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 136 "syntax.y"
    {  sauvtype = 5; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 145 "syntax.y"
    { doubleDeclaration(strdup((yyvsp[(1) - (3)].str))); empiler_Str(&sauv_var,strdup((yyvsp[(1) - (3)].str)));  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 146 "syntax.y"
    {  doubleDeclaration(strdup((yyvsp[(1) - (1)].str))); empiler_Str(&sauv_var,strdup((yyvsp[(1) - (1)].str)));   ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 149 "syntax.y"
    { insert_liste_idf(1,0) ; i=0;   ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 149 "syntax.y"
    { insert_liste_idf(2,0) ; i=0; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 150 "syntax.y"
    { insert_liste_idf(3,0) ; i=0; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 150 "syntax.y"
    {insert_liste_idf(4,0) ; i=0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 150 "syntax.y"
    {insert_liste_idf(5,0) ; i=0;   ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 170 "syntax.y"
    { fin_pos = depiler_qc(&pile1); q[fin_pos].op1= ToSTR(indq); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 171 "syntax.y"
    {indq--; fin_pos = depiler_qc(&pile1);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 175 "syntax.y"
    {else_pos = depiler_qc(&pile1); q[else_pos].op1= ToSTR(indq+ 1); empiler_qc(&pile1, indq); quad("BR","","","");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 180 "syntax.y"
    { empiler_qc(&pile1, indq); quad ("BZ","",strdup((yyvsp[(4) - (5)].NT).res),""); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 186 "syntax.y"
    {signe_de_formatage((yyvsp[(4) - (6)].NT).res,(yyvsp[(5) - (6)].str));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 188 "syntax.y"
    { dec((yyvsp[(1) - (1)].str));  (yyval.NT).res=(yyvsp[(1) - (1)].str); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 189 "syntax.y"
    { (yyval.NT).res=(yyvsp[(1) - (4)].str); dec((yyvsp[(1) - (4)].str)); veriftailletab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 195 "syntax.y"
    { dec((yyvsp[(3) - (5)].str)); signe_de_formatage((yyvsp[(3) - (5)].str),(yyvsp[(1) - (5)].str));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 196 "syntax.y"
    { dec((yyvsp[(3) - (3)].str)); signe_de_formatage((yyvsp[(3) - (3)].str),(yyvsp[(1) - (3)].str));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 202 "syntax.y"
    {    sauv_idf = depiler(&sauv_var); quad("+",strdup(sauv_idf),"1",strdup(sauv_idf)); 
    sauv_deb_for = depiler_qc(&pileFOR); quad("BR",ToSTR(sauv_deb_for),"",""); q[sauv_deb_for].op1= ToSTR(indq); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 207 "syntax.y"
    { dec((yyvsp[(3) - (8)].str)); quad("=",(yyvsp[(5) - (8)].NT).res,"",(yyvsp[(3) - (8)].str)); empiler_qc(&pileFOR,indq); quad("BG","",(yyvsp[(3) - (8)].str),(yyvsp[(7) - (8)].NT).res); empiler_Str(&sauv_var, (yyvsp[(3) - (8)].str));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 210 "syntax.y"
    {(yyval.NT).res = ToSTR((yyvsp[(1) - (1)].integer));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 211 "syntax.y"
    { (yyval.NT).res = strdup((yyvsp[(1) - (1)].str)); dec((yyvsp[(1) - (1)].str));  if(returntype((yyvsp[(1) - (1)].str)) != 1) yyerror("type incompatible"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 217 "syntax.y"
    { sauv_debut_do= depiler_qc(&pile2); quad("BZ",ToSTR(sauv_debut_do),(yyvsp[(6) - (11)].NT).res,""); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 221 "syntax.y"
    { empiler_qc(&pile2,indq);  ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 229 "syntax.y"
    { if(a != compatibilite){yyerror("\n type incompatible!!!!!!!!! \n");
        } compatibilite=0;  quad (":=",(yyvsp[(6) - (7)].NT).res,"",sauv_idf);
             inser_val(sauv_idf,(yyvsp[(6) - (7)].NT).val);
             
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 234 "syntax.y"
    {  if(a != 4) yyerror("type incompatible"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 235 "syntax.y"
    {  if(a != 3) yyerror("type incompatible"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 239 "syntax.y"
    { dec ((yyvsp[(1) - (1)].str)); a = returntype((yyvsp[(1) - (1)].str));   sauv_idf=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 240 "syntax.y"
    { dec ((yyvsp[(1) - (4)].str)); a = returntype((yyvsp[(1) - (4)].str)); veriftailletab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer)); sauv_idf=strdup((yyvsp[(1) - (4)].str)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 243 "syntax.y"
    {(yyval.NT).res = (yyvsp[(1) - (1)].NT).res; compatibilite=0; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 247 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; quad ("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 249 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; quad ("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 251 "syntax.y"
    {   sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; quad ("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 253 "syntax.y"
    { sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; quad ("/",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
                  if ((yyvsp[(3) - (3)].NT).val==0){  printf( "  ---- division sur 0 -----",(yyvsp[(3) - (3)].NT).val);}
              ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 257 "syntax.y"
    { dec ((yyvsp[(1) - (1)].str));        if(compatibilite == 0) {compatibilite = returntype(strdup((yyvsp[(1) - (1)].str))) ;  } 
                                         else { 
                                                 if(compatibilite != returntype(strdup((yyvsp[(1) - (1)].str)))) { yyerror("type incompatible") ;}
                                              }  
                       (yyval.NT).res=strdup((yyvsp[(1) - (1)].str));      (yyval.NT).val=1;     
                       
                     ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 264 "syntax.y"
    { dec ((yyvsp[(1) - (4)].str));  if(compatibilite == 0) {compatibilite = returntype(strdup((yyvsp[(1) - (4)].str))) ;} 
                                         else { 
                                                 if(compatibilite != returntype(strdup((yyvsp[(1) - (4)].str)))) { yyerror("type incompatible") ;}
                                              }
                          

                        veriftailletab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer));      sprintf(val, "%s[%d]",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer)); (yyval.NT).res=strdup(val);  
             
             ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 273 "syntax.y"
    {    
                      if(compatibilite == 0) {compatibilite = 1; }
                         else  { if (compatibilite != 1 )
                                                   { yyerror("type incompatible") ;}
                                                        }     
                            sprintf(val, "%d",(yyvsp[(1) - (1)].integer)); (yyval.NT).res=strdup(val); (yyval.NT).val=(yyvsp[(1) - (1)].integer);  ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 279 "syntax.y"
    {  if(compatibilite == 0) {compatibilite = 2;} 
            
                        else  { if (compatibilite != 2 )
                                                   { yyerror("type incompatible") ;}
                                                        }
            
             sprintf(val, "%f",(yyvsp[(1) - (1)].f)); (yyval.NT).res=strdup(val);        (yyval.NT).val=(yyvsp[(1) - (1)].f);    
                         ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 288 "syntax.y"
    {  if(compatibilite == 0) {compatibilite = 5;} 
            
                        else  { if (compatibilite != 5 )
                                                   { yyerror("type incompatible") ;}
                                                        }
            
             (yyval.NT).res=strdup((yyvsp[(1) - (1)].str));         
                         ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 296 "syntax.y"
    {  if(compatibilite == 0) {compatibilite = 5;} 
            
                        else  { if (compatibilite != 5 )
                                                   { yyerror("type incompatible") ;}
                                                        }
            
             (yyval.NT).res=strdup((yyvsp[(1) - (1)].str));         
                         ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 304 "syntax.y"
    { (yyval.NT).res=(yyvsp[(2) - (3)].NT).res;   (yyval.NT).val=(yyvsp[(2) - (3)].NT).val;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 310 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadCompare (6,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 313 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadCompare (5,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 316 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadCompare (3,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 318 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadCompare (4,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 320 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadCompare (1,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 322 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadCompare (2,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 324 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadLogic (3,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 326 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.NT).res=strdup(tempC);tempC[0]='\0'; createQuadLogic (2,(yyvsp[(3) - (6)].NT).res,(yyvsp[(5) - (6)].NT).res,(yyval.NT).res);;}
    break;



/* Line 1455 of yacc.c  */
#line 2192 "syntax.tab.c"
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
#line 333 "syntax.y"
 
yyerror(char*msg)           
 {
 printf(" %s a la ligne %d et a la colonne %d \n",msg, nb_ligne, col);
  exit ;
 }
 
main()
{
 init();

yyparse();
printf("\n \n");

afficherQuad();

optimisation();

printf("----------------------------------------\n");
afficherQuad();


assembler();

printf("\n \n");
//  table des mots clés et séparateurs
//afficher();    
printf("\n \n");
// table  IDF 
printHachTable();



}
yywrap()
{}
 
