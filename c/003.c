#include <stdio.h>
#include <stdlib.h>

// 交换两个整数的值
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 打印数组
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 递归生成排列
void permute(int arr[], int left, int right)
{
    int i;
    if (left == right)
    {
        printArray(arr, right + 1);
    }
    else
    {
        for (i = left; i <= right; i++)
        {
            swap((arr + left), (arr + i));
            permute(arr, left + 1, right);
            swap((arr + left), (arr + i)); // 回溯
        }
    }
}

int main()
{
    int a;
    printf("请输入一个整数a: ");
    scanf("%d", &a);

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = a + i;
    }

    printf("从%d到%d的所有排列方式如下（共120种）：\n", a, a + 4);
    permute(arr, 0, 4);

    return 0;
}