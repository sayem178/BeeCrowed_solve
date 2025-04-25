#include <stdio.h>

int main()

{
    int n, i, j, x, sum;

    scanf("%d", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%d", &x);

        sum=0;

        for (j=0; j<x; ++j)
        {
            if (j%2==0)
            sum+=1;

            else
            sum-=1;
        }

        printf("%d\n", sum);
    }

    return 0;
}