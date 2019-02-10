#include<iostream>
#include"lab4Q1b.cpp"
using namespace std;
class suq{
    public:
Node*top;
QueueLL q1;
suq(){
top=NULL;

}
void push(int value){
    q1.enqueue(value);
    top=q1.End;

}
void pop(){
    Node*temp;
    for (int i=1;i<(q1.size())-1;i++){
        temp=q1.Front;
        q1.enqueue(temp->data);
        q1.dequeue();

    }
    q1.dequeue();

}



};
int main(){
    suq s1;

    for(int i=0;i<5;i++){
            s1.push(i);}
            for(int i=0;i<3;i++){
                s1.q1.display();
                s1.pop();
            }

}
