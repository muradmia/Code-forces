#include<stdio.h>
#include<limits.h>
int main(){

    int a,b,c,max,min;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a <= b && b <= c){
        printf("%d\n%d\n%d\n",a,b,c);
    }else if(a <= c && c <= b){
        printf("%d\n%d\n%d\n",a,c,b);
    }else if(b <= c && c <= a){
        printf("%d\n%d\n%d\n",b,c,a);
    }else if(b <= a && a <= a){
        printf("%d\n%d\n%d\n",b,a,c);
    }else if(c <= a && a <= b){
        printf("%d\n%d\n%d\n",c,a,b);
    }else if(c <= b && b <= a){
        printf("%d\n%d\n%d\n",c,b,a);
    }

    
   
    
    printf("\n");

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d",c);





    return 0;
}