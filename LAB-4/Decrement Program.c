#include <stdio.h>
int main()
{
    int a,b,c;
    a=32;
    b=14;
    c=a--*b;
    printf("%d",c);
    c=--a*b;
    printf("\n%d",c);
    return 0;
}
