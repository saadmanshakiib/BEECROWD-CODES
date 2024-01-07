#include<stdio.h>
int main(){
    double array[5] = {4.00,4.50,5.00,2.00,1.50};
    int c,q;
    scanf("%d %d",&c,&q);
    for(int i=0;i<5;i++){
        if((i+1)==c){
            double p = array[i]*q;
                printf("Total: R$ %0.2lf",p);
        }
    }
}