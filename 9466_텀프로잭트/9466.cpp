#include<iostream>
#include<cstring>// memset
using namespace std;

const int MAX=100001;

int student[MAX];
int want_student[MAX];
int they_are_team;
bool visited[MAX];
bool finish[MAX];

void DFS(int student_number){
    visited[student_number]=true;
    int next_student=want_student[student_number];
    if(!visited[next_student]) DFS(next_student);
    else if(!finish[next_student]){
        for(int i=next_student;i!=student_number;i=want_student[i]){
            they_are_team++;
        }
        they_are_team++;
    }
    finish[student_number]=true;
    return;
}
int main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        //cout<<"Test_case "<<test_case<<"\n";
        memset(student,0,sizeof(student));
        memset(want_student,0,sizeof(want_student));
        memset(visited,0,sizeof(visited));
        memset(finish,0,sizeof(finish));
        they_are_team=0;
        int how_many_student;
        cin>>how_many_student;
        for(int i=1;i<=how_many_student;i++){
            int wanted_student;
            cin>>wanted_student;
            want_student[i]=wanted_student;
        }
        for(int i=1;i<=how_many_student;i++){
            if(!visited[i]) DFS(i);
        }
        cout<<how_many_student-they_are_team<<"\n";
    }
}