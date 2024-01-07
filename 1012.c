#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("TRIANGULO: %0.3f\n",(0.5*a*c));
    double c1 = 3.14159*(c*c);
    printf("CIRCULO: %0.3f\n",c1);
    double t = ((a+b)/2) * c;
    printf("TRAPEZIO: %0.3f\n",t);
    double s = b*b;
    printf("QUADRADO: %0.3f\n",s);
    double r = a*b;
    printf("RETANGULO: %0.3f\n",r);
}