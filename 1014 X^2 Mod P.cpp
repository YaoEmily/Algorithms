#include <iostream>
using namespace std;

long long P, A;

int main(void)
{
    while(cin >> P >> A)
    {
        int flag = 1;
        for(long long i = 1; i < P; i++)
        {
            if((i * i) % P == A)
            {
                if(flag)
                {
                    cout << i;
                    flag = 0;
                }
                else cout << " " << i;
            }
        }
        if(flag){
            cout << "No Solution" << endl;
        }else{
            cout << endl;
        }
    }
}
