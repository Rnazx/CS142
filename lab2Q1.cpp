#include<iostream>
using namespace std;
class Node{
    public:
    //data
    int data;
    //pointer to the next node
    Node * next;
    //contructor that makes the pointer to null
    Node(){
    next = NULL;
    }

};
class LinkedList{
    //head+circles inside linked each other
    public:
    //head-->circle type pointer
    Node * head;
    Node *tail;
    //contruct
    LinkedList(){
    head=NULL;
    tail=NULL;
    }
    //circles inside linked to each other
    //rules how circles will be linked
    //insert
    void inset(int value){
    //if 1st node is added
    Node * temp = new Node;
    //data is added to thge node
    temp->data = value;
    //write current node
    Node * current=head;


    //1st Node only
    if(head==NULL){
    head = temp;

    }
    //any other node
    else{
        tail->next = temp;
       }
        tail = temp;
    }
    //count function
  int counts() {

	Node *current = head;
	int k = 1;
	while (current -> next != NULL) {
	k++;
	current = current -> next;
	}

	return k;
	}
    //deletion
    void delet(){
    //store tail in temp
    Node* temp = tail;
    //before tail has to point to null
    Node * current = head;
    while(current->next!=tail){
    current = current->next;
    }
    current->next = NULL;
    //update tail
    tail = current;
    //delete temp
    delete temp;
    }
    //insert at
    //delete at function
    void deleteAt(int pos){
    Node*current = head;
    int i=0;
    //point current to the node you wanna delete
    if (pos!=1){
    while(i<pos){
            i++;
            current = current->next;
        }
        Node *temp=current->next;
        current->next=temp->next;
        delete temp;
    }
    else {
        delete current;
    }


    }

    void insertAt(int pos, int value){
    //reach the place befor the pos
    Node*current = head;
    int i=1;
    while(i<pos){
            i++;
            current = current->next;
            if(current->next==NULL){
                cout<<"There arent that many positions ";
                break;
            }
        }
        if (current->next!=NULL) {
        //create a node
        Node * temp = new Node;
        temp->data = value;
        temp ->next = current->next;
        current->next = temp;
        }
        //pos=1
        //if pos == 1

	else {
	Node * temp = new Node;
    temp->data = value;
    temp->next = current;
    head = temp;

    }
    }
    //display
    void display(){
    Node*current = head;
    while(current != NULL){
        cout<<current->data<<"->";
        current = current->next;
        }
    }

};
    int main(){
        int c;
        LinkedList l1;
        l1.inset(1);
        l1.inset(2);
        l1.inset(3);
        l1.inset(4);
        l1.display();
        l1.delet();
        l1.display();
        l1.insertAt(3,8);
        l1.display();
        l1.insertAt(1,6);
        l1.display();

	l1.deleteAt(3);
	l1.display();
	c = l1.counts();
	cout<<"The number of nodes are "<<c<<" .\n";

	l1.inset(2);
	l1.display();
	l1.deleteAt(1);
	l1.display();


	l1.insertAt(6,8);
	l1.display();

    return 0;
}
