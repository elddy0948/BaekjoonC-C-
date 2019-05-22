#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("5565.inp","r");

int total_price;
int price;

int main(){
    scanf("%d",&total_price);
    for(int i=0;i<9;i++){
        scanf("%d",&price);
        total_price-=price;
    }
    printf("%d\n",total_price);
}