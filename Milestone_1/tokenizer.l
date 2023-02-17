%{
    #include<stdio.h>
    #include"string.h"
%}

%%
true|false {}
null {insert(yytext,"NullLiteral");}
exports|opens|requires|uses|module|permits|sealed|var|non-sealed|provides|to|with|open|record|transitive|yield|abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|_ {insert(yytext,"Keyword");}
[a-zA-Z_][a-zA-Z0-9_]* {insert(yytext,"Idetifier");}
"//"+.* {insert(yytext, "SingleLineComment");}
"/*"+([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*(\*)*+"*/" {insert(yytext,"MultiLineComment");}
[-+]?[0-9_]*\.?[0-9_]+ {insert(yytext,"DecimalIntegerLiteral");}
[-+]?(0x|0X)[0-9a-fA-F_]*\.?[0-9a-fA-F_]+ {insert(yytext,"HexIntegerLiteral");}
[-+]?0[0-7_]*\.?[0-7_]+([eE][-+]?[0-7_]+)? {insert(yytext,"OctalIntegerLiteral");}
[-+]?[0-9_]*\.?[0-9_]+([eE][-+]?[0-9_]+)?(f?|F?|d?|D?) {insert(yytext,"FloatinPointLiteral");}
[-+]?(0x|0X)[0-9a-fA-F_]*\.?[0-9a-fA-F_]+([eE|pP][-+]?[0-9a-fA-F_]+)?(f?|F?|d?|D?) {insert(yytext,"FloatPointLiteral");}
[-+]?(0b|0B)[0-1_]*\.?[0-1_]+([eE][-+]?[0-1_]+)? {insert(yytext,"BooleanIntegerLiterals");}
"'"+(.)+"'" {insert(yytext,"CharacterLiteral");}
\"\"\"(\\.|[^"\\])*\"\"\" {insert(yytext,"TextBlock");}
"="|">"|"<"|"!"|"~"|"?"|":"|"->"|"=="|">="|"<="|"!="|"&&"|"||"|"++"|"--"|"+"|"-"|"*"|"/"|"&"|"|"|"^"|"%"|"<<"|">>"|">>>"|"+="|"-="|"*="|"/="|"&="|"|="|"^="|"%="|"<<="|">>="|">>>=" {insert(yytext,"operator");}
"("|")"|"{"|"}"|"["|"]"|";"|","|"."|"..."|"@"|"::" {insert(yytext,"Separator");}
\"(\\.|[^"\\])*\" {insert(yytext,"StringLiteral");}
" "|"\t"|"\s"|"\f"|"\n"|"r" {}
. {printf("error! unrecognised input character :%s, skipping\n", yytext);}
%%


int yywrap() {}