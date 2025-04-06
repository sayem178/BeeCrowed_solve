#include <stdio.h>

// Function to sort three numbers in ascending order
void sort(double *a, double *b, double *c) {
    double temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    
    sort(&A, &B, &C); // Sort sides A, B, C in non-decreasing order
    
    if (A <= 0 || B <= 0 || C <= 0 || A + B <= C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A * A + B * B == C * C) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A * A + B * B > C * C) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A * A + B * B < C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}
