#include <stdio.h>
int main()
{
    int arr[10] = {10,11,1,2,3};

    int arr2[10];
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        arr2[i] = arr[i] ^ arr[i + 1];
        if (i == n - 2 && n % 2 != 0)
        {
            arr2[i + 1] = arr[i + 1];
        }
        if (i == n - 2 && n % 2 == 0)
        {
            n = n - 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr2[i]);
    }
    return 0;
}