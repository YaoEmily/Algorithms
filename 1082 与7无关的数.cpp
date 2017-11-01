#include <iostream>
using namespace std;

int T;
long long arr[1000001];

void init()
{
    arr[0] = 0;
    for(long long i = 1; i < 1000001; i++)
    {
        int flag = 1;
        if(i / 7 * 7 == i)
        {
            flag = 0;
        }
        else
        {
            long long tmp = i;
            while(tmp)
            {
                if(tmp % 10 == 7)
                {
                    flag = 0;
                    break;
                }
                tmp = tmp / 10;
            }
        }
        if(flag)
        {
            arr[i] = arr[i-1] + i * i;
        }
        else
        {
            arr[i] = arr[i-1];
        }
    }
}

int main(void)
{
    init();
    while(cin >> T)
    {
        while(T--)
        {
            long long a;
            cin >> a;
            cout << arr[a] << endl;
        }
    }
}
