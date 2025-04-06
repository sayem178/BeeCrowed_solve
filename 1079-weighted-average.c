#include<stdio.h>
int main()
{
    int a;
    float b, c, d, avg;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        scanf("%f %f %f", &b, &c, &d);
        avg=((b*2 + c*3 + d*5) / 10);
        printf("%.1f\n", avg);
    }
    return 0;
}