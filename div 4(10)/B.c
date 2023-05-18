#include<stdio.h>
int main(){
    int t,mcount = 0,bcount = 0;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }
        int temp = arr[0];
        arr[0] = arr[n-1];
        arr[n-1] = temp;

        for(int k=0;k < n; k++){
            if(arr[k] % 2 == 0){
                mcount+=arr[k];
            }else{
                bcount+=arr[k];
            }
        }

        if(mcount > bcount){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        mcount = 0;
        bcount = 0;
    }

    return 0;
}