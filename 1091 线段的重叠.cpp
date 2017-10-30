#include <iostream>
#include <stdlib.h>
using namespace std;

int N;
int arr[50001][2];

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}


int main(void)
{
    while(cin >> N)
    {
        int res = 0;
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
        }
        qsort(arr, N, sizeof(arr[0]), cmp);
        for(int i = 0; i < N - 1; i++)
        {
            for(int j = i + 1; j < N - 1; j++)
            {
                if(arr[i][1] <= arr[j][0])
                {
                    break;
                }
                else if(arr[i][1] <= arr[j][1])
                {
                    if(res < arr[i][1] - arr[j][0])
                    {
                        res = arr[i][1] - arr[j][0];
                    }
                    break;
                }
                else if(arr[i][1] > arr[j][1])
                {
                    if(res < arr[j][1] - arr[j][0])
                    {
                        res = arr[j][1] - arr[j][0];
                    }
                }
            }
        }
        cout << res << endl;
    }
}
