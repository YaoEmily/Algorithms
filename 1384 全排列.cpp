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
    return *(int*)a - *(int*)b; //��С��������
    //return *(int *)b - *(int *)a; �ɴ�С����
}

int main(void)
{
    while(scanf("%s", arr_temp) != EOF)
    {
        int len = strlen(arr_temp);

        //�����ַ���ת��
        for(int i = 0; i < len; i++)
        {
            arr[i] = arr_temp[i] - 48;
            //printf("%d", arr[i]);
        }

        //�����������
        qsort(arr, len, sizeof(arr[0]), cmp);

        //���������
//        for(int i = 0; i < len; i++)
//        {
//            printf("%d", arr[i]);
//        }
//        printf("\n");

        //��һ���������һ�����еĺ���
        do {
            for(int i = 0; i < len; i++){
                cout << arr[i];
            }
            cout << endl;
        }while(next_permutation(arr, arr+len));
    }
}
