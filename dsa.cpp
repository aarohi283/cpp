#include<iostream>
using namespace std;
int main(){
   int arr[]={20,30,40,50,60,70,80};
   int n=sizeof(arr)/sizeof(arr[0]);
   int key=70;
   int low=0;
   int high=n-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==key){
        cout<<key<<endl;
        return 0;
    }else if(arr[mid]<key){
        low=mid+1;

    }else{
        high=mid-1;
    }
   }
   cout<<"element not found"<<endl;
   return 0;
}    