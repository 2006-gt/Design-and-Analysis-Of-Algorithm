#include<stdio.h>

void linear_search(int arr[],int n,int key){
    int found=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index %d\n",i+1);
            found = 1;
            printf("No. of comparison of keys: %d\n",i+1);
            break;
        }
    }
    if(found==0){
        printf("element not found\n");
    }
}
int main(){
    printf("\nYASH BISHT\t20011655\t59\tG\n\n\n");
    int arr[]={10,25,22,15,49,59,37};
    int n= sizeof(arr)/sizeof(int);
    int key= 59;
    linear_search(arr,n,key);
    return 0;
}