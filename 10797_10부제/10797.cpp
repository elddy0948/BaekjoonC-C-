#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("10797.inp","r");
int what_day;
int car_number;
int cnt;

int main(){
    scanf("%d",&what_day);
    for(int i=0;i<5;i++){
        scanf("%d",&car_number);
        if(car_number==what_day) cnt++;
    }
    printf("%d\n",cnt);
}