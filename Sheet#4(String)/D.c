#include<stdio.h>
#include<string.h>
int main(){

    char s[10001];
    gets(s);
    int j = strlen(s)-1;
    int  i = 0,count = 1;

    
    while(i < j){
       if(s[i] != s[j]){
           count = 0;
           break;
       }else{
            i++;
            j--;
       }
    }
    if(count == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
   


    return 0;
}