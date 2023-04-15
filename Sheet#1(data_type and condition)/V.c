#include<stdio.h>
int main(){

    int a,b;
    char c;


    scanf("%d",&a);
    scanf("\n%c",&c);
    scanf("%d",&b);

    if(c == '='){
        if(a == b){
            printf("Right\n");
        }else{
            printf("Wrong\n");
        }
    }else if(c == '<'){
        if(a < b){
            printf("Right\n");
        }else{
            printf("Wrong\n");
        }
    }else if(c == '>'){
        if(a > b){
            printf("Right\n");
        }else{
            printf("Wrong\n");
        }
    }


    return 0;
}