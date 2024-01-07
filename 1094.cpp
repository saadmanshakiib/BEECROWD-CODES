#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    int s;
    scanf("%d",&t);
for(int i=1;i<=t;i++){
      cin>>x>>y;
  if(x>y){
    for(int i=y+1;i<x;i++){
        if(i%2!=0){
            s=s+i;
        }
    }
        cout<<s<<endl;
    s=0;
  }
  if(y>x){
    for(int i=x+1;i<y;i++){
        if(i%2!=0){
            s=s+i;
        }
    }
     cout<<s<<endl;
  }

}
}