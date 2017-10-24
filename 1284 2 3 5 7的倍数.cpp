#include <iostream>
using namespace std;

long long N;

int main(void){
    long long a;
    while(cin >> N){
        /*»›≥‚‘≠¿Ì*/
        a = N - (N/2 + N/3 + N/5 + N/7) + (N/6 + N/10 + N/14 + N/15 + N/21 + N/35) - (N/30 + N/70 + N/42 + N/105) + N/210;
        cout<<a<<endl;
    }
}
