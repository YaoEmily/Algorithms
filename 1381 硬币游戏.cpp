#include <iostream>
using namespace std;

int T;
long double arr[10001];

int main(void)
{
    while(cin >> T)
    {
        long double res;
        for(int i = 0; i < T; i++)
        {
            cin >> arr[i];
            int miner = 2 * arr[i] / 1;
            int maxer = miner + 1;
            res = (arr[i] * 2 - miner) * (miner+ 1) + (maxer - arr[i] * 2) * miner;
            cout << res << endl;
        }
    }
}
