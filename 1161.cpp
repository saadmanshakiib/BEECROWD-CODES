#include<stdio.h>
int main(){
   long long int a,b;
  long long int f=1,e=1;
    while(scanf("%lld %lld",&a,&b) != EOF){
        if(a>=0&&a<=20 && b>=0&&b<=20){
            for(int i=1;i<=a;i++){
                f = f*i;
            }
            for(int i=1;i<=b;i++){
                e = e*i;
            }
        }
        long long int s = f+e;
        printf("%lld\n",s);
        f=e=1;
    }
}