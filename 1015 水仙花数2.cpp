#include <iostream>
#define N 1000
using namespace std;

int main(void)
{
    int i,n,a[6]= {153,370,371,407,1634};
    while(cin >> n)
    {
        for(i = 0; i <= 4; i++)
        {
            if(a[i] >= n)
            {
                cout << a[i] << endl;
                break;
            }
        }
    }
}
