#include <iostream>
#include <stdio.h>
using namespace std;

long long arr[50000];
int sum;
int n;

int main(void){

    while(scanf("%d", &n) != EOF){
        sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            for(int j = 0; j < i; j++){
                if(arr[j] > arr[i]){
                    sum++;
                }
            }
        }
        printf("%d\n", sum);
    }
}
