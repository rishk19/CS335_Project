#include <stdio.h>
#include "string.h"
#include "stdlib.h"

char* concatenate_string(char* s, char* s1)
{
    char* c = (char*) malloc(sizeof(char)*100);
    int i;
    
    int j = 0;

    while(s[j]!= '\0'){
        c[j] = s[j];
        j+=1;
    }

    printf("%c\n",s[j]);
 
    for (i = 0; s1[i] != '\0'; i++) {
        c[i+j] = s1[i];
     }
 
    c[i + j] = '\0';
 
    return c;
}

int main()
{
    char* a;
    char* b;

    a = (char*) malloc(sizeof(char)*100);
    b = (char*) malloc(sizeof(char)*100);

    a ="abcd";
    b = "ef";

    printf("%s \n%s \n",a,b);

    a = concatenate_string(a,b);
    printf("%s ",a);
    return 0;
}