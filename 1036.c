#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double b1 = (b*b)-(4*a*c);
    double r = -b+sqrt(b1);
    double r1 = r/(2*a);
        double r2 = -b-sqrt(b1);
        double r3 = r2/(2*a);
        if((r && r2 != 0) && sqrt(b1)>0 && (2*a) != 0 ){
        printf("R1 = %0.5lf\n",r1);
        printf("R2 = %0.5lf\n",r3);
        }
        else{
        printf("Impossivel calcular\n");
        }


}