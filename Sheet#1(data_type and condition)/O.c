#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    char c;
    scanf("\n%c",&c);
    int m;
    scanf("%d",&m);

    if(c == '+'){
        printf("%d",n+m);
    }else if(c == '-'){
        printf("%d",n-m);
    }else if(c == '*'){
        printf("%d",n*m);
    }else if(c == '/'){
        printf("%d",n/m);
    }


    return 0;
}