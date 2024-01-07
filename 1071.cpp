#include<iostream>
using namespace std;
int main(){
    int a,b,s=0;
    cin>>a>>b;
    if(a>b){
        for(int i=b+1;i<a;i++){
            if(i%2!=0){
            s=s+i;
            }
        }
    
    cout<<s<<endl;
    }
    else if(b>a){
        for(int i=a+1;i<b;i++){
            if(i%2!=0){
            s=s+i;}
        }
    
            cout<<s<<endl;
    }

    if(a==b){
        cout<<"0"<<endl;
    }
    
}