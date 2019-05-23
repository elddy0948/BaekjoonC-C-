#include<iostream>
#include<string>
using namespace std;
//https://www.acmicpc.net/problem/10799
string s;
int pipe_counter;
int laser_counter;
int answer;


int main(){
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('&&s[i+1]==')'){
            //it's laser!!
            i++;
            answer+=pipe_counter;
        }
        else if(s[i]=='('){
            //it's start of pipe
            pipe_counter++;
        }
        else if(s[i]==')'){
            //it's end of pipe
            answer++;
            pipe_counter--;
        }
    }
    cout << answer;
}