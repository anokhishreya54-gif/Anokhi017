#include <stdio.h>

int main()
{
    // Variable declaration
    int x = 25;

    // Pointer declaration
    int *p;

    // Store address of x in pointer p
    p = &x;

    // Printing values
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void *)&x);
    printf("Value stored in p = %p\n", (void *)p);
    printf("Value pointed by *p = %d\n", *p);

    return 0;
}
