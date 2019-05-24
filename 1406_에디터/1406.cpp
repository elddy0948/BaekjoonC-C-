#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;

char a[1000001];
stack<char> left,right;
void L(){
    if(!left.empty()){
        right.push(left.top());
        left.pop();
    }
}
void D(){
    if(!right.empty()){
        left.push(right.top());
        right.pop();
    }
}
void B(){
    if(!left.empty()){
        left.pop();
    }
}
void P(char c){
    left.push(c);
}

int main(){
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++){
        left.push(a[i]);
    }
    int command_count;
    scanf("%d",&command_count);
    while(command_count--){
        char command;
        scanf(" %c",&command);
        if(command=='L') L();
        else if(command=='D') D();
        else if(command=='B') B();
        else if(command=='P'){
            char c;
            scanf(" %c",&c);
            P(c);
        }
    }
    while (!left.empty()) {
        right.push(left.top());
        left.pop();
    }
    while (!right.empty()) {
        printf("%c",right.top());
        right.pop();
    }
    printf("\n");
}

