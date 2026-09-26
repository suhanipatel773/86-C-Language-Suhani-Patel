#include <stdio.h>
int main ()
{
    int a=12,b=15,c=17;
    if (a>=b&&b>=c)
    {
        printf("%d",a);
    }
    else if (b>=a&&b>=c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
}
