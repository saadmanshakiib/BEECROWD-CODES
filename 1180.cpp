#include<iostream>
using namespace std;
int main(){
    int a,i,j;
    cin>>a;
    if(a>1 && a<1000){
    int x[a];
    for(i=0;i<a;i++){
        cin>>x[i];
    }
    int m=x[0];
    for(i=0;i<a;i++){
        if(m>x[i]){
            m=x[i];
            j=i;
        }
    }            cout<<"Menor valor: "<<m<<endl;
                            cout<<"Posicao: "<<j<<endl;
            
    }

}