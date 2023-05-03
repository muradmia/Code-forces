#include<stdio.h>
#include<limits.h>

int min(int ar[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(ar[i] < min){
            min = ar[i];
        }
    }
    return min;
}
int max(int *ar,int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(*(ar+i) > max){
            max = ar[i];
        }
    }
    return max;
}
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(int);
    int result = max(arr,size);
    int result2 = min(arr,size);
    printf("%d ",result2);
    printf("%d",result);
    

    

    return 0;
}