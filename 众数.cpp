#include <iostream>
#include <string.h>
using namespace std;

//a[i]中的i表示第几个 a[i]表示第i数字
//b[i]中的i表示次数 b[i]表示数字
int main(void)
{
    int n;
    cin>>n;
    int a[100];
    int b[100];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    int tempB = 0;
    int tempI = -1;

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]] > tempB)
        {
            tempB = b[a[i]];
            tempI = a[i];
        }
        if(b[a[i]] == tempB && a[i] < tempI)
        {
            tempB = b[a[i]];
            tempI = a[i];
        }
    }
    cout<<"数字"<<tempI<<"出现了"<<tempB<<"次"<<endl;
}
