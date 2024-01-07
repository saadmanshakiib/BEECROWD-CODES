#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
int n;
int c1=0,c2=0;
int l1 = pow(-10,7);
int l2 = pow(10,7);
if(t<10000){
for(int i=1;i<=t;i++){
    cin>>n;
if(l1<n<l2){
    if(n>=10 && n<=20){
 c1++;   
}
else{
c2++;
}
}
}
cout<<c1<<" in"<<endl;
cout<<c2<<" out"<<endl;
}
}