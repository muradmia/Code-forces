#include<stdio.h>
int main(){

    int days;
    scanf("%d",&days);

    int year = days / 365;
    days = days - (365 * year);
    int month = days / 30;
   
    int day = days - (month*30);

    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",day);
    



    return 0;
}