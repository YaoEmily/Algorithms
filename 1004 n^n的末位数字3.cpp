#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    b = a % 10;
    //�ݵ�ĩβ���ֹ���Ϊ4��һѭ��
    c = a % 4;
    //c����0ʱΪ���ĸ�
    if (c == 0)
        c = 4;
    c = pow(b, c);
    cout << c % 10 << endl;
    return 0;
}
