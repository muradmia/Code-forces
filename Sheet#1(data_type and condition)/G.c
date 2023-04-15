#include<stdio.h>
int main(){

    long long int t,a,sum = 0;
    scanf("%lld",&t);

   
    sum = t *(t-1)/2;
    sum += t;

    printf("%lld",sum);

    return 0;
}