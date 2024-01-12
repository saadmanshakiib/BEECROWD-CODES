#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a[3];
int x,y,z;
for(int i=0;i<3;i++)
{
cin>>a[i];
}
x = a[0];
y = a[1];
z = a[2];
sort(a,a+3);
for(int i=0;i<3;i++)
{
cout<<a[i]<<endl;
}
cout<<endl;
cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
}