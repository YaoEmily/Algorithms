#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char str[10001];
int arr[30];

int cmp(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main(void){
    while(cin >> str){
        int len = strlen(str);
        for(int i = 0; i < len; i++){
            if(str[i] < 97)
                str[i] = str[i] + 32;
            arr[(int)str[i] - 97]++;
        }
        qsort(arr, 26, sizeof(arr[0]), cmp);
        int start = 26;
        int sum = 0;
        for(int i = 0; i < 26; i++){
            sum += arr[i] * (start--);
        }
        cout << sum << endl;
    }
}
