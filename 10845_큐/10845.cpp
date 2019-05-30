#include<iostream>
#include<string>
using namespace std;

struct Queue{
    int data[10001];
    int begin;
    int end;
    Queue(){
        begin=0;
        end=0;
    }
    void push(int n){
        data[end]=n;
        end++;
    }
    void empty(){
        if(end==begin){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
    void size(){
        cout << end-begin <<"\n";
    }
    void front(){
        if(begin==end){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<data[begin]<<"\n";
        }
    }
    void back(){
        if(begin==end){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<data[end-1]<<"\n";
        }
    }
    void pop(){
        if(begin==end){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<data[begin]<<"\n";
            begin++;
        }
    }
};
int main(){
    int command_num;
    cin>>command_num;

    Queue q;
    while(command_num--){
        string command;
        cin>>command;
        if(command=="push"){
            int n;
            cin>>n;
            q.push(n);
        }
        else if(command=="pop"){
            q.pop();
        }
        else if(command=="size"){
            q.size();
        }
        else if(command=="front"){
            q.front();
        }
        else if(command=="empty"){
            q.empty();
        }
        else if(command=="back"){
            q.back();
        }
    }
}