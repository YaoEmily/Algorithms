#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;

char arr_temp[10];
int arr[10];

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b; //由小到大排序
    //return *(int *)b - *(int *)a; 由大到小排序
}

int main(void)
{
    while(scanf("%s", arr_temp) != EOF)
    {
        int len = strlen(arr_temp);

        //整数字符串转化
        for(int i = 0; i < len; i++)
        {
            arr[i] = arr_temp[i] - 48;
            //printf("%d", arr[i]);
        }

        //整数数组快排
        qsort(arr, len, sizeof(arr[0]), cmp);

        //输出排序结果
//        for(int i = 0; i < len; i++)
//        {
//            printf("%d", arr[i]);
//        }
//        printf("\n");

        //求一个排序的下一个排列的函数
        do {
            for(int i = 0; i < len; i++){
                cout << arr[i];
            }
            cout << endl;
        }while(next_permutation(arr, arr+len));
    }
}
