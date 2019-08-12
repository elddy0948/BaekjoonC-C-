#include<iostream>
using namespace std;

int input[1001];
int sum_time[1001];

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quick_sort(int left, int right, int *data){
    int pivot=left;
    int j=pivot;
    int i=left+1;

    if(left<right){
        for(;i<=right;i++){
            if(data[i]<data[pivot]){
                j++;
                swap(&data[j],&data[i]);
            }
        }
        swap(&data[left],&data[j]);
        pivot=j;
        quick_sort(left,pivot-1,data);
        quick_sort(pivot+1,right,data);
    }
}

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int time;
        cin >> time;
        input[i]=time;
    }
    quick_sort(0,N-1,input);
    for(int i=0;i<N;i++){
        if(i==0){
            sum_time[i]=input[i];
        }
        else{
            sum_time[i]=sum_time[i-1]+input[i];
        }
    }
    int answer=0;
    for(int i=0;i<N;i++){
        answer+=sum_time[i];
    }
    cout << answer;
}