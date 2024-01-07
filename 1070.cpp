#include<iostream>
using namespace std;
int main(){
    int l;
    int a=0;
    cin>>l;
    for(int i=l;;i++){
        if(i%2==1)
        cout<<i<<endl;
        a++;
        if(a==12)
        break;
    }
}
