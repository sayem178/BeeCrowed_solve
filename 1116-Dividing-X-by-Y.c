#include<stdio.h>
int main()
{
    int x,y,c,i=0;
    scanf("%d", &c);
    while(i < c){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
            
        }
        else{
            printf("%.1f\n",(float)x/(float)y);
        }
        i++;
    }
    return 0;
}