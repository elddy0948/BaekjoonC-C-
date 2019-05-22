#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<string>
#include<math.h>
#include<cstring>


using namespace std;
//FILE * fp=fopen("10798.inp","r");

char s[6][16];
char a;
int max_len=-1;
int cnt;

int main(){
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", s[i]);
 
        max_len = max(max_len, (int)strlen(s[i]));
    }
    for (int i = 0; i < max_len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i >= strlen(s[j])) continue;
            printf("%c", s[j][i]);
        }
    }
}