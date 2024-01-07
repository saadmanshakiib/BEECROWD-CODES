#include<iostream>
using namespace std;
int main(){
    int n[5];
    int e=0,o=0,p=0,ne=0;
    for(int i=1;i<6;i++){
        cin>>n[i];
    }
     for(int i=0;i<6;i++){
        if(n[i]%2==0)
            e++;
        if(n[i]%2!=0)
        o++;
        if(n[i]<0)
        ne++;
        if(n[i]>0)
        p++;
     }
    cout<<e<<" valor(es) pares"<<endl;
     cout<<o<<" valor(es) impar(es)"<<endl;
      cout<<ne<<" valor(es) positivo(s)"<<endl;
       cout<<p<<" valor(es) negativo(s)"<<endl;
}