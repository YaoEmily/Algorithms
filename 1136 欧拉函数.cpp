#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int n;

int greatCommonDivisor(int a){
    int b = n;
    while(a != b){
        if(a > b)
            a = a - b;
        else b = b - a;
    }
    return a;
}

int main(void){
    int sum;
    while(scanf("%d", &n) != EOF){
        sum = 0;
        for(int i = 1; i < n; i++){
            if(greatCommonDivisor(i) == 1)
                sum++;
        }
        cout << sum << endl;
    }
}
