#include<stdio.h>
#include<string.h>
int main(){

    int t,flag = 0;
    char s[100001];
    scanf("%d",&t);
   

    for(int j=0; j<t; j++){
        scanf("%s",s);
        //11111110 12 8 string 8 -2 = 6
        //101 or 010
        int flag = 0;
        for(int i = 0; i<strlen(s)-2; i++){
            if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' || s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            printf("Good\n");
        }else{
            printf("Bad\n");
        }

        
    }


    return 0;
}