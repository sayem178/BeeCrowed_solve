#include <stdio.h>

int main() {
    int n, x, y, sum, i;
    
    scanf("%d", &n);  

    for (int t = 0; t < n; t++) {
        scanf("%d %d", &x, &y);

        sum = 0;

        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        for (i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
