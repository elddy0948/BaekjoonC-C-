#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>

using namespace std;

//FILE * fp=fopen("5585.inp","r");

int received_money;
int charge_money;
int having_money[6]={500,100,50,10,5,1};
int cnt;
int answer_cnt;

int main(){
    scanf("%d",&received_money);
    charge_money=1000-received_money;
    for(int i=0;i<6;i++){
        cnt+=charge_money/having_money[i];
        charge_money-=having_money[i]*cnt;
        answer_cnt+=cnt;
        cnt=0;
    }
    printf("%d",answer_cnt);
}