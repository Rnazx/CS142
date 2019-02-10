#include<iostream>
using namespace std;
class StackArr{//define class
public:
    // maxsize=100;
    int arr[100];
    int top=-1;


   //push
   void push(int value){
   //convert arr to ptr
   top++;
   arr[top]=value;
   }
   //pop
   void pop(){
   top--;
   }
   //display
   void display(){
       int i=0;
   while(i<=top){
    cout<<arr[i]<<"->";
    i++;
   }

   cout<<endl;
   }
   //

};
int main(){
    StackArr s1;

    for(int k=0;k<5;k++){
        s1.push(k);
    }
    for(int j=0;j<3;j++){
        s1.pop();
        s1.display();
    }

return 0;
}
