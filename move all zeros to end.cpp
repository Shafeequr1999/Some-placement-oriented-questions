#include<iostream>
using namespace std;
int pushzerostoend(int arr[],int n)
{
    int count=0; int i;
    for(int i=0;i<n;i++)
        if(arr[i]!=0)
        arr[count++]=arr[i];
        while(count<n)
            arr[count++]=arr[i];
        
    
}
int main(){
    int arr[]={1,0,5,0,9,0,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    pushzerostoend(arr,n);
    cout<<"Array after pushing is";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
