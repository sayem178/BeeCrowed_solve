#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, n;
    scanf("%d %d", &p, &n);

    int pipes[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pipes[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (abs(pipes[i + 1] - pipes[i]) > p)
        {
            printf("GAME OVER\n");
            return 0;
        }
    }

    printf("YOU WIN\n");
    return 0;
}
