#include <iostream>
using namespace std;

int N;

int main(void)
{
    while(cin >> N)
    {
        int sum = 0, sum1 = 0, sum2 = 0;
        int a;
        for(int i = 0; i < N; i++)
        {
            cin >> a;
            if(a == 1)
            {
                sum1++;
            }
            else if(a == 2)
            {
                sum2++;
            }
        }
        sum += sum1 * (sum1-1);
        sum += sum2 * (sum2-1) / 2;
        sum += sum1 * sum2;
        sum += (N-sum1-sum2) * sum1;
        cout << sum << endl;
    }
}
