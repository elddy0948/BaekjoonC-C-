#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>

using namespace std;

//FILE * fp=fopen("10886.inp","r");

int survey_people;
int vote;
int yes_cnt; // 1
int nope_cnt; // 0

int main(){
    scanf("%d",&survey_people);
    for(int i=0;i<survey_people;i++){
        scanf("%d",&vote);
        if(vote==1) yes_cnt++;
        else nope_cnt++;
    }
    if(yes_cnt>nope_cnt) printf("Junhee is cute!");
    else printf("Junhee is not cute!");
}