#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,n,s=0;
    cin>>t;
    int a=pow(10,7);
    for(int i=1;i<=t;i++){
        cin>>n;
    if(1<=n<=100){
        for(int q=2;q<n;q++){
            if(n%q==0)
            s++;
        }
    }
if(s==0){
cout<<n<<" eh primo\n";
}
else{
cout<<n<<" nao eh primo\n";
}
s=0;
    }


}