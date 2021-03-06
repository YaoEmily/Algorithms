#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int K, N;
int arr[50005];

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    while(cin >> K >> N)
    {
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        qsort(arr, N, sizeof(arr[0]), cmp);

        int isEmpty = 1;
        for(int i = 0; i < N; i++){
            int tmp = K - arr[i];
            for(int j = i + 1; j < N; j++){
                if(arr[j] == tmp){
                    isEmpty = 0;
                    cout << arr[i] << " " << arr[j] << endl;
                    break;
                }
                if(arr[j] > tmp){
                    break;
                }
            }
        }
        if(isEmpty){
            cout << "No Solution" << endl;
        }
    }
}
