#include<iostream>
using namespace std;

#define MOD 1000000000
long long d[101][10];

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=9;i++){
        d[1][i]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            d[i][j]=0;
            if(j-1>=0){
                d[i][j]+=d[i-1][j-1];
            }
            if(j+1<=9){
                d[i][j]+=d[i-1][j+1];
            }
            d[i][j]%=MOD;
        }
    }
    long long answer=0;
    for(int i=0;i<=9;i++){
        answer+=d[n][i];
    }
    answer%=MOD;
    cout<<answer<<'\n';
    return 0;
}