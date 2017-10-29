#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int N;
int arr[10][10];

int main(void){
    while(cin >> N){
        int sum = 0;
        for(int i = 1; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(i == 1){
                    arr[i][j] = 0;
                    if(j == 1){
                        arr[i][j] = 1;
                    }
                }
                if(j == 0){
                    arr[i][j] = sum;
                    sum = 0;
                }else if(j == 1){
                    int tmp = 1;
                    for(int k = 0; k < i-1; k++){
                        tmp *= 10;
                    }
                    arr[i][j] = tmp + arr[i][0];
                }else {
                    arr[i][j] = arr[i][0];
                }
                sum += arr[i][j];
            }
        }
        for(int i = 1; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
