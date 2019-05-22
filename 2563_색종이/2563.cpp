#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

//FILE * fp=fopen("2563.inp","r");
int paper_count;
int paper[101][101];
int height;
int width;
int answer;

int main(){
    scanf("%d",&paper_count);
    while(paper_count--){
        scanf("%d %d",&width,&height);
        for(int i=width;i<width+10;i++){
            for(int j=height;j<height+10;j++){
                paper[i][j]=1;
            }
        }
    }
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            if(paper[i][j]==1) answer++;
        }
    }
    printf("%d",answer);
}