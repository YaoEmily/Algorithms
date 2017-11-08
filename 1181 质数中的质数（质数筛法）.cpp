#include <iostream>
#include <string.h>
#define MAXSIZE 1001000
using namespace std;

int N;
int prime[MAXSIZE];
int mark[MAXSIZE];
int prime2[MAXSIZE];

int main(void){
    while(cin >> N){
        memset(mark, 0, sizeof(mark[0]));
        int index = 0;
        for(int i = 2; i < MAXSIZE; i++){
            if(mark[i] == 0){
                prime[index++] = i;
            }
            for(int j = 0; j < index && prime[j] * i < MAXSIZE; j++){
                mark[i*prime[j]] = 1;
                if(i % prime[j] == 0){
                    break;
                }
            }
        }
        int index2 = 0;
        for(int i = 0; i < index; i++){
            prime2[index2] = prime[prime[i]-1];
            if(prime2[index2] >= N){
                cout<<prime2[index2]<<endl;
                break;
            }
            index2++;
        }
    }
}
