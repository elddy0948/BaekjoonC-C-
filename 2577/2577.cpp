#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<math.h>

int a;
int b;
int c;
int result;
int counter;
int remain;
int answer[10];
int start;
int pow_ten;

int main(){
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    result=a*b*c;
    for(int i=9;i>0;i--){
        pow_ten=pow(10,i);
        if(result/pow_ten!=0){
            start=i;
            break;
        }
    }
    remain=result;
    for(int i=start;i>-1;i--){
        pow_ten=pow(10,i);
        remain=result/pow_ten;
        if(remain>10){
            continue;
        }
        answer[remain]++;
        result=result%pow_ten;
    }
    for(int i=0;i<10;i++){
        printf("%d\n",answer[i]);
    }
}