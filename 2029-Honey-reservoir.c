#include <stdio.h>

int main()
{
    double v, d, r, area, altura;
    const double pi = 3.14;

    while (scanf("%lf %lf", &v, &d) != EOF)
    {
        r = d / 2.0;
        area = pi * r * r;
        altura = v / area;
        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}
