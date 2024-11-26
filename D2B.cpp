#include<iostream>
using namespace std;

int main(){
    int DN;
    cout<<"enter your number"<<endl;
    cin>>DN;
    int ans=0;
    int pow=1;

while(DN>0){


   int rem=DN%2;
   DN=DN/2;

   ans=ans+(rem*pow);
   pow=pow*10;

   
}
cout<<ans;
    return 0;
}