#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("5063.inp","r");
int test_case;
int donot_advertise;
int do_advertise;
int advertise_price;
int advertise;

int main(){
    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++){
        scanf("%d %d %d",&donot_advertise,&do_advertise,&advertise_price);
        advertise=do_advertise-advertise_price;
        if(donot_advertise>advertise) printf("do not advertise\n");
        else if(donot_advertise<advertise) printf("advertise\n");
        else if(donot_advertise==advertise) printf("does not matter\n");
    }
}