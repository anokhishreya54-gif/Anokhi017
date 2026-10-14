#include <stdio.h>

int main()
{
    #include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp;

    // Store value of a in temp
    temp = *a;

    // Copy value of b into a
    *a = *b;

    // Copy temp value into b
    *b = temp;
}

int main()
{
    int a, b;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display before swapping
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Calling swap function
    swap(&a, &b);

    // Display after swapping
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
    int x = 25;

    int *p = &x;

    *p = 100;

    
    printf("Value of x after changing through pointer = %d\n", x);

    return 0;
}
