#include <stdio.h>

int main()
{
    int p, code, quantity;
    double total = 0.0;

    scanf("%d", &p);

    while (p--)
    {
        scanf("%d %d", &code, &quantity);

        if (code == 1001)
            total += 1.50 * quantity;
        else if (code == 1002)
            total += 2.50 * quantity;
        else if (code == 1003)
            total += 3.50 * quantity;
        else if (code == 1004)
            total += 4.50 * quantity;
        else if (code == 1005)
            total += 5.50 * quantity;
    }

    printf("%.2lf\n", total);

    return 0;
}
