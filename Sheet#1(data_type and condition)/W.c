#include<stdio.h>
int main(){

    int a,b,c,result = 0;
    char s,q;
    scanf("%d",&a);
    scanf("\n%c",&s);
    scanf("%d",&b);
    scanf("\n%c",&q);
    scanf("%d",&c);
    
    
    
    

    if(s == '+'){     
        if(a + b == c){
            printf("Yes\n");
        }else{
            printf("%d",a+b);
        }
    }
    
    if(s == '-'){     
        if(a - b == c){
            printf("Yes\n");
        }else{
            printf("%d",a-b);
        }
    }

    if(s == '*'){     
        if(a * b == c){
            printf("Yes\n");
        }else{
            printf("%d",a*b);
        }
    }



    return 0;
}