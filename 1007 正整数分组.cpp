/*Ì°ÐÄ Ë¼Â·´íÎó*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int N;
int arr[10001];

int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main(void){
    while(cin >> N){
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        qsort(arr, N, sizeof(arr[0]), cmp);
        int a = 0, b = 0;
        for(int i = 0; i < N; i++){
            if(a >= b){
                b += arr[i];
            }else{
                a += arr[i];
            }
        }
        cout << abs(a - b) << endl;
    }
}
