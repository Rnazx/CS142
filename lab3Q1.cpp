#include<iostream>
using namespace std;
class Node{
    public:
    //data
    int data;
    //pointer to the next node
    Node * next;
    Node * prev;
    //contructor that makes the pointer to null
    Node(){
    next = NULL;
    prev = NULL;
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



    //1st Node only
    if(head==NULL){
    head = temp;
    tail = temp;
    }
    //any other node
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;

       }

    }
    //count function
  int counts() {

	Node *current = head;
	int k = 1;
	while (current!= NULL) {
	k++;
	current= current->next;
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
    cout<<endl;
    }
    //insert at
    //delete at function
    void deletionAt(int pos)
		{
			// condition for deleting first node
			if(pos==1)
			{
				// temp = head
				Node *temp = head;
				head = head->next;

				//delete temp
				delete temp;
			}

			else
			{
				//set current pointer as head
				Node *current = head;
				//move current pointer upto position just before the node to be deleted
				int i=1;
				while(i<pos-1)
				{
					i++;
					current = current->next;
				}
				//set temp pointer as node to be deleted
				Node *temp = new Node;
			        temp = current->next;

			        //re-establish link
			        current->next = temp->next;           //forward link
			        temp->next->prev = current;           //backward link

			        //delete temp
			        delete temp;
		         }
		    cout<<endl;
		}

    void insertAt(int pos, int value){
    //reach the place befor the pos
    Node*current = head;
    int i=0;
    while(current!=NULL){
            i++;
            current = current->next;
           }
         if(pos>i){
                cout<<"There aren't that many positions ";
            }
        else
			{
				//to add node at first position
				if(pos == 1)
				{
					//create new node
					Node *temp = new Node;
					//set value as data of the node
					temp->data = value;
					//modify links
					temp->next = head;    //forward link
					head->prev = temp;          //backward link
					//update head
					head = temp;
				}

				else
				{
					//set current pointer as head
					Node *current = head;
					//current pointer goes upto node just before the position (set as parameter)
					int i=1;
					while(i<pos-1)
					{
						i++;
						current=current->next;
					}
					//new node is created
					Node *temp = new Node;

					//sets value as data of the node
					temp->data = value;

					//links re-established
					temp->next = current->next;          //forward link
					current->next = temp;                //forward link
					temp->next->prev = temp;             //backward link
					temp->prev = current;                //backward link
			         }
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
        l1.insertAt(1,7);
        l1.display();
        l1.deletionAt(1);
        l1.display();
        	c = l1.counts();
	cout<<"The number of nodes are "<<c<<" .\n";



    return 0;
}
