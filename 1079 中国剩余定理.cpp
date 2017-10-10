#include <iostream>
#include <stdio.h>
using namespace std;

int N;
int arr[11][11];

int main(void){
    while(cin >> N){
        for(int i = 0; i < N; i++){
            cin >> arr[i][0] >> arr[i][1];
        }
        int s = 1, k = arr[0][1];
        for(int i = 0; i < N - 1; i++){
             s = s * arr[i][0];
            while(k % arr[i+1][0] != arr[i+1][1]){
                k += s;
            }
        }
        cout << k <<endl;
    }
}
