#include <stdio.h>

int is_prime(int x) {
    if (x < 2) return 0;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }

    return 1;
}

int main() {
    int n, x;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);

        if (is_prime(x))
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }

    return 0;
}
