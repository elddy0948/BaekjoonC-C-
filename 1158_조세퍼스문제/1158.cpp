#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;

queue<int> q;
int n;
int k;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int answer_cnt=n;
    printf("<");
    while(!q.empty()){
        for(int i=0;i<k-1;i++){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        printf("%d",q.front());
        q.pop();
        if(!q.empty()) printf(", ");
    }
    printf(">\n");
}