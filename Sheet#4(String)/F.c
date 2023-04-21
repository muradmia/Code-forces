#include<stdio.h>
#include<string.h>
int main(){

    int t;
    scanf("%d",&t);
    int len;

    for(int i=0; i<t; i++){
        char s[100];
        scanf("%s",s);
        len = strlen(s);
        char c = s[len-1];

    if(len <= 10){
        printf("%s\n",s);
    }else{
        len -= 2;
        printf("%c%d%c\n",s[0],len,c);
    }

    }
    
    



    return 0;
}