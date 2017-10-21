#include <iostream>
using namespace std;

int N;
int arr[50001];

int main(void){
    while(cin >> N){
        long long sum = 0;
        long long res = 0;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            sum += arr[i];
            if(sum < 0){
                res += -sum;
                sum = 0;
            }
        }
        cout << res << endl;
    }
}
