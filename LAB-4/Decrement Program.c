#include <stdio.h>
int main()
{
    int a,b,c;
    a=32;
    c=a--;
    printf("%d",c);
    c=--a;
    printf("\n%d",c);
    return 0;
}
