#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int N;
int dp[11][11];

int main(void){
    while(cin >> N){
        arr[1] = 1;
        for(int i = 2; i < 10; i++){
            arr[i] = pow(10, (i-1)) + arr[i-1] * 8;
            cout<<arr[i]<<endl;
        }
    }
}
