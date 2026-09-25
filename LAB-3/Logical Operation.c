#include <stdio.h>
int main ()
{
    int a,b,c;
    a=8;
    b=18;
    c=28;
    printf("%d",a>b&&b>c);
    printf("%d",a<b&&b>c);
    printf("%d",a<b&&b<c);
    printf("%d",a>b||b>c);
    printf("%d",a<b||b>c);
    return 0;
}
