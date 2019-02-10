//stack and queue
#include<iostream>
#include"bleh.cpp"
using namespace std;

class stackLL{
    public :
    Node *top;
    LinkedList l1;
    stackLL(){
    top=NULL;
    }
    //insert at pos 1
    void push(int value){
        //get it from prevprog
        if(top==NULL){
        l1.inset(value);}
        else{
            l1.insertAt(1,value);
        }

        //top =new head;
        top=l1.head;
    }
    //delete at pos 1
    void pop(){
        l1.deleteAt(1);
        top=l1.head;
    }

    bool isEmpty(){
    if(top ==NULL) return true;
    return false;
    }
    int size(){
        return l1.counts();
    }
    int topDisplay(){
        return l1.head->data;
    }
    void display(){
        l1.display();
    }

};



/*int main(){
    stackLL s1;

    for(int i=0;i<5;i++){
            s1.push(i);}
            for(int i=0;i<3;i++){
                s1.display();
                cout<<"The size of the Stack is: "<<s1.size()<<endl;
                s1.pop();
            }
            cout<<"The topmost element is "<<s1.topDisplay()<<endl;
            if(s1.isEmpty()==true) cout<<"The stack is empty\n";
            cout<<"The stack is not empty\n";
}*/
