#include<stdio.h>
#include<math.h>
int main(){

    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);

    double result = a / b;

   

    printf("floor %.0lf / %.0lf = %.0lf\n",a,b,floor(result));
    printf("ceil %.0lf / %.0lf = %.0lf\n",a,b,ceil(result));
    printf("round %.0lf / %.0lf = %.0lf\n",a,b,round(result));
    

   

    return 0;
}