#include<stdio.h>

void find_key(int arr[],int n){
    int count=0,found=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]&&arr[i]!=-1){
                found=1;
                arr[j]=-1;     
                count++;
            }
        }
    }
    if(found==1)printf("No. of duplicates %d",count);
    else printf("element not found");
}


int main(){
    int arr[] ={7,7,9,9,9,37,49,59,49};
    int n=sizeof(arr)/sizeof(int);
    find_key(arr,n);
    return 0;
}
