#include <stdio.h>
#define N 6

int getMaxSum(int arr[N], int length)
{
    int ThisSum, MaxSum;
    int i;
    ThisSum = MaxSum = 0;
    for (i = 0; i < length; i++)
    {
        ThisSum += arr[i];
        if (ThisSum > MaxSum)
            MaxSum = ThisSum;
        else if (ThisSum < 0)
            ThisSum = 0;
    }
    return MaxSum;
}

int main()
{
    int arr[N];
    printf("Input %d numbers:", N);
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("input the %dth number:", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    int res = getMaxSum(arr, N);

    printf("the max sum in arry is %d\n", res);
    return 0;
}