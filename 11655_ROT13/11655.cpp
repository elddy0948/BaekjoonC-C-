#include<iostream>
#include<string>
using namespace std;

string s;
int main(){
    getline(cin,s);
    int size_s=s.length();
    for(int i=0;i<=size_s;i++){
        if(s[i]>='A' && s[i]<='Z'){
            // 대문자
            s[i]+=13;
            if(s[i]>90){
                s[i]-=26;
            }
        }
        else if(s[i]>='a' && s[i]<='z'){
            //소문자
            int k=s[i];
            k+=13;
            if(k>122) {
                k-=26;
                s[i]=k;
            }
            else{
                s[i]=k;
            }
        }
    }
    cout << s <<'\n';
}