#include<stdio.h>
#include<string.h>
int main(){

    int i = 0;
    char s[10001];
    fgets(s, 10001, stdin);
    int n = strlen(s);

    while(i < n-1){
        
        if(s[i] == '\\'){
            break;
        }
        printf("%c", s[i]);
        i++;
    }
    return 0;
}