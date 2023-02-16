%{
    #include <stdio.h>
    #include <string.h>
    #include "parse.tab.h"

%}


%%

b {
    sscanf(yytext, "%s", yylval.data);
    return (B);
}

c { 
    sscanf(yytext, "%s", yylval.data);
    return (C);
}

[ ]* {

}

. {
    
}

%%



yywrap(){}