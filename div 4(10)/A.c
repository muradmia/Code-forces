#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    while(n--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a+b == c){
            printf("+\n");
        }else if(a-b == c){
            printf("-\n");
        }else if(a-b < 0){
            printf("-\n");
        }
    }

    return 0;
}