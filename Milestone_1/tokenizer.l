%{
    #include<stdio.h>
    #include"string.h"
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
_ {return(Underscore);}

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
"="|">"|"<"|"!"|"~"|"?"|":"|"->"|"=="|">="|"<="|"!="|"&&"|"||"|"++"|"--"|"+"|"-"|"*"|"/"|"&"|"|"|"^"|"%"|"<<"|">>"|">>>"|"+="|"-="|"*="|"/="|"&="|"|="|"^="|"%="|"<<="|">>="|">>>=" {sscanf(yytext,"%s", yylval.data);
            return (Operator);}
"("|")"|"{"|"}"|"["|"]"|";"|","|"."|"..."|"@"|"::" {sscanf(yytext,"%s", yylval.data);
            return (Seperator);}
\"(\\.|[^"\\])*\" {sscanf(yytext,"%s", yylval.data);
            return (StringLiteral);}
" "|"\t"|"\s"|"\f"|"\n"|"r" {}
. {printf("error! unrecognised input character :%s, skipping\n", yytext);}
%%


int yywrap() {}