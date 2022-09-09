#include<stdio.h>

int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    int i=0,j=0,k=0,sum=0;
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                sum=arr[i]+arr[j];
                if(sum == arr[k]){
                    printf("i= %d, j= %d, k=%d\n",i,j,k);
                    break;
                }
            }
        }
    }
}