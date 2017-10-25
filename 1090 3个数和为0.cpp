#include <iostream>
#include <stdlib.h>
using namespace std;

int N;
int arr[1001];

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){
    while(cin >> N){
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        int flag = 1;
        qsort(arr, N, sizeof(arr[0]), cmp);
        for(int i = 0; i < N; i++){
            for(int j = i + 1, k = N - 1; j < k; ){
                if(arr[j] + arr[k] == -arr[i]){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    j++;
                    k--;
                    flag = 0;
                }else if(arr[j] + arr[k] > -arr[i]){
                    k--;
                }else if(arr[j] + arr[k] < -arr[i]){
                    j++;
                }
            }
        }
        if(flag){
            cout << "No Solution" << endl;
        }
    }
}
