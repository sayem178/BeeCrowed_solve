#include <stdio.h>

int main() 
{
    int n;
    while(scanf("%d", &n) != EOF) {
        double res = 0;
        for(int i = 0; i < n; i++) {
            res = 1.0 / (6.0 + res);
        }
        printf("%.10lf\n", 3.0 + res);
    }
    return 0;
}
