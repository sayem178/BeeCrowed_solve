#include <stdio.h>

int main()
{
    int t1, t2, t3, t4;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    int total_devices = (t1 + t2 + t3 + t4) - 3;

    printf("%d\n", total_devices);

    return 0;
}
