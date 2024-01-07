#include<stdio.h>
int main(){
    double r;
    scanf("%lf",&r);
    double s = ((4.0/3.0)*(3.14159)*(r*r*r));
    printf("VOLUME = %0.3lf\n",s);
}