#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("5597.inp","r");
int answer[31];
int student_num;

int main(){
    for(int i=0;i<28;i++){
        scanf("%d",&student_num);
        answer[student_num]=1;
    }
    for(int i=1;i<31;i++){
        if(answer[i]==0) printf("%d\n",i);
    }
}