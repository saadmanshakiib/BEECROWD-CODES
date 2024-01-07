#include<stdio.h>
int main(){
    float a[6];
        int d=0;
    float s=0.00;
    for(int i=0;i<6;i++){
        scanf("%f",&a[i]);
        if(a[i] > 0){
            d++;
            s=s+a[i];
        }   
    } 
    printf("%d valores positivos\n",d);
   float avg = s/d;
   printf("%0.1f\n",avg);
}
