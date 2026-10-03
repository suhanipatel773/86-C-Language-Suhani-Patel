#include <stdio.h>
int main ()
{
    printf("suhani patel");
    printf("\nFibonacci Series");
    int a,b,sum;
    a=0;
    b=1;
    printf("Enter num of terms;");
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        printf("\n%d",a);
        sum=a+b;
        a=b;
        b=sum;
    }
}
