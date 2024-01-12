#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    double a,b,c;
     scanf("%lf %lf %lf",&a,&b,&c);
     double avg = (a*2.0+b*3.0+c*5.0)/(10.0);
     printf("%0.1lf",avg);
    }
}