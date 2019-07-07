#include<iostream>
using namespace std;

int n;
int d[1001];
int main(){
    d[0]=1;
    d[1]=1;
    d[2]=2;
    cin >> n;
    for(int i=3;i<=n;i++){
        d[i]=d[i-1]+d[i-2];
        d[i]%=10007;
    }
    cout<<d[n];
    return 0;
}