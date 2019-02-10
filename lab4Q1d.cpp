#include<iostream>
using namespace std;
class QueueArr{//define class
public:
    // maxsize=100;
    int arr[100];
    int Front = -1;
    int Back = 0;


   //enque function
   void enque(int value){
   //convert arr to ptr
   Front++;
   arr[Front]=value;
   }
   //pop
   void Deque(){
   Back++;
   }
   //display
   void display(){
       int i=Back;
   while(i<=Front){
    cout<<arr[i]<<"->";
    i++;
   }

   cout<<endl;
   }
   //

};
int main(){
    QueueArr q1;

    for(int k=0;k<5;k++){
        q1.enque(k);
    }
    for(int j=0;j<3;j++){
        q1.Deque();
        q1.display();
    }

return 0;
}
