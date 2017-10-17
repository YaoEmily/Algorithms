#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int K, N;
int arr[50005];

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    while(cin >> K >> N)
    {
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        qsort(arr, N, sizeof(arr[0]), cmp);

        int i = 0, j = N - 1;
        int flag = 1;
        int sum;
        while(i < j)
        {
            sum = arr[i] + arr[j];
            if(sum == K)
            {
                cout << arr[i++] << " " << arr[j++] << endl;
                flag = 0;
            }
            else if(sum < K)
            {
                i++;
            }
            else j--;
        }
        if(flag)
        {
            cout<<"No Solution"<<endl;
        }
    }
}
