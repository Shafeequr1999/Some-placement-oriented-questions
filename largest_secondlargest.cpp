#include<iostream>
using namespace std;
#define MIN 0
void print2largest(int arr[],int size){
    int i,first,second;
    first=second=MIN;
    for(int i=0;i<size;i++){
       if(arr[i]>first){
           second=first;
           first=arr[i];
       } 
       else if(arr[i]>second && arr[i]!=first){
           second=arr[i];
       }
       if(second==MIN)
       cout<<"No largest element";
       else
       cout<<"Largest element"<<first;
       cout<<"\nSecond largest element"<<second;

    }
}
int main(){
int arr[]={13,4,1,10,3,6};
int n=sizeof(arr)/sizeof(arr[0]);
print2largest(arr,n);
return 0;
}