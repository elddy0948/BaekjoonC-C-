#include<iostream>
using namespace std;

int vertex;
int edge;
int tc;
int answer;

int main(){
    cin>>tc;
    while(tc--){
        cin>>vertex;
        cin>>edge;
        answer=2+edge-vertex;
        cout << answer <<"\n";
    }
}