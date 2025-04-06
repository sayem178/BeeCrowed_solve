#include<stdio.h>
int main()
{
    int a, t=0;
    int count=0;
    while(t< 5){
        scanf("%d", &a);
        
        if( a%2==0){
            count++;
        }
        t++;
    }
    printf("%d valores pares\n", count);
    return 0;
}