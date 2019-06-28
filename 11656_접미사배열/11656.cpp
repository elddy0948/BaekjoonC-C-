#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    string cutting[1000];
    cin >> s;
    int len=s.size();
    for(int i=0;i<len;i++){
        cutting[i]=s.substr(i,len);
    }
    sort(cutting,cutting+len);
    for(int i=0;i<len;i++){
        cout<<cutting[i]<<"\n";
    }
    return 0;
}