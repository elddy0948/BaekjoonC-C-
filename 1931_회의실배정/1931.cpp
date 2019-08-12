#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
int answer;
vector<pair<long long, long long> >v;
int main(){
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    long long end_t=0;
    for(int i=0;i<N;i++){
        if(end_t<=v[i].second){
            end_t=v[i].first;
            answer++;
        }
    }
    cout<<answer;
    return 0;
}