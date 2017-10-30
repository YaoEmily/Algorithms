#include <iostream>
using namespace std;

int N;
int arr[100001][2];

int main(void){
    while(cin >> N){
        for(int i = 0; i < N; i++){
            cin >> arr[i][0] >> arr[i][1];
        }
        int left, right;
        for(int i = 0; i < N - 1; ){
            left = i;
            right = i + 1;
            if(arr[left][1] == 1 && arr[right][1] == 0){
                if(arr[left][0] > arr[right][0]){
                    arr[right][0] = 0;
                    right++;
                }else{
                    arr[left][0] = 0;
                    left--;
                }
            }
        }
    }
}
