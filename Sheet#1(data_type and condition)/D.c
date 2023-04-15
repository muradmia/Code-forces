#include<stdio.h>
int main(){


    long long int  a , b ,c ,d;
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&c);
    scanf("%lld",&d);

    long long int result = (a * b) - (c * d);
    printf("Difference = %lld",result);

    return 0;
}