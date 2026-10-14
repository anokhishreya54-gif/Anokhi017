#include <stdio.h>

// Function to count even numbers
int countEven(int a[], int n)
{
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int a[100], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    result = countEven(a, n);

    printf("Even numbers = %d\n", result);

    return 0;
}
