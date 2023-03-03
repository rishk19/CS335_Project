#ifndef YY_parse_h_included
#define YY_parse_h_included
/*#define YY_USE_CLASS 
*/
#line 1 "/usr/share/bison++/bison.h"
/* before anything */
#ifdef c_plusplus
 #ifndef __cplusplus
  #define __cplusplus
 #endif
#endif


 #line 8 "/usr/share/bison++/bison.h"

#line 36 "src/parser.y"
typedef union{
    char data[100];
    struct node *exp;
} yy_parse_stype;
#define YY_parse_STYPE yy_parse_stype
#ifndef YY_USE_CLASS
#define YYSTYPE yy_parse_stype
#endif

#line 21 "/usr/share/bison++/bison.h"
 /* %{ and %header{ and %union, during decl */
#ifndef YY_parse_COMPATIBILITY
 #ifndef YY_USE_CLASS
  #define  YY_parse_COMPATIBILITY 1
 #else
  #define  YY_parse_COMPATIBILITY 0
 #endif
#endif

#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
 #ifdef YYLTYPE
  #ifndef YY_parse_LTYPE
   #define YY_parse_LTYPE YYLTYPE
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
/* use %define LTYPE */
  #endif
 #endif
/*#ifdef YYSTYPE*/
  #ifndef YY_parse_STYPE
   #define YY_parse_STYPE YYSTYPE
  /* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
   /* use %define STYPE */
  #endif
/*#endif*/
 #ifdef YYDEBUG
  #ifndef YY_parse_DEBUG
   #define  YY_parse_DEBUG YYDEBUG
   /* WARNING obsolete !!! user defined YYDEBUG not reported into generated header */
   /* use %define DEBUG */
  #endif
 #endif 
 /* use goto to be compatible */
 #ifndef YY_parse_USE_GOTO
  #define YY_parse_USE_GOTO 1
 #endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_parse_USE_GOTO
 #define YY_parse_USE_GOTO 0
#endif

#ifndef YY_parse_PURE

 #line 65 "/usr/share/bison++/bison.h"

#line 65 "/usr/share/bison++/bison.h"
/* YY_parse_PURE */
#endif


 #line 68 "/usr/share/bison++/bison.h"

#line 68 "/usr/share/bison++/bison.h"
/* prefix */

#ifndef YY_parse_DEBUG

 #line 71 "/usr/share/bison++/bison.h"
#define YY_parse_DEBUG 1

#line 71 "/usr/share/bison++/bison.h"
/* YY_parse_DEBUG */
#endif

#ifndef YY_parse_LSP_NEEDED

 #line 75 "/usr/share/bison++/bison.h"

#line 75 "/usr/share/bison++/bison.h"
 /* YY_parse_LSP_NEEDED*/
#endif

/* DEFAULT LTYPE*/
#ifdef YY_parse_LSP_NEEDED
 #ifndef YY_parse_LTYPE
  #ifndef BISON_YYLTYPE_ISDECLARED
   #define BISON_YYLTYPE_ISDECLARED
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;
  #endif

  #define YY_parse_LTYPE yyltype
 #endif
#endif

/* DEFAULT STYPE*/
#ifndef YY_parse_STYPE
 #define YY_parse_STYPE int
#endif

/* DEFAULT MISCELANEOUS */
#ifndef YY_parse_PARSE
 #define YY_parse_PARSE yyparse
#endif

#ifndef YY_parse_LEX
 #define YY_parse_LEX yylex
#endif

#ifndef YY_parse_LVAL
 #define YY_parse_LVAL yylval
#endif

#ifndef YY_parse_LLOC
 #define YY_parse_LLOC yylloc
#endif

#ifndef YY_parse_CHAR
 #define YY_parse_CHAR yychar
#endif

#ifndef YY_parse_NERRS
 #define YY_parse_NERRS yynerrs
#endif

#ifndef YY_parse_DEBUG_FLAG
 #define YY_parse_DEBUG_FLAG yydebug
#endif

#ifndef YY_parse_ERROR
 #define YY_parse_ERROR yyerror
#endif

#ifndef YY_parse_PARSE_PARAM
 #ifndef __STDC__
  #ifndef __cplusplus
   #ifndef YY_USE_CLASS
    #define YY_parse_PARSE_PARAM
    #ifndef YY_parse_PARSE_PARAM_DEF
     #define YY_parse_PARSE_PARAM_DEF
    #endif
   #endif
  #endif
 #endif
 #ifndef YY_parse_PARSE_PARAM
  #define YY_parse_PARSE_PARAM void
 #endif
#endif

/* TOKEN C */
#ifndef YY_USE_CLASS

 #ifndef YY_parse_PURE
  #ifndef yylval
   extern YY_parse_STYPE YY_parse_LVAL;
  #else
   #if yylval != YY_parse_LVAL
    extern YY_parse_STYPE YY_parse_LVAL;
   #else
    #warning "Namespace conflict, disabling some functionality (bison++ only)"
   #endif
  #endif
 #endif


 #line 169 "/usr/share/bison++/bison.h"
#define	Exports	258
#define	Opens	259
#define	Requires	260
#define	Uses	261
#define	Module	262
#define	Permits	263
#define	Sealed	264
#define	Var	265
#define	Non_sealed	266
#define	Provides	267
#define	To	268
#define	With	269
#define	Open	270
#define	Record	271
#define	Transitive	272
#define	Yield	273
#define	Abstract	274
#define	Continue	275
#define	For	276
#define	New	277
#define	Switch	278
#define	Assert	279
#define	Default	280
#define	If	281
#define	Package	282
#define	Synchronized	283
#define	Boolean	284
#define	Do	285
#define	Goto	286
#define	Private	287
#define	This	288
#define	Break	289
#define	Double	290
#define	Implements	291
#define	Protected	292
#define	THROW	293
#define	Byte	294
#define	Else	295
#define	Import	296
#define	Public	297
#define	THROWS	298
#define	Case	299
#define	Enum	300
#define	Instanceof	301
#define	Return	302
#define	Transient	303
#define	Catch	304
#define	Extends	305
#define	Int	306
#define	Short	307
#define	Try	308
#define	Char	309
#define	Final	310
#define	Interface	311
#define	Static	312
#define	Void	313
#define	Class	314
#define	FINALLY	315
#define	Long	316
#define	Strictfp	317
#define	Volatile	318
#define	Const	319
#define	Float	320
#define	Native	321
#define	Super	322
#define	While	323
#define	BooleanLiteral	324
#define	NullLiteral	325
#define	Identifier	326
#define	DecimalIntegerLiteral	327
#define	HexIntegerLiteral	328
#define	OctalIntegerLiteral	329
#define	FloatingPointIntegerLiteral	330
#define	FloatingPointLiteral	331
#define	BooleanIntegerLiteral	332
#define	CharacterLiteral	333
#define	TextBlock	334
#define	Operator	335
#define	Seperator	336
#define	StringLiteral	337
#define	Comma	338
#define	LeftCurlyBrace	339
#define	RightCurlyBrace	340
#define	Semicolon	341
#define	Dot	342
#define	LeftParanthesis	343
#define	RightParanthesis	344
#define	TripleDot	345
#define	LeftSquareBracket	346
#define	RightSquareBracket	347
#define	AtRate	348
#define	Scope	349
#define	EqualTo	350
#define	NotOperator	351
#define	Tilde	352
#define	QuestionMark	353
#define	Colon	354
#define	RightArrow	355
#define	EqualToEqualTo	356
#define	GreaterThanEqualTo	357
#define	LessThanEqualTo	358
#define	NotEqualTo	359
#define	AndOperator	360
#define	OrOperator	361
#define	PlusPlus	362
#define	MinusMinus	363
#define	Addition	364
#define	Substraction	365
#define	Product	366
#define	Divide	367
#define	BitwiseAnd	368
#define	BitwiseOr	369
#define	CircumFlex	370
#define	Modulo	371
#define	LeftShit	372
#define	RightShift	373
#define	TripleGreaterThan	374
#define	AdditionEqualTo	375
#define	SubstractionEqualTo	376
#define	ProductEqualTo	377
#define	DivideEqualTo	378
#define	BitWiseAndEqualTo	379
#define	BitWiseOrEqualTo	380
#define	CircumFlexEqualTo	381
#define	ModuloEqualTo	382
#define	LeftShitEqualTo	383
#define	RightShiftEqualTo	384
#define	TripleGreaterThanEqualTo	385
#define	GreaterThan	386
#define	LessThan	387
#define	__EMPTY__	388


#line 169 "/usr/share/bison++/bison.h"
 /* #defines token */
/* after #define tokens, before const tokens S5*/
#else
 #ifndef YY_parse_CLASS
  #define YY_parse_CLASS parse
 #endif

 #ifndef YY_parse_INHERIT
  #define YY_parse_INHERIT
 #endif

 #ifndef YY_parse_MEMBERS
  #define YY_parse_MEMBERS 
 #endif

 #ifndef YY_parse_LEX_BODY
  #define YY_parse_LEX_BODY  
 #endif

 #ifndef YY_parse_ERROR_BODY
  #define YY_parse_ERROR_BODY  
 #endif

 #ifndef YY_parse_CONSTRUCTOR_PARAM
  #define YY_parse_CONSTRUCTOR_PARAM
 #endif
 /* choose between enum and const */
 #ifndef YY_parse_USE_CONST_TOKEN
  #define YY_parse_USE_CONST_TOKEN 0
  /* yes enum is more compatible with flex,  */
  /* so by default we use it */ 
 #endif
 #if YY_parse_USE_CONST_TOKEN != 0
  #ifndef YY_parse_ENUM_TOKEN
   #define YY_parse_ENUM_TOKEN yy_parse_enum_token
  #endif
 #endif

class YY_parse_CLASS YY_parse_INHERIT
{
public: 
 #if YY_parse_USE_CONST_TOKEN != 0
  /* static const int token ... */
  
 #line 212 "/usr/share/bison++/bison.h"
static const int Exports;
static const int Opens;
static const int Requires;
static const int Uses;
static const int Module;
static const int Permits;
static const int Sealed;
static const int Var;
static const int Non_sealed;
static const int Provides;
static const int To;
static const int With;
static const int Open;
static const int Record;
static const int Transitive;
static const int Yield;
static const int Abstract;
static const int Continue;
static const int For;
static const int New;
static const int Switch;
static const int Assert;
static const int Default;
static const int If;
static const int Package;
static const int Synchronized;
static const int Boolean;
static const int Do;
static const int Goto;
static const int Private;
static const int This;
static const int Break;
static const int Double;
static const int Implements;
static const int Protected;
static const int THROW;
static const int Byte;
static const int Else;
static const int Import;
static const int Public;
static const int THROWS;
static const int Case;
static const int Enum;
static const int Instanceof;
static const int Return;
static const int Transient;
static const int Catch;
static const int Extends;
static const int Int;
static const int Short;
static const int Try;
static const int Char;
static const int Final;
static const int Interface;
static const int Static;
static const int Void;
static const int Class;
static const int FINALLY;
static const int Long;
static const int Strictfp;
static const int Volatile;
static const int Const;
static const int Float;
static const int Native;
static const int Super;
static const int While;
static const int BooleanLiteral;
static const int NullLiteral;
static const int Identifier;
static const int DecimalIntegerLiteral;
static const int HexIntegerLiteral;
static const int OctalIntegerLiteral;
static const int FloatingPointIntegerLiteral;
static const int FloatingPointLiteral;
static const int BooleanIntegerLiteral;
static const int CharacterLiteral;
static const int TextBlock;
static const int Operator;
static const int Seperator;
static const int StringLiteral;
static const int Comma;
static const int LeftCurlyBrace;
static const int RightCurlyBrace;
static const int Semicolon;
static const int Dot;
static const int LeftParanthesis;
static const int RightParanthesis;
static const int TripleDot;
static const int LeftSquareBracket;
static const int RightSquareBracket;
static const int AtRate;
static const int Scope;
static const int EqualTo;
static const int NotOperator;
static const int Tilde;
static const int QuestionMark;
static const int Colon;
static const int RightArrow;
static const int EqualToEqualTo;
static const int GreaterThanEqualTo;
static const int LessThanEqualTo;
static const int NotEqualTo;
static const int AndOperator;
static const int OrOperator;
static const int PlusPlus;
static const int MinusMinus;
static const int Addition;
static const int Substraction;
static const int Product;
static const int Divide;
static const int BitwiseAnd;
static const int BitwiseOr;
static const int CircumFlex;
static const int Modulo;
static const int LeftShit;
static const int RightShift;
static const int TripleGreaterThan;
static const int AdditionEqualTo;
static const int SubstractionEqualTo;
static const int ProductEqualTo;
static const int DivideEqualTo;
static const int BitWiseAndEqualTo;
static const int BitWiseOrEqualTo;
static const int CircumFlexEqualTo;
static const int ModuloEqualTo;
static const int LeftShitEqualTo;
static const int RightShiftEqualTo;
static const int TripleGreaterThanEqualTo;
static const int GreaterThan;
static const int LessThan;
static const int __EMPTY__;


#line 212 "/usr/share/bison++/bison.h"
 /* decl const */
 #else
  enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0
  
 #line 215 "/usr/share/bison++/bison.h"
	,Exports=258
	,Opens=259
	,Requires=260
	,Uses=261
	,Module=262
	,Permits=263
	,Sealed=264
	,Var=265
	,Non_sealed=266
	,Provides=267
	,To=268
	,With=269
	,Open=270
	,Record=271
	,Transitive=272
	,Yield=273
	,Abstract=274
	,Continue=275
	,For=276
	,New=277
	,Switch=278
	,Assert=279
	,Default=280
	,If=281
	,Package=282
	,Synchronized=283
	,Boolean=284
	,Do=285
	,Goto=286
	,Private=287
	,This=288
	,Break=289
	,Double=290
	,Implements=291
	,Protected=292
	,THROW=293
	,Byte=294
	,Else=295
	,Import=296
	,Public=297
	,THROWS=298
	,Case=299
	,Enum=300
	,Instanceof=301
	,Return=302
	,Transient=303
	,Catch=304
	,Extends=305
	,Int=306
	,Short=307
	,Try=308
	,Char=309
	,Final=310
	,Interface=311
	,Static=312
	,Void=313
	,Class=314
	,FINALLY=315
	,Long=316
	,Strictfp=317
	,Volatile=318
	,Const=319
	,Float=320
	,Native=321
	,Super=322
	,While=323
	,BooleanLiteral=324
	,NullLiteral=325
	,Identifier=326
	,DecimalIntegerLiteral=327
	,HexIntegerLiteral=328
	,OctalIntegerLiteral=329
	,FloatingPointIntegerLiteral=330
	,FloatingPointLiteral=331
	,BooleanIntegerLiteral=332
	,CharacterLiteral=333
	,TextBlock=334
	,Operator=335
	,Seperator=336
	,StringLiteral=337
	,Comma=338
	,LeftCurlyBrace=339
	,RightCurlyBrace=340
	,Semicolon=341
	,Dot=342
	,LeftParanthesis=343
	,RightParanthesis=344
	,TripleDot=345
	,LeftSquareBracket=346
	,RightSquareBracket=347
	,AtRate=348
	,Scope=349
	,EqualTo=350
	,NotOperator=351
	,Tilde=352
	,QuestionMark=353
	,Colon=354
	,RightArrow=355
	,EqualToEqualTo=356
	,GreaterThanEqualTo=357
	,LessThanEqualTo=358
	,NotEqualTo=359
	,AndOperator=360
	,OrOperator=361
	,PlusPlus=362
	,MinusMinus=363
	,Addition=364
	,Substraction=365
	,Product=366
	,Divide=367
	,BitwiseAnd=368
	,BitwiseOr=369
	,CircumFlex=370
	,Modulo=371
	,LeftShit=372
	,RightShift=373
	,TripleGreaterThan=374
	,AdditionEqualTo=375
	,SubstractionEqualTo=376
	,ProductEqualTo=377
	,DivideEqualTo=378
	,BitWiseAndEqualTo=379
	,BitWiseOrEqualTo=380
	,CircumFlexEqualTo=381
	,ModuloEqualTo=382
	,LeftShitEqualTo=383
	,RightShiftEqualTo=384
	,TripleGreaterThanEqualTo=385
	,GreaterThan=386
	,LessThan=387
	,__EMPTY__=388


#line 215 "/usr/share/bison++/bison.h"
 /* enum token */
     }; /* end of enum declaration */
 #endif
public:
 int YY_parse_PARSE(YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
 #ifdef YY_parse_PURE
  #ifdef YY_parse_LSP_NEEDED
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
  #else
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
  #endif
 #else
  virtual int YY_parse_LEX() YY_parse_LEX_BODY;
  YY_parse_STYPE YY_parse_LVAL;
  #ifdef YY_parse_LSP_NEEDED
   YY_parse_LTYPE YY_parse_LLOC;
  #endif
  int YY_parse_NERRS;
  int YY_parse_CHAR;
 #endif
 #if YY_parse_DEBUG != 0
  public:
   int YY_parse_DEBUG_FLAG;	/*  nonzero means print parse trace	*/
 #endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#endif


#if YY_parse_COMPATIBILITY != 0
 /* backward compatibility */
 /* Removed due to bison problems
 /#ifndef YYSTYPE
 / #define YYSTYPE YY_parse_STYPE
 /#endif*/

 #ifndef YYLTYPE
  #define YYLTYPE YY_parse_LTYPE
 #endif
 #ifndef YYDEBUG
  #ifdef YY_parse_DEBUG 
   #define YYDEBUG YY_parse_DEBUG
  #endif
 #endif

#endif
/* END */

 #line 267 "/usr/share/bison++/bison.h"
#endif
