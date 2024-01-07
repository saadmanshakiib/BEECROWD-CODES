#include<stdio.h>
int main(){
    int c,u;
    double p;
    scanf("%d",&c);
        scanf("%d",&u);
            scanf("%lf",&p);
                int c1,u1;
                double p1;
    scanf("%d",&c1);
        scanf("%d",&u1);
            scanf("%lf",&p1);
            double r1 = (u*p); 
                        double r2 = (u1*p1); 
                        double r = r1+r2;
                        printf("VALOR A PAGAR: R$ %0.2lf\n",r);
}