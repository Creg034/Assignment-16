#include <stdio.h>
#include <string.h>
int takearray(int array[3][3]);
int SparseOrNot(int array[3][3]);
int main()
{
    int array[3][3];
    takearray(array);
    SparseOrNot(array);
    return 0;
}
int takearray(int array[3][3])
{
    printf("Enter Matrix Below: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}
int SparseOrNot(int array[3][3])
{

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == 0)
                count++;
        }
    }
    if (count > 9 - count)
    {
        printf("Yes It is Sparse Matrix");
    }
    else
        printf("No! It's Not a Sparse Matrix");
}