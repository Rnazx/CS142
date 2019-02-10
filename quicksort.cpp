#include<iostream>
using namespace std;
//int partitions(int arr[],int pivot,int l,int h){int *ptr1=arr[0]

//}
int QS(int arr[],int low,int high)
{
    int*ptr=arr;
    if(low<high){
        int pivot = high;
        for (int i=low;i<high;i++){
        if(pivot<*(ptr+i)){
            int k=*(ptr+high-i);//store the last but ith element in a random variable
            *(ptr+high-i)=*(ptr+low);//swap the last ith but one and first element
            *(ptr+low)=k;

        }
        }
        for(int i=0;i<high;i++){//to get the pivot to the position it is meant to be
            if(*(ptr+i)>pivot){
                int l=*(ptr+i);
                *(ptr+i)=*(ptr+pivot);
                *(ptr+pivot)=l;
                break;
            }
        }

        QS(arr,low,pivot-1);QS(arr,pivot+1,high);
    }
}
int main(){
int n;
cout<<"Enter the number of elements \n";
cin>>n;
int arr[n];


cout<<"Enter the elements of the array one by one \n";
for (int i=0;i<n;i++){
    cin>>arr[i];
}
QS(arr,0,n-1);
cout<<"The sorted array is\n";
for (int i=0;i<n;i++){
    cout<<arr[i]<<"->";
}
}
