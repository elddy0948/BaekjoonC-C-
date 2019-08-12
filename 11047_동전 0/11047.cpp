#include<iostream>
using namespace std;

long long money[11];
int N;
long long K;
int answer;

int main(){
    cin>>N>>K;
    for(int i=0;i<N;i++){
        long long m;
        cin>>m;
        money[i]=m;
    }
    for(int i=N-1;i>=0;i--){
        while(1){
            if(money[i]<=K){
                K-=money[i];
                answer++;  
            }
            else break;
        }
    }
    cout<<answer;
}