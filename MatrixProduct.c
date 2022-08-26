#include <stdio.h>
int takeMat(int mats[3][3]);
int returnMat(int mats[3][3]);
int productMat(int mat1[3][3], int mat2[3][3], int productMatrix[3][3]);
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int productMatrix[3][3];
    printf("Enter Values Of First Matrix: \n");
    takeMat(mat1);
    printf("Enter Values Of Second Matrix: \n");
    takeMat(mat2);
    // ************************************************
    printf("\n******MAT1******\n");
    returnMat(mat1);
    printf("\n******MAT2******\n");
    returnMat(mat2);
    // ************************************************
    productMat(mat1, mat2, productMatrix);
    // ************************************************
    printf("\n******PRODUCT******\n");
    returnMat(productMatrix);

    return 0;
}
int takeMat(int mats[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter m[%d][%d]: ", i, j);
            scanf("%d", &mats[i][j]);
        }
    }
}
int returnMat(int mats[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d ", mats[i][j]);
        }
        printf("\n");
    }
}
int productMat(int mat1[3][3], int mat2[3][3], int productMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            productMatrix[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
}