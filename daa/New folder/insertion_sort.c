#include<stdio.h>

void Insertion_sort(int arr[],int n){
    int j,key;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}
int main(){
    int arr[]={3,2,5,4,8,6,9,7};
    int n = sizeof(arr)/sizeof(int);
    Insertion_sort(arr,n);
    disp(arr,n);
}