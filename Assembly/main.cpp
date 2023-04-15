#include <string>
#include <stdio.h>

using namespace std;

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
    int b = 'a';
    char c = 'a';
    string d = "abcd";
    //printf("%d\n", caller(a,b));
    return 0;
}