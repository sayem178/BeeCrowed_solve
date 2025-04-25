#include <stdio.h>
#include <string.h>

int main()

{
    int n, i, j, x;
    char str[100];

    scanf("%d", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%s %d", str, &x);

        if (strcmp(str, "Thor")==0)
            printf("Y\n");

        else
            printf("N\n");
    }

    return 0;
}