//#include<iostream>
//using namespace std;
//int main{
//   int arr[]={20,30,40,50,60,70,80};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int key=70;
//   int low=0;
//   int high=n-1;
//   while(low<=high){
//    int mid=low+(high-low)/2;
//    if(arr[mid]==key){
//        cout<<key<<endl;
//        return 0;
//    }else if(arr[mid]<key){
//        low=mid+1;
//    }else{
//        high=mid-1;
//  }
//   }
//   cout<<"element not found"<<end l;
//   return 0;

    
//}  
#include<iostream>
using namespace std;
int main(){
    int arr[]={33,55,66,11,22};
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
       }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }  
    return 0;
}  