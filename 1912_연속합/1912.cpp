#include<iostream>
using namespace std;

int A[100001];
int DP[100001];

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    DP[0]=A[0];
    for(int i=1;i<N;i++){
        if(DP[i-1]+A[i]>A[i]){
            DP[i]=DP[i-1]+A[i];
        }
        else{
            DP[i]=A[i];
        }
    }
    int answer=DP[0];
    for(int i=0;i<N;i++){
        if(answer<DP[i]) answer=DP[i];
    }
    cout<<answer;
}