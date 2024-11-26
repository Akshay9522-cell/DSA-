#include<iostream>
using namespace std;

int main(){
    
  int arr[]={-2,1,-3,4};
  int n=sizeof(arr)/sizeof(arr[0]);

  int currSum=0;int maxSum=0;

  for(int i=0; i<n;i++){
    currSum +=arr[i];
    maxSum=max(currSum,maxSum);
    if(currSum<0){
        currSum=0;
    }
  }
  cout<<maxSum;
    return 0;
}