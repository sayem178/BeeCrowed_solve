#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x[n];
    int min, pos;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (i == 0 || x[i] < min) {
            min = x[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);

    return 0;
}
