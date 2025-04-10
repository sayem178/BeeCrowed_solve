#include <stdio.h>

int main() {
    int X, Z, sum = 0, count = 0;
    
    scanf("%d", &X);
    
    do {
        scanf("%d", &Z);
    } while (Z <= X);
    
    for (int i = X; sum <= Z; i++) {
        sum += i;
        count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
