#include <stdio.h>

int main() {
    int validCount = 0;
    float score, sum = 0.0;

    while (validCount < 2) {
        scanf("%f", &score);
        
        if (score >= 0.0 && score <= 10.0) {
            sum += score;
            validCount++;
        } else {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", sum / 2.0);

    return 0;
}
