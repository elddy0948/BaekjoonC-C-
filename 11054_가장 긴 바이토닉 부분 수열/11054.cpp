#include<iostream>
 using namespace std;


int A[1001];
int DP[1001];
int DP2[1001];

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    //가장 긴 증가하는 부분 수열
    for(int i=0;i<N;i++){
        DP[i]=1;
        for(int j=0;j<i;j++){
            if(A[j]<A[i] && DP[i]<DP[j]+1){
                DP[i]=DP[j]+1;
            }
        }
    }
    //가장 긴 감소하는 부분 수열
    for(int i=N-1;i>=0;i--){
        DP2[i]=1;
        for(int j=N-1;j>=i;j--){
            if(A[j]<A[i] && DP2[i]<DP2[j]+1){
                DP2[i]=DP2[j]+1;
            }
        }
    }
    int answer=0;
    for(int i=0;i<N;i++){
        if(answer<DP[i]+DP2[i]-1){
            answer=DP[i]+DP2[i]-1;
        }
    }
    cout<<answer;
}