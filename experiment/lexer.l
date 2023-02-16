%{
    #include <stdio.h>
    #include <string.h>
    #include "parse.tab.h"

%}


%%

b {
    //sscanf(yytext, "%s", yylval.data);
    yylval.data = "b";
    return (B);
}

c { 
    //sscanf(yytext, "%s", yylval.data);
    yylval.data = "c";
    return (C);
}

[ ]* {

}

. {
    
}

%%



yywrap(){}