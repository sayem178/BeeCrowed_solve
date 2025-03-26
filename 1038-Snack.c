#include <stdio.h>

int main() {
    int X, Y;
    float total;

    scanf("%d%d", &X, &Y);

    switch (X) {
        case 1: total = Y * 4.00; break;
        case 2: total = Y * 4.50; break;
        case 3: total = Y * 5.00; break;
        case 4: total = Y * 2.00; break;
        case 5: total = Y * 1.50; break;
        default: total = 0;
    }

    if (total > 0) {
        printf("Total: R$ %.2f\n", total);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
