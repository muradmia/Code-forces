#include<stdio.h>
int main(){

    long long n,f,s;
    scanf("%lld",&n);

    if(n == 1 || n == 0){
        printf("0");
    }else{
        int f = 0,s= 1;
        printf("%d %d ",f,s);

        for(int i = 2;i < n;i++){
            int result = f+s;
            printf("%d ",result);
            f=s;
            s=result;
        }

    }
    


    return 0;
}