#include <stdio.h>

int main(void)
{
    int h, m, delay;

    while (scanf("%d:%d", &h, &m) == 2)
    {
        delay = (h - 8) * 60 + m;
        if (delay < 0)
            delay = 0;
        printf("Atraso maximo: %d\n", delay);
    }

    return 0;
}
