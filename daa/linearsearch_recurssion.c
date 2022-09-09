#include<stdio.h>
int linear_search(int arr[],int n,int key){
    int r;
    if(n>=0){
        if(arr[n]==key)
        return n;
        else
        r= linear_search(arr,n-1,key);
    }
    else return -1;

    return r;
    }
int main(){
    printf("\nYASH BISHT\t20011655\t59\tG\n\n\n");
    int arr[]={17,7,37,49,24,59,69};
    int n=sizeof(arr)/sizeof(int);
    int key=69;
    int rec = linear_search(arr,n,key);
    if(rec!=-1){
        printf("Element found at index: %d",rec+1);
    }
    else
    printf("element not found");
    return 0;
}
