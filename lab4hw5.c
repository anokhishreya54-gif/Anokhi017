#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;
    int swaps = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swaps++;
            }
        }
    }

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSwaps = %d\n", swaps);

    return 0;
}
