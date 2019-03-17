#include<iostream>
using namespace std;
class Node{//class node
    public:
int data;
Node*left;
Node*right;
Node(int val){//constructor for class node in which we can input some value
    data=val;
    left=NULL;
    right=NULL;

}
};
class BiST{//class binary search tree
    public:
Node*root;
BiST(){//constructor
root=NULL;
}
//inssert function
void Insert(int data){
    Insert2(root , data);
}
void Insert2(Node*curr,int value){
    if (curr==NULL){//when the tree is empty
        curr=new Node(value);
        root=curr;
    }
    else if (value<curr->data){//if the value is less than the current node
        if (curr->left==NULL)curr->left=new Node(value);
        else Insert2(curr->left,value);
    }
      else {// if value is more or equal to
        if (curr->right==NULL)curr->right=new Node(value);
        else Insert2(curr->right,value);
    }
}
//display function
void Display(){
Display2(root);
}
void Display2(Node*curr){
    if(curr==NULL)return;// case when current moves to null recursion is called
    Display2(curr->left);//first go left
    cout<<curr->data<<",";//display value
    Display2(curr->right);//go right
}
//search function
Node * Search(int value){

    if (Search2(root,value)==NULL){cout<<"The value is not in the tree\n";}//case for value not in tree
 else return Search2(root,value);
}
Node*Search2(Node*curr,int val){

    if(curr==NULL||curr->data==val)return curr;//case forif we find that value or we dont find that value
    else if(val<curr->data) return Search2(curr->left,val);//searh on the left side
        else  return Search2(curr->right,val);//search on right side

}


};
int main(){
BiST b1;
b1.Insert(7);
b1.Insert(8);
b1.Insert(3);
b1.Insert(6);
b1.Insert(5);
b1.Display();

cout<<b1.Search(8)->data;
cout<<b1.Search(19)->data;


}
