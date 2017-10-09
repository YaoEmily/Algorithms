#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn=1e5;
int dp[maxn];
int a[maxn];
int main()
{
    int n,len=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    dp[len]=a[1];
    for(int i=2;i<=n;i++)
    {
        if(a[i]>dp[len])
          dp[++len]=a[i];
        else
        {
            int pos=lower_bound(dp+1,dp+len,a[i])-dp;
            dp[pos]=a[i];
        }
    }
    printf("%d\n",len);
    return 0;
 }
