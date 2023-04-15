#include<stdio.h>
int main(){

    int a;
    long long int b;
    char c,e;
    float f;
    double d;


    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%c%c",&c,&e);
    scanf("%f",&f);
    scanf("%lf",&d);

    printf("%d\n%lld\n%c\n%.2f\n%.1lf",a,b,e,f,d);


    return 0;
}