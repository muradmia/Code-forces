#include<stdio.h>
int main(){

    long long int a,b,c,d;
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&c);
    scanf("%lld",&d);
    long long int result = (a % 100 *b % 100 *c % 100 *d % 100) % 100;

    if(result < 10){
        printf("0 %d",result);
    }else{
        printf("%d",result);
    }




    return 0;
}