#include<iostream>
using namespace std;
int main(){
    int a,b,c=0,d=0;
    while(d==0){
        cin>>a>>b;
        if(a==0 || b==0){
        break;
    }
    if(a>b){
        for(int i=b;i<=a;i++){
            if(i==0){
                d++;
                break;
            }
        }
        if(d==0){
            for(int i=b;i<=a;i++){
           cout<<i<<" ";
           c = c+i;
        }
        cout<<"Sum="<<c<<endl;
        c=0;
        }
    }
    else if(b>a){
        for(int i=a;i<=b;i++){
            if(i==0){
                d++;
                break;
            }
        }
                if(d==0){
                    for(int i=a;i<=b;i++){
           cout<<i<<" ";
            c = c+i;
        }
                cout<<"Sum="<<c<<endl;
                c=0;
                }
    }
    
    }
}