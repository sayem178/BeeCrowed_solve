#include <stdio.h>

int main()
{
    int i, j, high, a[100];

    for (i = 0; i < 100; ++i)
        scanf("%i", &a[i]);

    high = a[0];

    for (i = 0; i < 100; ++i)
    {
        if (a[i] > high)
        {
            high = a[i];
            j = i;
        }
    }

    printf("%i\n%i\n", high, j + 1);

    return 0;
}