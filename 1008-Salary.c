#include <stdio.h>
int main()
{
    int num, w_hour;
    double prs;
    scanf("%d %d %lf", &num, &w_hour, &prs);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", w_hour * prs);
    return 0;
}
