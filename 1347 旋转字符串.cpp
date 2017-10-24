#include <iostream>
#include <string.h>
using namespace std;

char str[1000001];

int main(void){
    while(cin >> str){
        int len = strlen(str);
        int flag = 0;
        for(int i = len/2; i < len; i++){
            if(str[i] != str[i - len / 2]){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
