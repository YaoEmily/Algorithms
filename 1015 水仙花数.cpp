#include <iostream>
#include <math.h>
using namespace std;

int N;

int main(void)
{
    while(cin >> N)
    {
        int n;
        int tmp, a, sum, cycle;
        for(n = N; ; n++)
        {
            a = n;
            sum = 0;
            cycle = 0;
            while(a){
                cycle++;
                a /= 10;
            }
            a = n;
            while(a)
            {
                tmp = a % 10;
                sum += pow(tmp, cycle);
                a /= 10;
            }
            if(sum == n){
                cout << n <<endl;
                break;
            }
        }
    }
}
