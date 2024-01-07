#include<stdio.h>
int main(){
    int v,t;
    scanf("%d %d",&v,&t);
    double s = v*t;
    double r = s/12.0;
    printf("%0.3lf\n",r);
}