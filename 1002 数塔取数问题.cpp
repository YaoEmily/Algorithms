#include <iostream>
using namespace std;

int N;
int arr[501][501];
int b[501][501];

int main(void){
    while(cin >> N){
        for(int i = 0; i < N; i++){
            for(int j = 0; j <= i; j++){
                cin >> arr[i][j];
            }
        }
        b[0][0] = arr[0][0];
        for(int i = 0; i < N; i++){
            for(int j = 0; j <= i; j++){
                if(i == 0){
                    b[i][j] = arr[i][j] + b[i - 1][j];
                }else if(i == j){
                    b[i][j] = arr[i][j] + b[i - 1][j - 1];
                }else{
                    b[i][j] = arr[i][j] + max(b[i - 1][j - 1], b[i - 1][j]);
                }
            }
        }
        int res = b[N - 1][0];
        for(int i = 1; i < N; i++){
            if(b[N - 1][i] > res){
                res = b[N - 1][i];
            }
        }
        cout<<res<<endl;
    }
}
