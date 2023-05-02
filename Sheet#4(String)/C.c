#include<stdio.h>
#include<string.h>
int main(){

    char x[10001];
    char y[10001];

    scanf("%s %s",x,y);

    int r = strcmp(x,y);

    if(r == 0){
        printf("%s",x);
    }else if(r < 0){
        printf("%s",x);
    }else if(r > 0){
        printf("%s",y);
    }


    return 0;
}