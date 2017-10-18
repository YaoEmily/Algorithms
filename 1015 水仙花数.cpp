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
        for(n = N + 1; ; n++)
        {
            a = n;
            sum = 0;
            while(a)
            {
                tmp = a % 10;
                sum += tmp * tmp * tmp;
                a /= 10;
//                if(n==153){
//                    cout<<"tmp = "<<tmp<<", tmp^3 = "<<pow(tmp, 3)<<", sum = "<<sum<<", a = "<<a<<endl;
//                }
            }
            if(sum == n){
                cout << n <<endl;
                break;
            }
        }
    }
}
