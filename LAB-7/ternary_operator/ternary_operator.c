#include <stdio.h>

int main() {

    printf("suhani patel\n");
    printf("greatest between three no.\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
     a>b?(a>c?printf("a"):printf("c")):(b>c?printf("b"):printf("c"));
   
    return 0;
}
