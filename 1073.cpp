#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(5<n<2000){
        for(int i=1;i<=n;i++){
            if(i%2==0){
            cout<<i<<"^2"<<" = "<<i*i<<endl;
            }
        }
    }
}