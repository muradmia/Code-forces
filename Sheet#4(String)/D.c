#include<stdio.h>
#include<string.h>
int main(){

    char a[10001];
    char b[10001];

    scanf("%s",&a);
    scanf("%s",&b);

    int len = strlen(a);
    int len2 = strlen(b);

   

    printf("%d %d\n",len,len2);

    printf("%s%s",a,b);

    char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
    
    printf("\n%s %s",a,b);
    

    return 0;
}