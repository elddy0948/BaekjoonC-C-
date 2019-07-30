#include<iostream>
using namespace std;

int A[1001];
int DP[1001];

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        DP[i]=1;
        for(int j=0;j<i;j++){
            if(A[j]<A[i] && DP[i]<DP[j]+1){
                DP[i]=DP[j]+1;
            }
        }
    }
    int answer=DP[0];
    for(int i=0;i<N;i++){
        if(answer<DP[i]){
            answer=DP[i];
        }
    }
    cout<<answer;
    return 0;
}