#include <stdio.h>

int main()
{
    int s, t, f, arrival;

    while (scanf("%d %d %d", &s, &t, &f) == 3)
    {
        arrival = (s + t + f) % 24;
        if (arrival < 0)
            arrival += 24;
        printf("%d\n", arrival);
    }

    return 0;
}
