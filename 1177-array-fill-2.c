#include <stdio.h>

int main()

{
    int a, n[1000], i, j = 0;

    scanf("%d", &a);

    for (i = 0; i < 1000; ++i)
    {

        printf("N[%d] = %d\n", i, j++);
        if (j == a)
            j = 0;
    }

    return 0;
}