/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    plus = 258,                    /* plus  */
    minus = 259,                   /* minus  */
    multiplication = 260,          /* multiplication  */
    division = 261,                /* division  */
    modulo = 262,                  /* modulo  */
    lessThan = 263,                /* lessThan  */
    lessThanOrEqual = 264,         /* lessThanOrEqual  */
    equal = 265,                   /* equal  */
    moreThan = 266,                /* moreThan  */
    moreThanOrEqual = 267,         /* moreThanOrEqual  */
    doubleEqual = 268,             /* doubleEqual  */
    notEqual = 269,                /* notEqual  */
    increment = 270,               /* increment  */
    decrement = 271,               /* decrement  */
    leftBracket = 272,             /* leftBracket  */
    rightBracket = 273,            /* rightBracket  */
    leftCurlyBracket = 274,        /* leftCurlyBracket  */
    rightCurlyBracket = 275,       /* rightCurlyBracket  */
    leftRoundBracket = 276,        /* leftRoundBracket  */
    rightRoundBracket = 277,       /* rightRoundBracket  */
    colon = 278,                   /* colon  */
    semicolon = 279,               /* semicolon  */
    comma = 280,                   /* comma  */
    apostrophe = 281,              /* apostrophe  */
    quote = 282,                   /* quote  */
    IF = 283,                      /* IF  */
    ELSE = 284,                    /* ELSE  */
    READ = 285,                    /* READ  */
    WRITE = 286,                   /* WRITE  */
    VAR = 287,                     /* VAR  */
    WHILE = 288,                   /* WHILE  */
    FOR = 289,                     /* FOR  */
    BREAK = 290,                   /* BREAK  */
    RETURN = 291,                  /* RETURN  */
    NOT = 292,                     /* NOT  */
    IN = 293,                      /* IN  */
    CONTINUE = 294,                /* CONTINUE  */
    ARRAY = 295,                   /* ARRAY  */
    TRUE = 296,                    /* TRUE  */
    FALSE = 297,                   /* FALSE  */
    AND = 298,                     /* AND  */
    OR = 299,                      /* OR  */
    IDENTIFIER = 300,              /* IDENTIFIER  */
    INT_CONST = 301,               /* INT_CONST  */
    STRING_CONST = 302,            /* STRING_CONST  */
    CHAR_CONST = 303,              /* CHAR_CONST  */
    POSITIVE_NUMBER = 304          /* POSITIVE_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define plus 258
#define minus 259
#define multiplication 260
#define division 261
#define modulo 262
#define lessThan 263
#define lessThanOrEqual 264
#define equal 265
#define moreThan 266
#define moreThanOrEqual 267
#define doubleEqual 268
#define notEqual 269
#define increment 270
#define decrement 271
#define leftBracket 272
#define rightBracket 273
#define leftCurlyBracket 274
#define rightCurlyBracket 275
#define leftRoundBracket 276
#define rightRoundBracket 277
#define colon 278
#define semicolon 279
#define comma 280
#define apostrophe 281
#define quote 282
#define IF 283
#define ELSE 284
#define READ 285
#define WRITE 286
#define VAR 287
#define WHILE 288
#define FOR 289
#define BREAK 290
#define RETURN 291
#define NOT 292
#define IN 293
#define CONTINUE 294
#define ARRAY 295
#define TRUE 296
#define FALSE 297
#define AND 298
#define OR 299
#define IDENTIFIER 300
#define INT_CONST 301
#define STRING_CONST 302
#define CHAR_CONST 303
#define POSITIVE_NUMBER 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
