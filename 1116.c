#include<stdio.h>
int main(){
    double x,y;
    int t;
    scanf("%d",&t);
    while(t!=0){
        scanf("%lf %lf",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        } 
        else{
            double r= x/y;
            printf("%0.1lf\n",r);
        }
        t--;
    }
}