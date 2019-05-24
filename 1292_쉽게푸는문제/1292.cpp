#include<iostream>
using namespace std;


int start_num;
int end_num;
int arr[1001];
int sum;

int main(){
    cin>>start_num;
    cin>>end_num;
    int num=1;
    int pointer=1;
    int end_flag=0;
    while(1){
        for(int i=0;i<num;i++){
            arr[pointer]=num;
            pointer++;
            if(pointer>1000){
                end_flag=1;
                break;
            }
        }
        if(end_flag==1) break;
        num++;
    }
    for(int i=start_num;i<=end_num;i++) {
        sum+=arr[i];
    }
    cout << sum;
}