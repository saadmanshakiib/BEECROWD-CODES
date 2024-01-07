#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t;
int l1=pow(-10,7);
int l2=pow(10,7);
cin>>t;
int n;
for(int i=1;i<=t;i++){
    cin>>n;
    if(l1<n<l2){
if(n>0 && n%2==0)
cout<<"EVEN POSITIVE"<<endl; 
if(n>0 && n%2!=0)
cout<<"ODD POSITIVE"<<endl;
if(n<0 && n%2==0)
cout<<"EVEN NEGATIVE"<<endl;
if(n<0 && n%2!=0)
cout<<"ODD NEGATIVE"<<endl;
if(n==0)
cout<<"NULL"<<endl;
    } 
}
}


        