#include<stdio.h>
int main()
{
    int a, b, c, min, max, mid;
    scanf("%d %d %d", &a, &b, &c);
    min = (a<b && a<c) ? a: (b<a && b<c) ? b: c;
    max = (a>b && a>c) ? a: (b>a && b>c) ? b: c;//using the ternary (conditional) operator **condition ? expression_if_true : expression_if_false;**
    mid = (a+b+c)-(max+min);//"Sum-Based Middle Extraction" method.
    printf("%d\n%d\n%d\n", min, mid, max);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;

    
}