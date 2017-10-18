#include <iostream>
using namespace std;

int main(void){
    int N;
    while(cin >> N){
        int n = N;
        int sum = 0;
        while(n/5){
            n /= 5;
            sum += n;
        }
        cout << sum << endl;
    }
}
