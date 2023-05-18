#include<stdio.h>
long long int fun(int n){
    if(n == 0){
        return 1;
    }

    long long int res = fun(n-1);
    return res*n;
}
int main(){

    long long int n;
    scanf("%lld",&n);
    long long result = fun(n);
    printf("%lld\n",result);

    return 0;
}