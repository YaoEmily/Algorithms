#include <iostream>
#include <math.h>
using namespace std;

int N;

int main(void){
    while(cin >> N){
        int a;
        while(N--){
            cin >> a;
            int tmp = (int)sqrt((a - 1) * 2);
            if((a - 1) * 2 == tmp * (tmp + 1)){
                cout << "1" << endl;
            }else{
                cout << "0" << endl;
            }
        }
    }
}
