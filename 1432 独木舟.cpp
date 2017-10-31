#include <iostream>
#include <stdlib.h>
using namespace std;

int n, m;
int arr[10001];

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    while(cin >> n >> m)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        qsort(arr, n, sizeof(arr[0]), cmp);
        int sum = 0;
        for(int i = 0, j = n - 1; i <= j; )
        {
            if(arr[i] + arr[j] > m)
            {
                sum++;
                j--;
            }
            else
            {
                sum++;
                i++;
                j--;
            }
        }
        cout << sum << endl;
    }
}
