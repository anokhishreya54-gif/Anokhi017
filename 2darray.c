#include <stdio.h>

int main()
{
    int a[100][100];
    int m, n, key;
    int found = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    int i;
	for ( i = 0; i < m; i++)
    {   
        int j;
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter key: ");
    scanf("%d", &key);
    for ( i = 0; i < m; i++)
    {   
        int j;
        for ( j = 0; j < n; j++)
        {
            if (a[i][j] == key)
            {
                printf("Found at (%d, %d)\n", i, j);
                found = 1;
                break;
            }
        }

        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        printf("Not found\n");
    }

    return 0;
}
