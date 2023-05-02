#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    long long int sum = 0;
    
    fgets(s,1000001,stdin);
    for(int i = 0;i < strlen(s)-1;i++){
        sum += s[i] - '0';
    }
    printf("%lld\n",sum);


    return 0;
}