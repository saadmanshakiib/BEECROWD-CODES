#include<stdio.h>
#include<math.h>
int main(){
double x1,x2,y1,y2;
scanf("%lf %lf",&x1,&y1);
scanf("%lf %lf",&x2,&y2);
double r = sqrt (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

printf("%0.4lf",r);
return 0;
}