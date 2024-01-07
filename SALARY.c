#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int w;
    scanf("%d",&w);
    float s,a;
    scanf("%f",&a);
    s = a*w;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %0.2f\n",s);
    return 0;
}