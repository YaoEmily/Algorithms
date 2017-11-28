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
        int flag1 = 1;/*判断是否所有教室都被安排出去*/
        while(flag1)
        {
            flag1 = 0;
            int flag2 = 1;/*判断该教室是否已经被安排活动*/
            for(int i = 0; i < N; i++)
            {
                /*每个教室的第一个*/
                if(flag2 && b[i] == 1)
                {
                    tmp = i;
                    b[i] = 0;
                    flag2 = 0;
                    flag1 = 1;
                    sum++;
                    //cout<<"第一个"<<i<<endl;
                }
                /*每个教室的非第一个*/
                else if(flag2 == 0 && b[i] == 1 && arr[i][0] > arr[tmp][1])
                {
                    tmp = i;
                    b[i] = 0;
                    //cout<<"非第一个"<<i<<endl;
                }
            }
        }
        cout << sum << endl;
    }
}
