#include<iostream>
using namespace std;
int main(){
    int a;
    while(1){
        cin>>a;
        for(int i=1;i<a;i++){
            cout<<i<<" ";
        }
        if(a>0)
        cout<<a<<endl;
        if(a==0)
        break;
    }
}