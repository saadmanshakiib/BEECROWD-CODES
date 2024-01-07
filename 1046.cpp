#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c = a-b;
    if(a-b > 0){
        int ans = 24-(a-b);
        cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<endl;
    }
    else if(a-b < 0){
        int ans = -(a-b);
                cout<<"O JOGO DUROU "<<ans<<" HORA(S)"<<endl;
    }
    else if(a-b==0){
                cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
}