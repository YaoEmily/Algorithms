#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
    int n;
    while(scanf("%d", &n) != EOF){
        int res = n;
        for(int i = 2; i <= n; i++){
            if(n % i == 0){
                res -= res / i;
                while(n % i == 0)
                    n /= i;
            }
        }
        printf("%d\n", n>1 ? res/n*(n-1):res);
    }
}
