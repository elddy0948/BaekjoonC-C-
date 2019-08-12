#include<iostream>
using namespace std;

int DP[10001];
int A[10001];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    DP[1]=A[1];
    DP[2]=A[1]+A[2];
    for(int i=3;i<=n;i++){
        DP[i]=DP[i-1];
        if(DP[i]<DP[i-2]+A[i]){
            DP[i]=DP[i-2]+A[i];
        }
        if(DP[i]<DP[i-3]+A[i]+A[i-1]){
            DP[i]=DP[i-3]+A[i]+A[i-1];
        }
    }
    cout<<DP[n]<<"\n";
    return 0;
}