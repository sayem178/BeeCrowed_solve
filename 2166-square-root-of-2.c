#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double res = 0.0;
    for (int i = 0; i < n; i++) {
        res = 1.0 / (2.0 + res);
    }

    res = 1.0 + res;

    printf("%.10lf\n", res);

    return 0;
}
