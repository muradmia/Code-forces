#include<stdio.h>
#include<string.h>
int main(){

    char s[10001];
    char t[10001];

    gets(s);
    gets(t);

    int len = strlen(s);
    int len2 = strlen(t);

    printf("%d %d",len,len2);
    printf("\n%s %s",s,t);

    return 0;
}