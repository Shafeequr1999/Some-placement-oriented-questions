#include<iostream>
using namespace std;
int main(){
int arr[] = {1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
int f=0,r=size-1;
int n=9;
while(f<r){
    if(arr[f]+arr[r]==n){
        cout<<arr[f]<<" "<<arr[r];
        f++;
        r--;
    }
    else if(arr[f]+arr[r]>n){
        r--;
    }
    else{
        f++;
    }
}
return 0;
}