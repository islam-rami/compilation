
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 65 "syntax.y"
char* str;
        int  integer;
       float f;
        
        struct {int type;
                char* res;
                float  val;
                }NT;
       
  


/* Line 1676 of yacc.c  */
#line 121 "syntax.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


