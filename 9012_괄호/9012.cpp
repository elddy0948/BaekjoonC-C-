#include<iostream>
#include<cstdio>
using namespace std;

int stack_size;
int test_case;
int flag;
int main(){
    cin >> test_case;
    for(int i=0;i<test_case;i++){
        string bracket;
        cin>>bracket;
        for(int i=0;i<bracket.size();i++){
            if(bracket[i]=='('){
                //stack in!
                stack_size++;
            }
            else if(bracket[i]==')'){
                //stack out!
                stack_size--;
            }
            if(stack_size<0){
                cout << "NO\n";
                flag=1;
                break;
            }
        }
        if(flag==0){
            if(stack_size==0) cout << "YES\n";
            else cout << "NO\n";
        }
        stack_size=0;
        flag=0;
    }
}