#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char str[1001];
int sum;
int temp;

int main(void)
{
    while(scanf("%s", str) != EOF)
    {
        sum = 1;
        int len = strlen(str);
        for(int i = 0; i < len; i++)
        {
            //����Ϊ����
            for(int j = 0; (i + j < len && i - j >= 0); j++)
            {
                if(str[i + j] != str[i - j])
                    break;
                temp = j * 2 + 1;
                if(temp > sum)
                    sum = temp;
            }

            //����Ϊż��
            for(int j = 0; (i + 1 + j < len && i - j >= 0); j++){
                if(str[i + 1 + j] != str[i-j])
                    break;
                temp = j * 2 + 2;
                if(temp > sum){
                    sum = temp;
                }
            }
        }
        printf("%d\n", sum);
    }
}
