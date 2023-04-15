#include<stdio.h>
int main(){

    int a,c;
    long long int b,d;
    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%d",&c);
    scanf("%lld",&d);

    long long int s1,s2;
    s1 = a * b;
    s2 = c * d;

    if(s1 > s2){
        if(b > a)
        printf("YES\n");
    }else{
        printf("NO\n");
    }


    return 0;
}