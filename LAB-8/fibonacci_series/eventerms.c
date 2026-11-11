#include <stdio.h>

int main() {

    printf("suhani patel\n");
    int n, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Even terms in Fibonacci series:\n");

    for (int i = 1; i <= n; i++)
    {
        c = a + b;

        if (a % 2 == 0)
        {
            printf("%d ", a);
        }

        a = b;
        b = c;
    }

    return 0;
}
