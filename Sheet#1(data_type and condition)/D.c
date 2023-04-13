#include<stdio.h>
int main(){


    int a , b ,c ,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    int result = (a * b) - (c * d);
    printf("Difference = %d",result);

    return 0;
}