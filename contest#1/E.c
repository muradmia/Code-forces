#include<stdio.h>
int main(){

    int a,b,ecount = 0,ocount = 0;
    scanf("%d",&a);
    scanf("%d",&b);

   if( a-b == 1 || b-a == 1  || (a == b && a!= 0 && b != 0)){
        printf("YES\n");
   }else{
        printf("NO\n"); 
   }


    return 0;
}