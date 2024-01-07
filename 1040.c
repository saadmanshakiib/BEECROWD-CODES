#include<stdio.h>
int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double avg = (a*2 + b*3 + c*4 + d)/10.00;
    printf("Media: %0.1lf\n",avg);

    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");
        double s;
        scanf("%lf",&s);
        printf("Nota do exame: %0.1lf\n",s);
        double r = (avg+s)/2.0;
        if(r>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1f\n",r);
        }
        else if(r<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1f\n",r);
        }
    }
}