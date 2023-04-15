#include<stdio.h>
int main(){

    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);

    double flor = a / b;
    double ceil = a / b;
    double  round = a / b;

    

    printf("Floor :%.0lf\n",flor);
    printf("Ceil :%.0lf\n",ceil);
    printf("Floor :%.0lf\n",round);

    return 0;
}