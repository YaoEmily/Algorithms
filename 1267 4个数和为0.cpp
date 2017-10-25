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
        for(int i = 0; i < N && flag; i++){
            for(int j = i + 1; j < N && flag; j++){
                int tmp = arr[i] + arr[j];
                for(int k = j + 1, l = N - 1; k < l && flag; ){
                    if(-tmp == arr[k] + arr[l]){
                        cout << "Yes" << endl;
                        flag = 0;
                        k++;
                        l--;
                        break;
                    }else if(-tmp > arr[k] + arr[l]){
                        k++;
                    }else{
                        l--;
                    }
                }
            }
        }
        if(flag == 1){
            cout << "No" << endl;
        }
    }
}
