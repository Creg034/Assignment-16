#include <stdio.h>
#include <string.h>
int takeMat(int mat[3][3]);
int transposeMat(int mat[3][3]);
int printMat(int mat[3][3]);
int main()
{
    int matrix[3][3];
    printf("Enter String Below: \n");
    takeMat(matrix);
    printf("\n****BEFORE****\n");
    printMat(matrix);
    transposeMat(matrix);
    printf("\n****AFTER****\n");
    printMat(matrix);
    return 0;
}
int takeMat(int mat1[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
}
int transposeMat(int mat[3][3])
{

}

int printMat(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}