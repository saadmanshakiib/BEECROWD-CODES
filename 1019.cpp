#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h = n/3600;
     n = n%3600;
    int m = n/60;
     n = n%60;
    cout<<h<<":"<<m<<":"<<n<<endl; 
}