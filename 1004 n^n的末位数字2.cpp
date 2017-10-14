#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int times = 1;
        int gewei = n % 10;
        int result = gewei;
        while(times * 2 <= n)
        {
            times *= 2;
            result = (result * result) % 10;
        }
        for(int i = times; i < n; i++)
        {
            result *= gewei;
            result %= 10;
        }
        cout << result << endl;
    }
}
