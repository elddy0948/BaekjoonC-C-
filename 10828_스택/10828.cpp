#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

//FILE * fp=fopen("10828.inp","r");
int command_count;

struct Stack{
    int stack_data[10001];
    int size;
    Stack(){
        size=0;
    }
    void push(int n){
        stack_data[size]=n;
        size++;
    }
    int empty(){
        if(size==0) return 1;
        else return 0;
    }
    int pop(){
        if(empty()==1){
            //it's empty stack!!
            return -1;
        }
        else{
            size--;
            return stack_data[size];
        }
    }
    int stack_size(){
        return size;
    }
    int top(){
        if(empty()==1){
            //it's empty stack!!
            return -1;
        }
        else{
            return stack_data[size-1];
        }
    }
};

int main(){
    //push pop size empty top
    string command;
    Stack s;
    cin >> command_count;
    for(int i=0;i<command_count;i++){
        cin >> command;
        if(command=="push"){
            int num;
            cin >> num;
            s.push(num);
        }
        else if(command=="pop"){
            cout << s.pop() <<'\n';
        }
        else if(command=="size"){
            cout << s.stack_size() << '\n';
        }
        else if(command=="top"){
            cout << s.top() << '\n';
        }
        else if(command=="empty"){
            cout << s.empty() << '\n';
        }
    }
}