#include<iostream>
using namespace std;
int top=-1;
void push(int stack[],int max_stack,int item){
if(top==max_stack-1){
    cout<<"Stack is Overflow"<<endl;
}
else{
    top=top+1;
    stack[top]=item;
    cout<<"successful push"<<endl;
}
}
void diplay(int stack[],int a){
    for(int i=top;i>=0;i--){
cout<<stack[i]<<" ";
    }
}
int main(){

cout<<"push item.... ";
    int item,value;
    cin>>item;
    int stack[item];
    int x=sizeof(stack)/sizeof(stack[0]);
    for(int i=0;i<item;i++){
cin>>value;
push(stack,x,value);
    }
    diplay(stack,x);
    return 0;
}