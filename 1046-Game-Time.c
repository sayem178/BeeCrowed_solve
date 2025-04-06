#include <stdio.h>

int main() {
    int a, b, d;
    scanf("%d %d", &a, &b);

    d = b - a;
    if (d <= 0) d += 24;  // Fixes negative duration or full 24-hour game

    printf("O JOGO DUROU %d HORA(S)\n", d);
    
    return 0;
}
