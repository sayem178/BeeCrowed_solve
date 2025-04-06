#include<stdio.h>
int main()
{
    float a, t=0;
    int count=0;
    while(t< 6){
        scanf("%f", &a);
        
        if(a>0){
            count++;
        }
        t++;
    }
    printf("%d valores positivos\n", count);
    return 0;
}