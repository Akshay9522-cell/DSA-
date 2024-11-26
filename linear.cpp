// it is a collection of data member and statment or code

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int n,int target){

// for(int i=0;i<n;i++){
//   if(arr[i]==target){
//     return i;
//   }
// }
// return -1;
// }


// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int target;
//     cout<<linearSearch(arr,n,4);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void reverse(int arr[],int n){
//     int s=0;
//     int e=n-1;

//     while(s<e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }

// int main(){
//     int arr[]={50,40,30,20,10};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     reverse(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
 int arr[]={1,2,4,5,6,4,2,1,5};
 int n=sizeof(arr)/sizeof(arr[0]);

 int ans=0;

 for(int i=0;i<n;i++){
    ans=ans^arr[i];
   
 }
  cout<<ans;
    return 0;
}