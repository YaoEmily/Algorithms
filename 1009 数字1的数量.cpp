#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int N;
int arr[10][10];

int main(void)
{

    /*求出数位DP矩阵*/
    int sum = 0;
    for(int i = 1; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == 0)
            {
                arr[i][j] = 0;
            }
            if(i == 1)
            {
                arr[i][j] = 0;
                if(j == 1)
                {
                    arr[i][j] = 1;
                }
            }
            if(j == 0)
            {
                arr[i][j] = sum;
                sum = 0;
            }
            else if(j == 1)
            {
                int tmp = 1;
                for(int k = 0; k < i-1; k++)
                {
                    tmp *= 10;
                }
                arr[i][j] = tmp + arr[i][0];
            }
            else
            {
                arr[i][j] = arr[i][0];
            }
            sum += arr[i][j];
        }
    }

    while(cin >> N)
    {
        int tmp = N;
        sum = 0;
        int current_digit = 1;
        int before_digit = 0;
        int times_of_ten = 1;
        while(tmp != 0)
        {
            int current = tmp % 10;
            tmp /= 10;

            for(int i = 0; i < current; i++)
            {
                sum += arr[current_digit][i];
            }
            if(current == 1)
            {
                sum += before_digit + 1;
            }

            before_digit += current * times_of_ten;
            times_of_ten *= 10;
            current_digit++;
        }
        cout << sum << endl;
    }
}
