/*01±³°ü*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int N;
int arr[101];
int dp[10001];

int main(void){
    while(cin >> N){
        int sum = 0;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        memset(dp, 0, sizeof(dp[0]));
        for(int i = 0; i < N; i++){
            for(int j = sum/2; j >= arr[i]; j--){
                dp[j] = max(dp[j], dp[j-arr[i]] + arr[i]);
            }
        }
        cout << abs((sum - dp[sum/2] * 2)) << endl;
    }
}
