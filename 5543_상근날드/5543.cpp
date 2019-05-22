#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("5543.inp","r");
int price[5];
int set_price;
int min_price=1000000;
int main(){
    int ham=0;
    for(int i=0;i<5;i++){
        scanf("%d",&ham);
        price[i]=ham;
    }
    //0 = sang  1 = jung 2 = ha 3 = coke 4 = sprite
    //set price = -50
    for(int i=0;i<3;i++){
        set_price=price[i]+price[3]-50;
        int temp=price[i]+price[4]-50;
        if(set_price>temp) set_price=temp;
        if(min_price>set_price) min_price=set_price;
    }
    printf("%d\n",min_price);
}