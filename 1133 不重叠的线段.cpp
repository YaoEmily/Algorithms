#include <iostream>
using namespace std;

int N;
int arr[10001][2];

int main(void){
    while(cin >> N){
        for(int i = 0; i < N; i++){
            cin >> arr[i][0] >> arr[i][1];
            for(int j = i-1; j >= 0; j--){
                int tmp = j+1;
                if(arr[tmp][1] < arr[j][1]){
                    int temp0 = arr[tmp][0];
                    int temp1 = arr[tmp][1];
                    arr[tmp][0] = arr[j][0];
                    arr[tmp][1] = arr[j][1];
                    arr[j][0] = temp0;
                    arr[j][1] = temp1;
                }
            }
        }
        int sum = 1;
        int tmp = 0;
        for(int i = 1; i < N; i++){
            if(arr[tmp][1] <= arr[i][0]){
                sum++;
                tmp = i;
            }
        }
        cout<<sum<<endl;
    }
}
