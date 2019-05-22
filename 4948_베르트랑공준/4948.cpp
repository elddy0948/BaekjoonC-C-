#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("4948.inp","r");

//에라토스 테네스의 체
//참고 블로그
//https://blog.naver.com/ndb796/221233595886


int int_a[270001];
bool bool_a[270001];

int n;

int answer_cnt;

int main(){
    for(int i=2;i<=270001;i++){
        bool_a[i]=true;
    }
    for(int i=2;i<270001;i++){
        if(!bool_a[i]) continue;
        for(int j=i*2;j<=270001;j+=i){
            bool_a[j]=false;
        }
    }
    while(1){
        scanf("%d\n",&n);
        if(n==0) break;
        for(int i=n+1;i<=2*n;i++){
            if(bool_a[i]!=false) answer_cnt++;
        }
        printf("%d\n",answer_cnt);
        answer_cnt=0;
    }
}