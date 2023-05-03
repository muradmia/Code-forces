#include<stdio.h>
void array(int size){
    
    int arr[size];
    
    for(int i = 1; i <= size;i++){
        if(i==size){
            printf("%d",i);
            break;
        }
        printf("%d ",i);
        
    }
    
}
int main(){

    int size;
    scanf("%d",&size);
    array(size);
    
    return 0;
}