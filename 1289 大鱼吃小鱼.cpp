#include <iostream>
using namespace std;

int N;
int arr[100001][2];

int main(void)
{
    while(cin >> N)
    {
        int a, b;
        int sum = 0;
        while(N--)
        {
            cin >> arr[sum][0] >> arr[sum][1];
            if(sum == 0 || arr[sum-1][1] == 0 ||(arr[sum-1][1] == 1 && arr[sum][1] == 1))
            {
                /*��һ������ȫ�������� ����������д�� sum��1*/
                sum++;
                //cout << "first" <<sum<< endl;
            }
            else if(arr[sum-1][1] == 1 && arr[sum][1] == 0)
            {
                /*��һ������ �������� ��С�㴦��*/
                if(arr[sum-1][0] > arr[sum][0])
                {
                    /*����������� �Ե����� sum��������*/
                    //cout << "second" <<sum<< endl;
                }
                else
                {
                    /*����С������ �Ե����� ������*/
                    if(arr[sum-1][0] < arr[sum][0])
                    {
                        arr[sum-1][0] = arr[sum][0];
                        arr[sum-1][1] = arr[sum][1];
                    }
                    while(sum >= 2 && arr[sum-2][1] == 1)
                    {
                        if(arr[sum-2][0] < arr[sum-1][0])
                        {
                            arr[sum-2][0] = arr[sum-1][0];
                            arr[sum-2][1] = arr[sum-1][1];
                            sum--;
                        }
                        else
                        {
                            arr[sum-2][0] = arr[sum-1][0];
                            arr[sum-2][1] = arr[sum-1][1];
                            sum--;
                            break;
                        }
                        //cout << "third" <<sum<< endl;
                    }
                }
            }
        }
        cout << sum <<endl;
    }
}
