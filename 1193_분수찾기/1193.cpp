#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("1193.inp","r");
int cnt;

int a=1;
int b=1;
int where_is;
int where_cnt;

int main(){
    scanf("%d",&cnt);
    for(int i=1;i<=cnt;i++){
        where_is+=i;
        where_cnt++;
        if(where_is>=cnt) break;
    }
    where_is-=where_cnt;
    if(where_cnt%2==1){
        a=where_cnt;
        for(int i=where_is+1;i<cnt;i++){
            a--;
            b++;
        }
        printf("%d/%d",a,b);
    }
    else
    {
        b=where_cnt;
        for(int i=where_is+1;i<cnt;i++){
            a++;
            b--;
        }
        printf("%d/%d",a,b);
    }
    
}