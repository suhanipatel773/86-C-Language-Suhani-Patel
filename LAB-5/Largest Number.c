#include <stdio.h>
int main ()
{
    printf("suhani patel");
    int a=12,b=15,c=17;
    if (a>=b&&b>=c)
    {
        printf("\n%d",a);
    }
    else if (b>=a&&b>=c)
    {
        printf("\n%d",b);
    }
    else
    {
        printf("\n%d",c);
    }
    return 0;
}
