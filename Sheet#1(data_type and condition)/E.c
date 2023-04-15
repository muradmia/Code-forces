#include<stdio.h>
int main(){

    double r , pi = 3.141592653;
    scanf("%lf", &r);

    double area = pi * r *r;

    printf("%.9lf",area);


    return 0;
}