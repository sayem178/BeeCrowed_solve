#include <stdio.h>

int main()
{
    int n;
    unsigned int t;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%u", &t);

        if (t < 2015)
        {
            printf("%d D.C.\n", 2015 - t);
        }
        else
        {
            printf("%d A.C.\n", t - 2014);
        }
    }

    return 0;
}
