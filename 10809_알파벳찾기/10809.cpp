#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i='a';i<='z';i++){
        auto t=find(s.begin(),s.end(),i);
        if(t==s.end()){
            cout << "-1 ";
        }
        else{
            cout << t-s.begin() <<' ';
        }
    }
    return 0;
}