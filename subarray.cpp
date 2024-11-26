//FIND OUT SUBARRAYS OF ARRAY

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);


//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,-5};                  // time complexicity is O(n^2)//
    int n=sizeof(arr)/sizeof(arr[0]);      
                                             // WE WILL REDUCE THE TIME COMPLEXCITY OF SUM OF SUBARRAY PROGRAM
                                         // BY KADANE METHOD 
    int maxSum=INT16_MIN;

    for(int st=0;st<n;st++){
         int currSum=0;
        for(int end=st;end<n;end++){
             currSum+=arr[end];
             maxSum=max(currSum,maxSum);

        }
    }
    cout<<maxSum;
    return 0;
}