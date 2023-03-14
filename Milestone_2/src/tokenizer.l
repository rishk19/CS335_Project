%{
    #include<stdio.h>
    #include"string.h"
    #include "parser.tab.h"

    extern long long int line_number;
%}

%option noyywrap

%%

"//"+.* {}

"/*"+([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*(\*)*+"*/" {}

true|false {
    sscanf(yytext,"%s", yylval.data);
            return (BooleanLiteral);
}

null {
    sscanf(yytext,"%s", yylval.data);
    return (NullLiteral);
}

exports { 
    sscanf(yytext,"%s", yylval.data);
    return(Exports);}
opens { 
    sscanf(yytext,"%s", yylval.data);
    return(Opens);}
requires { 
    sscanf(yytext,"%s", yylval.data);
    return(Requires);} 
uses { 
    sscanf(yytext,"%s", yylval.data);
    return(Uses);}
module { 
    sscanf(yytext,"%s", yylval.data);
    return(Module);}
permits { 
    sscanf(yytext,"%s", yylval.data);
    return(Permits);}
sealed { 
    sscanf(yytext,"%s", yylval.data);
    return(Sealed);}
var { 
    sscanf(yytext,"%s", yylval.data);
    return(Var);}
non-sealed { 
    sscanf(yytext,"%s", yylval.data);
    return(Non_sealed);}
provides { 
    sscanf(yytext,"%s", yylval.data);
    return(Provides);}
to { 
    sscanf(yytext,"%s", yylval.data);
    return(To);}
with { 
    sscanf(yytext,"%s", yylval.data);
    return(With);}
open { 
    sscanf(yytext,"%s", yylval.data);
    return(Open);}
record { 
    sscanf(yytext,"%s", yylval.data);
    return(Record);}
transitive { 
    sscanf(yytext,"%s", yylval.data);
    return(Transitive);}
yield { 
    sscanf(yytext,"%s", yylval.data);
    return(Yield);}
abstract { 
    sscanf(yytext,"%s", yylval.data);
    return(Abstract);}
continue { 
    sscanf(yytext,"%s", yylval.data);
    return(Continue);}
for { 
    sscanf(yytext,"%s", yylval.data);
    return(For);}
new { 
    sscanf(yytext,"%s", yylval.data);
    return(New);}
switch { 
    sscanf(yytext,"%s", yylval.data);
    return(Switch);}
assert { 
    sscanf(yytext,"%s", yylval.data);
    return(Assert);}
default { 
    sscanf(yytext,"%s", yylval.data);
    return(Default);}
if { 
    sscanf(yytext,"%s", yylval.data);
    return(If);}
package { 
    sscanf(yytext,"%s", yylval.data);
    return(Package);}
synchronized { 
    sscanf(yytext,"%s", yylval.data);
    return(Synchronized);}
boolean { 
    sscanf(yytext,"%s", yylval.data);
    return(Boolean);}
do { 
    sscanf(yytext,"%s", yylval.data);
    return(Do);}
goto { 
    sscanf(yytext,"%s", yylval.data);
    return(Goto);}
private { 
    sscanf(yytext,"%s", yylval.data);
    return(Private);}
this { 
    sscanf(yytext,"%s", yylval.data);
    return(This);}
break { 
    sscanf(yytext,"%s", yylval.data);
    return(Break);}
double { 
    sscanf(yytext,"%s", yylval.data);
    return(Double);}
implements { 
    sscanf(yytext,"%s", yylval.data);
    return(Implements);}
protected { 
    sscanf(yytext,"%s", yylval.data);
    return(Protected);}
throw { 
    sscanf(yytext,"%s", yylval.data);
    return(THROW);}
byte { 
    sscanf(yytext,"%s", yylval.data);
    return(Byte);}
else { 
    sscanf(yytext,"%s", yylval.data);
    return(Else);}
import { 
    sscanf(yytext,"%s", yylval.data);
    return(Import);}
public { 
    sscanf(yytext,"%s", yylval.data);
    return(Public);}
throws { 
    sscanf(yytext,"%s", yylval.data);
    return(THROWS);}
case { 
    sscanf(yytext,"%s", yylval.data);
    return(Case);}
enum { 
    sscanf(yytext,"%s", yylval.data);
    return(Enum);}
instanceof { 
    sscanf(yytext,"%s", yylval.data);
    return(Instanceof);}
return { 
    sscanf(yytext,"%s", yylval.data);
    return(Return);}
transient { 
    sscanf(yytext,"%s", yylval.data);
    return(Transient);}
catch { 
    sscanf(yytext,"%s", yylval.data);
    return(Catch);}
extends { 
    sscanf(yytext,"%s", yylval.data);
    return(Extends);}
int { 
    sscanf(yytext,"%s", yylval.data);
    return(Int);}
short { 
    sscanf(yytext,"%s", yylval.data);
    return(Short);}
try { 
    sscanf(yytext,"%s", yylval.data);
    return(Try);}
char { 
    sscanf(yytext,"%s", yylval.data);
    return(Char);}
final { 
    sscanf(yytext,"%s", yylval.data);
    return(Final);}
interface { 
    sscanf(yytext,"%s", yylval.data);
    return(Interface);}
static { 
    sscanf(yytext,"%s", yylval.data);
    return(Static);}
void { 
    sscanf(yytext,"%s", yylval.data);
    return(Void);}
class { 
    sscanf(yytext,"%s", yylval.data);
    return(Class);}
finally { 
    sscanf(yytext,"%s", yylval.data);
    return(FINALLY);}
long { 
    sscanf(yytext,"%s", yylval.data);
    return(Long);}
strictfp { 
    sscanf(yytext,"%s", yylval.data);
    return(Strictfp);}
volatile { 
    sscanf(yytext,"%s", yylval.data);
    return(Volatile);}
const { 
    sscanf(yytext,"%s", yylval.data);
    return(Const);}
float { 
    sscanf(yytext,"%s", yylval.data);
    return(Float);}
native { 
    sscanf(yytext,"%s", yylval.data);
    return(Native);}
super { 
    sscanf(yytext,"%s", yylval.data);
    return(Super);}
while { 
    sscanf(yytext,"%s", yylval.data);
    return(While);}


[a-zA-Z_][a-zA-Z0-9_]* {
    sscanf(yytext,"%s", yylval.data);
    return (Identifier);
}

[0-9_]*\.?[0-9_]+ {
    sscanf(yytext,"%s", yylval.data);
    return (DecimalIntegerLiteral);
}

(0x|0X)[0-9a-fA-F_]*\.?[0-9a-fA-F_]+ {
    sscanf(yytext,"%s", yylval.data);
    return (HexIntegerLiteral);
}

0[0-7_]*\.?[0-7_]+([eE][-+]?[0-7_]+)? {sscanf(yytext,"%s", yylval.data);
            return (OctalIntegerLiteral);}

[0-9_]*\.?[0-9_]+([eE][-+]?[0-9_]+)?(f?|F?|d?|D?) {
    sscanf(yytext,"%s", yylval.data);
    return (FloatingPointIntegerLiteral);
}
(0x|0X)[0-9a-fA-F_]*\.?[0-9a-fA-F_]+([eE|pP][-+]?[0-9a-fA-F_]+)?(f?|F?|d?|D?) {
    sscanf(yytext,"%s", yylval.data);
    return (FloatingPointLiteral);
}

(0b|0B)[0-1_]*\.?[0-1_]+([eE][-+]?[0-1_]+)? {
    sscanf(yytext,"%s", yylval.data);
    return (BooleanIntegerLiteral);
}

"'"+(.)+"'" {
    sscanf(yytext,"%s", yylval.data);
    return (CharacterLiteral);
}

\"\"\"(\\.|[^"\\])*\"\"\" {
    sscanf(yytext,"%s", yylval.data);
    return (TextBlock);
}
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

\"(\\.|[^"\\])*\" {
    char str[1000];
    for(int i = 1; i<1000 && yytext[i]!='\"'; i++)
        str[i] = yytext[i]; 
    sscanf(str,"%s", yylval.data);
            return (StringLiteral);
}
" "|"\t"|"\s"|"\f"|"r" {}
"\n" {
    line_number +=1;
}

. {printf("error! unrecognised input character :%s, skipping\n", yytext);}


%%


//int yywrap() {}