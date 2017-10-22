#include <iostream>
using namespace std;

long long N;

int main(void)
{
    while(cin >> N)
    {
        long long a1 = 0, a2 = 1, a3 = a1 + a2, tmp;
        if(N == 0)
        {
            cout << a1 << endl;
        }
        else if(N == 1)
        {
            cout << a2 << endl;
        }
        else if(N == 2)
        {
            cout<<a3<<endl;
        }
        else
        {
            tmp = N - 2;
            for(int i = 0; i < tmp; i++)
            {
                a1 = a2 % 1000000009;
                a2 = a3 % 1000000009;
                a3 = (a1 + a2) % 1000000009;
            }
            cout << a3 << endl;
        }
    }
}
