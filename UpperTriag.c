#include <stdio.h>
int takeMat(int matrix[3][3]);
int printMat(int matrix[3][3]);
int main()
{
    int matrix[3][3];
    takeMat(matrix);
    printMat(matrix);
    return 0;
}
int takeMat(int matrix[3][3])
{
    printf("Enter Matrix Below: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
int printMat(int matrix[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j >= i)
                printf("%4d ", matrix[i][j]);
            else
                printf("%4c ", ' ');
        }
        printf("\n");
    }
}