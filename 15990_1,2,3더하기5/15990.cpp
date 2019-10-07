#include<iostream>
using namespace std;
//1,000,000,009
//100,000
//DP[i][j] = i를 1,2,3의 합으로 나타내는 방법의 수 마지막에 사용한 수는 j

long long DP[100001][4];
int test_case;
int N;

int main(){
    cin>>test_case;
    DP[1][1]=1;
    DP[2][2]=1;
    DP[3][3]=1;
    DP[3][1]=1;
    DP[3][2]=1;
    for(int i=4;i<=100000;i++){
        DP[i][1]=DP[i-1][2]+DP[i-1][3];
        DP[i][2]=DP[i-2][1]+DP[i-2][3];
        DP[i][3]=DP[i-3][1]+DP[i-3][2];
        DP[i][1]%=1000000009;
        DP[i][2]%=1000000009;
        DP[i][3]%=1000000009;
    }
    while(test_case--){
        cin>>N;
        cout<<(DP[N][1]+DP[N][2]+DP[N][3])%1000000009<<"\n";
    }
}