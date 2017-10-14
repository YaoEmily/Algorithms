#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int gewei = n % 10;
        int result = gewei;
        for(int i = 1; i < n; i++)
        {
            result *= gewei;
            result %= 10;
        }
        cout << result << endl;
    }
}
