#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("Suhani Patel\n");

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Odd terms are: ");

    for (int i = 1; i <= n; i++)
    {
        if (a % 2 != 0)
        {
            printf("%d ", a);
        }

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
