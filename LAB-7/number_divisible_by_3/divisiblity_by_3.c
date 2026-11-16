#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 != 0)
    {
        printf("Number is divisible by 3 but not by 5");
    }
    else
    {
        printf("Condition not satisfied");
    }

    return 0;
}
