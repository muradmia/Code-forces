#include<stdio.h>
int main(){

    long long int n,m;
    scanf("%lld",&n);
    scanf("%lld",&m);

    int sum = n % 10 + m % 10;
    printf("%d",sum);


    return 0;
}