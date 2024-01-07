#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,n,s=0;
    cin>>t;
    int a=pow(10,8);
    for(int i=1;i<=t;i++){
        cin>>n;
        if(1<=n<=a){
            for(int q=1;q<n;q++){
                if(n%q==0){
                    s=s+q;
                }
            }
             if(s==n){
        cout<<n<<" eh perfeito"<<endl;
             }
        else {
        cout<<n<<" nao eh perfeito"<<endl;
        }
         s=0;
        }
    }
}