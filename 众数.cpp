#include <iostream>
#include <string.h>
using namespace std;

//a[i]�е�i��ʾ�ڼ��� a[i]��ʾ��i����
//b[i]�е�i��ʾ���� b[i]��ʾ����
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
    cout<<"����"<<tempI<<"������"<<tempB<<"��"<<endl;
}
