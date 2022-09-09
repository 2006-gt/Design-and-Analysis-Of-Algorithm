#include<stdio.h>
#include<stdlib.h>

void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n\n");
}

void selection_sort(int arr[],int n){
    int min=0,count=0,temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
    }
}
int main(){
    int arr[]={2,5,3,9,1};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
   
}