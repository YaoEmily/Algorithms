#include <iostream>
#include <math.h>
using namespace std;

int N;

int main(void){
    while(cin >> N){
        int flag = 1, a, b;
        for(a = 0, b = (int)sqrt(N); a <= b; ){
            if(a*a + b*b > N){
                b--;
            }else if(a*a + b*b < N){
                a++;
            }else {
                flag = 0;
                cout << a << " " << b << endl;
                a++;
                b--;
            }
        }
        if(flag){
            cout << "No Solution" << endl;
        }
    }
}
