#include <stdio.h>
int main() {
    int c1, u1, c2, u2;
    double p1, p2, result;
    scanf("%d %d %lf %d %d %lf", &c1, &u1, &p1, &c2, &u2, &p2);
    result = (u1 * p1) + (u2 * p2);
    printf("VALOR A PAGAR: R$ %.2f\n", result);
    return 0;
}
