#include <stdio.h>

int main()
{
    unsigned long long n;
    scanf("%llu", &n);

    if (n == 0)
    {
        printf("0\n");
    }
    else
    {
        while (n > 0)
        {
            printf("%llu", n % 10);
            n = n / 10;
        }
        printf("\n");
    }

    return 0;
}
