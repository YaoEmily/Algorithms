#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<long long> vec;
typedef vector<vec> mat;
const ll N = 1000000009;
mat mul(mat a,mat b)  //æÿ’Û≥À∑®
{
    mat c(a.size(),vec(b[0].size()));
    for(ll i=0;i<a.size();i++)
    {
        for(ll k=0;k<b.size();k++)
        {
            for(ll j=0;j<b[0].size();j++)
                c[i][j] = ( c[i][j] + a[i][k] * b[k][j] ) % N;
        }
    }
    return c;
}

mat solve_pow(mat a,ll n) //øÏÀŸ√›
{
    mat b(a.size(),vec(a.size()));
    for(ll i=0;i<a.size();i++)
        b[i][i]=1;
    while(n>0)
    {
        if(n & 1)
            b=mul(b,a);
        a=mul(a,a);
        n >>= 1;
    }

    return b;
}
ll n;
void solve()
{
    mat a(2,vec(2));
    while(~scanf("%lld",&n) && n!=-1)
    {
        a[0][0]=1,a[0][1]=1;
        a[1][0]=1,a[1][1]=0;
        a=solve_pow(a,n);
        printf("%lld\n",a[1][0]);
    }
}
int main()
{
    solve();
    return 0;
}
