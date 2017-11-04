#include <iostream>
#include <string.h>
using namespace std;

int N;
long long arr[50001];
long long sum1[50001];
long long sum2[50001];

int main(void)
{
    while(cin >> N)
    {
        long long result1, result2, sum = 0;
        memset(arr, 0, sizeof(arr[0]));
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if(i == 0)
            {
                result1 = sum1[0] = arr[0];
                result2 = sum2[0] = arr[0];
            }
            else
            {
                sum1[i] = max(arr[i], sum1[i-1] + arr[i]);
                sum2[i] = min(arr[i], sum2[i-1] + arr[i]);
            }
            if(sum1[i] > result1)
            {
                result1 = sum1[i];
            }
            if(sum2[i] < result2)
            {
                result2 = sum2[i];
            }
        }
        if(result2 < 0 && sum - result2 > result1)
            cout << sum - result2 << endl;
        else cout << result1 << endl;
    }
}
