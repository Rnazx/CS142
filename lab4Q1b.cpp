#include<iostream>
#include"bleh.cpp"
using namespace std;
class QueueLL{
    public :

    Node *Front;
    Node *End;
    LinkedList l1;
    QueueLL(){
    Front=NULL;
    End=NULL;
    }
    //insert at pos 1
    void enqueue(int value){
        //get it from prev prog
         if(Front==NULL){
        l1.inset(value);}
        else{
            l1.insertAt(1,value);
        }


        //top =new head;
        End=l1.head;
        Front=l1.tail;
    }
    //delete at pos 1
    void dequeue(){
    l1.delet();
    }
    bool isEmpty(){
    if(Front ==NULL) return true;
    return false;
    }
    int size(){
        return l1.counts();
    }
    int topDisplay(){
        return l1.tail->data;
    }
    void display(){
        l1.display();
    }

};
/*int main(){
    QueueLL q1;

    for(int i=0;i<5;i++){
            q1.enqueue(i);}
            for(int i=0;i<4;i++){
                q1.display();
                cout<<"The size of the Queue is: "<<q1.size()<<endl;
                q1.dequeue();

            }
            cout<<"The topmost element is "<<q1.topDisplay()<<endl;
            if(q1.isEmpty()==true) cout<<"The stack is empty\n";
            cout<<"The stack is not empty\n";
}*/

