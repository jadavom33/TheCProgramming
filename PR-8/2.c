#include <stdio.h>

void cube(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", (*ptr) * (*ptr) * (*ptr));
            ptr++;
        }
        printf("\n");
    }
}

int main()
{
    int size;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int a[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    prntf("Cube of all elements:\n");
    cube(&a[0][0], size);
}