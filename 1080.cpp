#include<iostream>
using namespace std;
int main(){
    int n[100];
    for(int i=0;i<100;i++){
        cin>>n[i];
    }
    int c1=0;
            int m = n[0]; 
for(int i=0;i<100;i++){
        if(m < n[i]){
            m=n[i];
         c1 = i+1;
        }
    }
    cout<<m<<endl;
        cout<<c1<<endl;

}