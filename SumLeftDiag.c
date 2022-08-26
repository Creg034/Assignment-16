#include <stdio.h>
int takestr(int Matrix[3][3]);
int leftDiag(int Matrix[3][3]);

int main()
{
    int SDarray[3][3];
    printf("Enter Array Below: \n");
    takestr(SDarray);
    leftDiag(SDarray);
    return 0;
}
int takestr(int Matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]:  ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }
}
int leftDiag(int Matrix[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j <= i)
            {
                sum += Matrix[i][j];
                printf("%4d ", Matrix[i][j]);
            }
            else
                printf("%4c ", ' ');
        }
        printf("\n");
    }
}