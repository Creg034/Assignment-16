#include <stdio.h>
int takemat(int array[3][3]);
int max1sRows(int array[3][3]);
int main()
{
    int array[3][3];
    takemat(array);
    max1sRows(array);
    return 0;
}
int takemat(int array[3][3])
{
    printf("Enter String Below: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}
int max1sRows(int array[3][3])
{
    int row[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == 1)
            {

                row[i] += array[i][j];
            }
        }
    }

    int max = row[0], index = 0;
    for (int i = 0; i < 3; i++)
    {
        if (max < row[i])
        {
            index = i;
            max = row[i];
        }
    }
    printf("Row[%d] Has Majority of 1's", row[index]);
}
