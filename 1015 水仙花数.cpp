#include <iostream>
#include <math.h>
using namespace std;

int N;

int main(void)
{
    while(cin >> N)
    {
        int n;
        int tmp, a, sum;
        for(n = N; ; n++)
        {
            a = n;
            sum = 0;
            while(a)
            {
                tmp = a % 10;
                sum += tmp * tmp * tmp;
                a /= 10;
            }
            if(sum == n){
                cout << n <<endl;
                break;
            }
        }
    }
}
