#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

int result=1;
int number;

//FILE * fp=fopen("10872.inp","r");

/*void factorial(int n){
    if(n==1) return;
    result*=n;
    factorial(n-1);
}*/

int main(){
    scanf("%d",&number);
    for(int i=number;i>0;i--){
        result*=i;
    }
    //factorial(number);
    printf("%d\n",result);
}