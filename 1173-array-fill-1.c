#include <stdio.h>

int main()

{
    int n[10], i, j;

    scanf("%d", &j);

    for (i=0; i<10; ++i)
    {
        printf("N[%d] = %d\n", i, j);
        j*=2;
    }

    return 0;
}