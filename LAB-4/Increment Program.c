#include <stdio.h>
int main()
{
    int a,b,c;
    a=23;
    b=17;
    c=a++;
    printf("%d",c);
    c=++a;
    printf("\n%d",c);
    return 0;
}
