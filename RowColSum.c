#include <stdio.h>
#include <string.h>
int takeArray(int array[3][3]);
int rowcols(int array[3][3]);
int main()
{
    int array[3][3];
    printf("Enter Matrix Below: \n");
    takeArray(array);
    rowcols(array);
    return 0;
}
int takeArray(int array[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}
int rowcols(int array[3][3])
{
    int rowSum = 0;
    int colSum = 0;
    printf("\n****SUM-OF-COLUMNS****\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            colSum += array[i][j];
        }
        printf("Sum Of Column[%d]: %d\n", i, colSum);
        colSum = 0;
    }
    printf("\n****SUM-OF-ROWS****\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rowSum += array[j][i];
        }
        printf("Sum Of Row[%d]: %d\n", i, rowSum);
        rowSum = 0;
    }
}

// 1 min program