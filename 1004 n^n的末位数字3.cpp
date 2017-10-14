#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    b = a % 10;
    //幂的末尾数字规律为4个一循环
    c = a % 4;
    //c等于0时为第四个
    if (c == 0)
        c = 4;
    c = pow(b, c);
    cout << c % 10 << endl;
    return 0;
}
