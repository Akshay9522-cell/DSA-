#include<iostream>
using namespace std;

int main(){
    int BN;
    cout<<"enter binary number"<<endl;
    cin>>BN;
   
   
   int ans=0;
   int pow=1;
while(BN>0){


   int rem=BN%2;
   ans+=(rem*pow);

   BN/=10;
   pow*=2;
}
cout<<ans;
    return 0;
}