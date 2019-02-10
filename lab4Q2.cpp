#include<iostream>
#include"stack.cpp"
using namespace std;
class qus{
    public:
Node*Front;
Node*Back;
stackLL s1,s2;
qus(){
Front=NULL;
Back=NULL;

}
void Enque(int value){
    if(s1.top==NULL){
            s1.push(value);
        Front=s1.top;
        Back=s1.top;
    }
    else{
    s1.push(value);
    Back=s1.top;
}
}
void Deque(){
    Node*temp;
   while(s1.top!=NULL){
temp=s1.top;
s2.push(temp->data);
s1.pop();
}
s2.pop();
Node*temp2;
 while(s2.top!=NULL){
temp2=s2.top;
s1.push(temp2->data);
s2.pop();
}

}

};
int main(){
    qus q1;
 for(int i=0;i<5;i++){
            q1.Enque(i);}

            for(int i=0;i<4;i++){
                q1.s1.display();
                q1.Deque();

            }
}
