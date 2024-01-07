#include<stdio.h>
int main(){
char n[1000];
scanf("%s",&n);
double s;
scanf("%lf",&s); 
double t;
scanf("%lf",&t);
double r = (t*0.15) + s;
printf("TOTAL = R$ %0.2lf\n",r);   
}