#include <stdio.h>
int main(){
    int n, hour, minute, second;
    scanf("%d",&n);
    hour = n / 3600;
    second = n % 3600;
    minute = second / 60;
    second = second % 60;
    printf("%d:%d:%d\n", hour, minute, second);
    return 0;
}
