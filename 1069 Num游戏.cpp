#include <iostream>
#include <stdio.h>
using namespace std;

int n;

int main(void){
    int stone, tag = 0;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            scanf("%d", &stone);
            tag ^= stone;
            printf("tag = %d, stone = %d\n", tag, stone);
        }
        printf("%c\n", tag == 0 ? 'B' : 'A');
    }
}
