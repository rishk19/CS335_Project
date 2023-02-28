%{
    #include<stdio.h>
    #include"string.h"
    #include "parser.tab.h"
%}

%%
true|false {sscanf(yytext,"%s", yylval.data);
            return (BooleanLiteral);
            }
null {sscanf(yytext,"%s", yylval.data);
            return (NullLiteral);}
exports {return(Exports);}
opens {return(Opens);}
requires {return(Requires);} 
uses {return(Uses);}
module {return(Module);}
permits {return(Permits);}
sealed {return(Sealed);}
var {return(Var);}
non-sealed {return(Non_sealed);}
provides {return(Provides);}
to {return(To);}
with {return(With);}
open {return(Open);}
record {return(Record);}
transitive {return(Transitive);}
yield {return(Yield);}
abstract {return(Abstract);}
continue {return(Continue);}
for {return(For);}
new {return(New);}
switch {return(Switch);}
assert {return(Assert);}
default {return(Default);}
if {return(If);}
package {return(Package);}
synchronized {return(Synchronized);}
boolean {return(Boolean);}
do {return(Do);}
goto {return(Goto);}
private {return(Private);}
this {return(This);}
break {return(Break);}
double {return(Double);}
implements {return(Implements);}
protected {return(Protected);}
throw {return(Throw);}
byte {return(Byte);}
else {return(Else);}
import {return(Import);}
public {return(Public);}
throws {return(Throws);}
case {return(Case);}
enum {return(Enum);}
instanceof {return(Instanceof);}
return {return(Return);}
transient {return(Transient);}
catch {return(Catch);}
extends {return(Extends);}
int {return(Int);}
short {return(Short);}
try {return(Try);}
char {return(Char);}
final {return(Final);}
interface {return(Interface);}
static {return(Static);}
void {return(Void);}
class {return(Class);}
finally {return(Finally);}
long {return(Long);}
strictfp {return(Strictfp);}
volatile {return(Volatile);}
const {return(Const);}
float {return(Float);}
native {return(Native);}
super {return(Super);}
while {return(While);}


[a-zA-Z_][a-zA-Z0-9_]* {sscanf(yytext,"%s", yylval.data);
            return (Identifier);}
"//"+.* {}
"/*"+([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*(\*)*+"*/" {}
[-+]?[0-9_]*\.?[0-9_]+ {sscanf(yytext,"%s", yylval.data);
            return (DecimalIntegerLiteral);}
[-+]?(0x|0X)[0-9a-fA-F_]*\.?[0-9a-fA-F_]+ {sscanf(yytext,"%s", yylval.data);
            return (HexIntegerLiteral);}
[-+]?0[0-7_]*\.?[0-7_]+([eE][-+]?[0-7_]+)? {sscanf(yytext,"%s", yylval.data);
            return (OctalIntegerLiteral);}
[-+]?[0-9_]*\.?[0-9_]+([eE][-+]?[0-9_]+)?(f?|F?|d?|D?) {sscanf(yytext,"%s", yylval.data);
            return (FloatingPointIntegerLiteral);}
[-+]?(0x|0X)[0-9a-fA-F_]*\.?[0-9a-fA-F_]+([eE|pP][-+]?[0-9a-fA-F_]+)?(f?|F?|d?|D?) {sscanf(yytext,"%s", yylval.data);
            return (FloatingPointLiteral);}
[-+]?(0b|0B)[0-1_]*\.?[0-1_]+([eE][-+]?[0-1_]+)? {sscanf(yytext,"%s", yylval.data);
            return (BooleanIntegerLiteral);}
"'"+(.)+"'" {sscanf(yytext,"%s", yylval.data);
            return (CharacterLiteral);}
\"\"\"(\\.|[^"\\])*\"\"\" {sscanf(yytext,"%s", yylval.data);
            return (TextBlock);}
"=" {
    sscanf(yytext,"%s", yylval.data);
    return (EqualTo);
}
"!" {
    sscanf(yytext,"%s", yylval.data);
    return (NotOperator);
}
"~" {
    sscanf(yytext,"%s", yylval.data);
    return (Tilde);
}
"?" {
    sscanf(yytext,"%s", yylval.data);
    return (QuestionMark);
}
":" {
    sscanf(yytext,"%s", yylval.data);
    return (Colon);
}
"->" {
    sscanf(yytext,"%s", yylval.data);
    return (RightArrow);
}
"==" {
    sscanf(yytext,"%s", yylval.data);
    return (EqualToEqualTo);
}
">=" {
    sscanf(yytext,"%s", yylval.data);
    return (GreaterThanEqualTo);
}
"<=" {
    sscanf(yytext,"%s", yylval.data);
    return (LessThanEqualTo);
}
"!=" {
    sscanf(yytext,"%s", yylval.data);
    return (NotEqualTo);
}
"&&" {
    sscanf(yytext,"%s", yylval.data);
    return (AndOperator);
}
"||" {
    sscanf(yytext,"%s", yylval.data);
    return (OrOperator);
}
"++" {
    sscanf(yytext,"%s", yylval.data);
    return (PlusPlus);
}
"--" {
    sscanf(yytext,"%s", yylval.data);
    return (MinusMinus);
}
"+" {
    sscanf(yytext,"%s", yylval.data);
    return (Addition);
}
"-" {
    sscanf(yytext,"%s", yylval.data);
    return (Substraction);
}
"*" {
    sscanf(yytext,"%s", yylval.data);
    return (Product);
}
"/" {
    sscanf(yytext,"%s", yylval.data);
    return (Divide);
}
"&" {
    sscanf(yytext,"%s", yylval.data);
    return (BitwiseAnd);
}
"|" {
    sscanf(yytext,"%s", yylval.data);
    return (BitwiseOr);
}
"^" {
    sscanf(yytext,"%s", yylval.data);
    return (CircumFlex);
}
"%" {
    sscanf(yytext,"%s", yylval.data);
    return (Modulo);
}
"<<" {
    sscanf(yytext,"%s", yylval.data);
    return (LeftShit);
}
">>" {
    sscanf(yytext,"%s", yylval.data);
    return (RightShift);
}
">>>" {
    sscanf(yytext,"%s", yylval.data);
    return (TripleGreaterThan);
}
"+=" {
    sscanf(yytext,"%s", yylval.data);
    return (AdditionEqualTo);
}
"-=" {
    sscanf(yytext,"%s", yylval.data);
    return (SubstractionEqualTo);
}
"*=" {
    sscanf(yytext,"%s", yylval.data);
    return (ProductEqualTo);
}
"/=" {
    sscanf(yytext,"%s", yylval.data);
    return (DivideEqualTo);
}
"&=" {
    sscanf(yytext,"%s", yylval.data);
    return (BitWiseAndEqualTo);
}
"|=" {
    sscanf(yytext,"%s", yylval.data);
    return (BitWiseOrEqualTo);
}
"^=" {
    sscanf(yytext,"%s", yylval.data);
    return (CircumFlexEqualTo);
}
"%=" {
    sscanf(yytext,"%s", yylval.data);
    return (ModuloEqualTo);
}
"<<=" {
    sscanf(yytext,"%s", yylval.data);
    return (LeftShitEqualTo);
}
">>=" {
    sscanf(yytext,"%s", yylval.data);
    return (RightShiftEqualTo);
}
">>>=" {
    sscanf(yytext,"%s", yylval.data);
    return (TripleGreaterThanEqualTo);
}
">" {
    sscanf(yytext,"%s", yylval.data);
    return (GreaterThan);
    }
"<" {
    sscanf(yytext,"%s", yylval.data);
    return (LessThan);
    }
         
"::" {
    sscanf(yytext,"%s", yylval.data);
    return (Scope);
    }
"@" {
    sscanf(yytext,"%s", yylval.data);
    return (AtRate);
}
"[" {
    sscanf(yytext,"%s", yylval.data);
    return (LeftSquareBracket);
}
"]" {
    sscanf(yytext,"%s", yylval.data);
    return (RightSquareBracket);
}
"(" {
    sscanf(yytext,"%s", yylval.data);
    return (LeftParanthesis);
}


")" {
    sscanf(yytext,"%s", yylval.data);
    return (RightParanthesis);
}   


"..." {
    sscanf(yytext,"%s", yylval.data);
    return (TripleDot);
}

"." {
    sscanf(yytext,"%s", yylval.data);
        return (Dot);
}

"," {
    sscanf(yytext,"%s", yylval.data);
            return (Comma);
    }

"{" {
    sscanf(yytext,"%s", yylval.data);
        return (LeftCurlyBrace);
}

"}" {
    sscanf(yytext,"%s", yylval.data);
        return (RightCurlyBrace);
}

";" {
    sscanf(yytext,"%s", yylval.data);
        return (Semicolon);
}


\"(\\.|[^"\\])*\" {sscanf(yytext,"%s", yylval.data);
            return (StringLiteral);}
" "|"\t"|"\s"|"\f"|"\n"|"r" {}
. {printf("error! unrecognised input character :%s, skipping\n", yytext);}
%%


int yywrap() {}