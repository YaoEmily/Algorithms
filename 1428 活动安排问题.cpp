#include <iostream>
#include <string.h>
using namespace std;

int N;
long long arr[10001][2];
int b[10001];

int main(void)
{
    while(cin >> N)
    {
        for(int i = 0; i < N; i++)
        {
            b[i] = 1;
            cin >> arr[i][0] >> arr[i][1];
            for(int j = i; j > 0; j--)
            {
                if(arr[j][1] < arr[j-1][1])
                {
                    long long tmp0 = arr[j][0];
                    long long tmp1 = arr[j][1];
                    arr[j][0] = arr[j-1][0];
                    arr[j][1] = arr[j-1][1];
                    arr[j-1][0] = tmp0;
                    arr[j-1][1] = tmp1;
                }
            }
        }
        int tmp = 0;
        int sum = 0;
        int flag1 = 1;/*�ж��Ƿ����н��Ҷ������ų�ȥ*/
        while(flag1)
        {
            flag1 = 0;
            int flag2 = 1;/*�жϸý����Ƿ��Ѿ������Ż*/
            for(int i = 0; i < N; i++)
            {
                /*ÿ�����ҵĵ�һ��*/
                if(flag2 && b[i] == 1)
                {
                    tmp = i;
                    b[i] = 0;
                    flag2 = 0;
                    flag1 = 1;
                    sum++;
                    //cout<<"��һ��"<<i<<endl;
                }
                /*ÿ�����ҵķǵ�һ��*/
                else if(flag2 == 0 && b[i] == 1 && arr[i][0] > arr[tmp][1])
                {
                    tmp = i;
                    b[i] = 0;
                    //cout<<"�ǵ�һ��"<<i<<endl;
                }
            }
        }
        cout << sum << endl;
    }
}
