#include <stdio.h>

int caller(int a, int b);
int callee(int c);

int caller(int a, int b)
{
    return(callee(a + b));
}

int callee(int c)
{
    return(c+1);
}

int main()
{
    int a = 1;
    
    if(a == 1)
    {
        caller(a,1);
    }
    else if(a == 6){
        a = 1;

    }
    else if(a == 7){
        a = 2;
    }
    else if(a == 1000000){
        a = 123;
    }
    else{
        caller(a,2);
    }
    //printf("%d\n", caller(a,b));
    return 0;
}