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
        target_sort(arr, target, x, m);  //��ݹ�
        target_sort(arr, target, m, y);  //�ҵݹ�
        while(p < m || q < y)    //�ϲ�
        {
            if(q >= y || (p < m && a[p] <= a[q]))
            {
                t[i++] = a[p++];  //�����Ԫ�ظ��Ƶ���ʱ����
            }
            else
            {
                t[i++] = a[q++]; //���ұ�Ԫ�ظ��Ƶ���ʱ����
                sum += m - p; //�ۼ�����Ե���Ŀ
            }
        }
        for(int i = x; i<y; i++)  //����ʱ�������������Ԫ�ػ�ԭ��ԭ����
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
