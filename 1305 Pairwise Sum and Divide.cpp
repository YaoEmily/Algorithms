#include <iostream>
#include <math.h>
using namespace std;

int N;
int arr[100001];

int main(void){
    while(cin >> N){
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        long long sum = 0;
        for(int i = 0; i < N; i++){
            for(int j = i+1; j < N; j++){
                sum += floor(arr[i] + arr[j]) / (arr[i] * arr[j]);
            }
        }
        cout << sum << endl;
    }
}
