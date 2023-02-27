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
exports|opens|requires|uses|module|permits|sealed|var|non-sealed|provides|to|with|open|record|transitive|yield|abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|_ {insert(yytext,"Keyword");}
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