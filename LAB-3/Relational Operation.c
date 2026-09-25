#include <stdio.h>
int main ()
{
    int a,b,c;
    a=40;
    b=8;
    c=a+b;
    printf("%d",a>b);
    printf("\n%d",b>c);
    printf("\n%d",c<=a+b);
    printf("\n%d",c!=a+b);
    printf("\n%d",c>b);
    return 0;
}
