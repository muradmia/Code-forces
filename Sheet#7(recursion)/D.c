#include<stdio.h>
void fun(int n){
    if(n == 0) return;
    int r = n % 10;//9 3
    fun(n/10);
    printf("%d ",r); 
}
int main(){

    int t;
    scanf("%d",&t);

    for(int i = 0; i < t;i++){
        int n;
        scanf("%d",&n);
        
        fun(n);
        if(n == 0){
            printf("0");
        }
        
        printf("\n");
    }

    return 0;
}