#include<stdio.h>
#include<stdlib.h>
int main(){
    double A,B;
    scanf("%lf",&A);
    scanf("%lf",&B);
    double MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %0.5lf",MEDIA);
return 0;
}