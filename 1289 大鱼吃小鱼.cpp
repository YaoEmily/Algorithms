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
                /*第一个或者全都向左游 将该组数据写入 sum加1*/
                sum++;
                //cout << "first" <<sum<< endl;
            }
            else if(arr[sum-1][1] == 1 && arr[sum][1] == 0)
            {
                /*上一组向右 该组向左 吃小鱼处理*/
                if(arr[sum-1][0] > arr[sum][0])
                {
                    /*左鱼大于右鱼 吃掉右鱼 sum不做处理*/
                    //cout << "second" <<sum<< endl;
                }
                else
                {
                    /*左鱼小于右鱼 吃掉左鱼 并迭代*/
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
