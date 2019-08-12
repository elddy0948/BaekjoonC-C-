#include<iostream>
using namespace std;

#define MOD 10007;
long long DP[1001][10]; // n : n자리 오르막 수 m : 마지막 자리 수

int main(){
    int n;
    cin >> n;
    for(int i=0;i<10;i++){
        DP[1][i]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<=j;k++){
                DP[i][j]+=DP[i-1][k];
                DP[i][j]%=MOD;
            }
        }
    }
    long long answer=0;
    for(int i=0;i<10;i++){
        answer+=DP[n][i];
    }
    answer%=MOD;
    cout<<answer;
    return 0;
}