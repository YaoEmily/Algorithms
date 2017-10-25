#include <iostream>
#include <math.h>
using namespace std;

int S;

int main(void){
    while(cin >> S){
        int a = sqrt(S);
        for(int i = a; i > 0; i--){
            if(S / i * i == S){
                cout << i * 2 + (S / i) *2 << endl;
                break;
            }
        }
    }
}
