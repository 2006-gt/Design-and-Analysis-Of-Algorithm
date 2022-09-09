#include<stdio.h>
void binary_search(int arr[],int n,int key){
    int l=0,r=n-1,mid,count=0;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==key){
        count++;
        printf("element found at index %d\n",mid+1);
        printf("No. of comparison: %d",count);
        break;
        }
    else if(arr[mid]>key){
        r=mid-1;
        count++;
        }
    else{
        l=mid+1;
        count++;
        }
    }
}
int main(){
    int arr[]={7,17,24,37,49,59,69};
    int n=sizeof(arr)/sizeof(int);
    int key=69;
    binary_search(arr,n,key);
    return 0;
}