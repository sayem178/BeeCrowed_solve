#include <stdio.h>

int main() {
    int A, N;
    scanf("%d", &A);
    do {
        scanf("%d", &N);
    } while (N <= 0);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A + i;
    }

    printf("%d\n", sum);
    return 0;
}
