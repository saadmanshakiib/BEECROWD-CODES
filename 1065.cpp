#include<iostream>
using namespace std;
int main(){
    int n,d=0;
    for(int i=1;i<=5;i++){
        cin>>n;
        if(n%2==0)
            d++;
    }
    cout<<d<<" valores pares"<<endl;
}