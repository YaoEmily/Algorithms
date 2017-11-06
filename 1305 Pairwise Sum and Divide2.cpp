#include <iostream>
using namespace std;

int N;
int arr[100001];

int main(void){
    while(cin >> N){
        int sum = 0;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            for(int j = 0; j < i; j++){
                if(arr[i] == 2 && arr[j] == 2){
                    sum++;
                }else if(arr[i] == 1 && arr[j] == 1){
                    sum += 2;
                }else if(arr[i] == 1 || arr[j] == 1){
                    sum ++;
                }
            }
        }
        cout << sum << endl;
    }
}
