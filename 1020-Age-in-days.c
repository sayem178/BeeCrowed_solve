#include <stdio.h>
int main() {
    int a, year, month, day;
    scanf("%d", &a);
    year = a / 365;
    day = a % 365;
    month = day / 30;
    day = day % 30;
    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
    return 0;
}
