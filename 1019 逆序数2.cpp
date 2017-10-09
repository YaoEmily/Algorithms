#include <iostream>
#include <stdio.h>
#define MAXN 50005
using namespace std;

int arr[MAXN];
int target[MAXN];
int sum;
int n;

void target_sort(int* a, int* t, int x, int y)
{
    if(y - x > 1)
    {
        //int m = (y + x) >> 1;
        int m = (x + y) / 2;
        int p = x, q = m, i = x;
        target_sort(arr, target, x, m);  //左递归
        target_sort(arr, target, m, y);  //右递归
        while(p < m || q < y)    //合并
        {
            if(q >= y || (p < m && a[p] <= a[q]))
            {
                t[i++] = a[p++];  //将左边元素复制到临时数组
            }
            else
            {
                t[i++] = a[q++]; //将右边元素复制到临时数组
                sum += m - p; //累计逆序对的数目
            }
        }
        for(int i = x; i<y; i++)  //将临时数组里已排序的元素还原到原数组
        {
            a[i] = t[i];
        }
    }
}

int main(void)
{

    while(scanf("%d", &n) != EOF)
    {
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        target_sort(arr, target, 0, n);

        printf("%d\n", sum);
    }
}
