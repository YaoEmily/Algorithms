#include <iostream>
using namespace std;

int N;
int arr[501][501];
int b[501][501];

int main(void)
{
    while(cin >> N)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(i == 0 && j == 0)
                {
                    b[i][j] = arr[i][j];
                }
                else if(i == 0)
                {
                    b[i][j] = arr[i][j] + b[i][j - 1];
                }
                else if(j == 0)
                {
                    b[i][j] = arr[i][j] + b[i - 1][j];
                }
                else
                {
                    b[i][j] = arr[i][j] + max(b[i-1][j], b[i][j-1]);
                }
            }
        }
        cout << b[N - 1][N - 1] << endl;
    }
}
