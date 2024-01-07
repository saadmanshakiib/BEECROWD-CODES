#include<iostream>
#define pass 2002
using namespace std;
int main(){
    int p;
    while(5){
        cin>>p;
        if(p==pass){
                    cout<<"Acesso Permitido"<<endl;
break;
        }
        else{
             cout<<"Senha Invalida"<<endl;
        }
        }
}