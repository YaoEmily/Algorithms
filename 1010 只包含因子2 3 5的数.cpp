#include <iostream>
#include <algorithm>
using namespace std;

typedef long long LL;
const LL INF = 1e18+100;

LL N;
LL arr[1000000];

int main(void)
{
    int cnt = 0;
    for(LL i=1; i<INF; i*=2)///(×¢Òâi,j,kÊÇLLµÄ)
        for(LL j=1; j*i<INF; j*=3)
            for(LL k=1; i*j*k<INF; k*=5)
                    arr[cnt++] = i*j*k;
    //cout<<cnt<<endl;
    sort(arr, arr+cnt);
    while(cin>>N)
    {
        long long a;
        for(long long i = 0; i < N; i++)
        {
            cin >> a;
            if(a == 1 || a == 0)
            {
                cout<<"2"<<endl;
                continue;
            }
            long long x = 0, y = cnt - 1, mid;
            while(x != y && x != y - 1){
                mid = (x + y) / 2;
                if(arr[mid] >= a){
                    y = mid;
                }else if(arr[mid] < a){
                    x = mid;
                }
                //cout<<"x = "<<x<<"y = "<<y<<"mid = "<<mid<<endl;
            }
            if(arr[x] == a){
                cout<<arr[x]<<endl;
            }else{
                cout<<arr[x+1]<<endl;
            }
        }
    }
}
