#include <stdio.h>

int main()

{
    int fact=1, n;

    scanf("%i", &n);

    for (int i=1; i<=n; ++i)
        fact*=i;

    printf("%i\n", fact);

    return 0;
}