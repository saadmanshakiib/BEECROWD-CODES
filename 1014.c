#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    double y;
    scanf("%lf",&y);
    printf("%0.3lf km/l\n",(x/y));
}