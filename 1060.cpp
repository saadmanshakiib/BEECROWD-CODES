#include<iostream>
using namespace std;
int main(){
    double a[6];
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    int d=0;
for(int i=0;i<6;i++){
        if(a[i] > 0)
            d++;
    }    
    cout<<d<<" valores positivos"<<endl;
}