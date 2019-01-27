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
    head->next=head;

    }
    //any other node
    else{
        tail->next = temp;
       }
        tail = temp;
        tail->next=head;
    }
    //count function
  int counts() {

	Node *current = head;
	int k = 1;
	while (current -> next != head) {
	k++;
	current->next = current;
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
    //make the last elements pointer point to head
    current->next = head;
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
        if(current->next==NULL){
            current->next=head;
        }
        delete temp;
    }
    else {
        delete current;
    }


    }


    void insertAt(int pos, int value)
		{
			int count = 1;
			//move current pointer till node just before last node
			Node *current = head;
			while(current != tail)
			{
				count++;
				current = current->next;
			}

			if(pos>count+1)
			{
				cout<<endl;
				cout<<"There are not that many elements\n";
			}

			else
			{
				//to add node at first position
				if(pos == 1)
				{
					//create new node
					Node *temp = new Node;
					//set data of new node as value
					temp->data = value;
					//modify tail pointer to point to new node
					tail->next = temp;
					//link new node to head
					temp->next = head;
					//update head
					head = temp;
				}

				else
				{
					//create new node
					Node *temp = new Node;
					//set data of the node as value
					temp->data = value;
					//move current pointer upto node just before position
					Node *current = head;
					int i = 1;
					while(i<pos-1)
					{
						i++;
						current = current->next;
					}
					//modify links
					temp->next = current->next;
					current->next = temp;
				}
			}



    }
    //display
    void display(){
    Node*current = head;
    while(current->next != head){
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
        	c = l1.counts();
	cout<<"The number of nodes are "<<c<<" .\n";



    return 0;
}
