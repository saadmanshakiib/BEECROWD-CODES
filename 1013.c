#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int m = a;
for(int i=1;i<=3;i++){
    if(m < b ){
        m=b;
    }
    else if(m<c){
        m=c;
    }
}
printf("%d eh o maior\n",m);
}