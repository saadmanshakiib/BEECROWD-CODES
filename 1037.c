#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a<0 || a>100){
        printf("Fora de intervalo\n");
    }
    else{
    if(a>=0.00 && a<=25.000000){
        printf("Intervalo [0,25]\n");
    }
    else if(a>=25.01 && a<=50.000000){
        printf("Intervalo (25,50]\n");
    }
    else if(a>=50.01 && a<=75.000000){
                printf("Intervalo (50,75]\n");
    }
    else if(a>=75.01 && a<=100.000000){
                printf("Intervalo (75,100]\n");
    }
    }

}