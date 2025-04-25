#include <stdio.h>

int main() 
{
    double n, tax = 0.0;

    scanf("%lf", &n);

    if (n <= 2000.0) {
        printf("Isento\n");
    } else {
        double remaining = n - 2000.0;

        if (remaining <= 1000.0) {
            tax = remaining * 0.08;
        } else if (remaining <= 2500.0) {
            tax = 1000.0 * 0.08;
            tax += (remaining - 1000.0) * 0.18;
        } else {
            tax = 1000.0 * 0.08;
            tax += 1500.0 * 0.18;
            tax += (remaining - 2500.0) * 0.28;
        }

        printf("R$ %.2lf\n", tax);
    }

    return 0;
}
