#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

char s1[1005],s2[1005];
int arr[1005][1005];
char temp[1010];

int main(void)
{
    int t = 1005;

    while(scanf("%s %s", s1, s2) != EOF)
    {
        int len1 = strlen(s1);
        int len2 = strlen(s2);

        for(int i = 0; i < len1+1; i++)
        {

            for(int j = 0; j < len2+1; j++)
            {

                if(i==0||j==0)
                {
                    arr[i][j] = 0;
                }
                else if(s1[i-1] == s2[j-1])
                {
                    arr[i][j] = arr[i-1][j-1] + 1;
                }
                else
                {
                    arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                }
            }
        }

//        for(int i = 0; i < len1; i++)
//        {
//            for(int j = 0; j < len2; j++)
//            {
//                printf("%d ", arr[i][j]);
//            }
//            printf("\n");
//        }

        //µ¹ÐðÐ´Èë×Ö·û´®
        for(int i=len1,j=len2; i>0&&j>0;)
        {
            if(s1[i-1]==s2[j-1])
            {
                temp[t--] = s1[i-1];
                i--;
                j--;
            }
            else if(arr[i][j-1]>arr[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }

        //ÕýÐòÊä³ö×Ö·û´®
        for(int i = t+1; i<1006; i++)
            cout<<temp[i];
        cout<<endl;
    }
}
