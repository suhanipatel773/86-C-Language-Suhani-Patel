#include <stdio.h>
int main ()
{
    int A=5,B=10;
    int C;
    printf("A=%d and B=%d",A,B);
    C=A;
    A=B;
    B=C;
    printf("\nA=%d and B=%d",A,B);
    return 0;
}
