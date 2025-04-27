#include <stdio.h>

int count_multiples(int arr[], int n, int divisor)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % divisor == 0)
            count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d Multiplo(s) de 2\n", count_multiples(arr, n, 2));
    printf("%d Multiplo(s) de 3\n", count_multiples(arr, n, 3));
    printf("%d Multiplo(s) de 4\n", count_multiples(arr, n, 4));
    printf("%d Multiplo(s) de 5\n", count_multiples(arr, n, 5));

    return 0;
}
