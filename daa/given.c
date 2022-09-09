#include<stdio.h>
#include<stdlib.h>
#include<math.h>
static int count=0;
void jump_search(int arr[],int n,int key){
int x;
for(int i=0,j=1;i<n;i=(pow(2,j)),j++){
    if(arr[i]==key){
        printf("element is found\n");
        count++;
        printf("No. of comparison %d",count);
        return;
    }
    else if(arr[i]<key){
        x=i;
        count ++;
    }
    else if(arr[i]>key){
        for(x;x<arr[i];x++){
            count++;
            if(arr[x]==key){
                printf("Element found\n");
                printf("No. of comparison %d",count);
                return;
            }
        }
    }
}
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,10};
    int n=sizeof(arr)/sizeof(int);
    int key=10;
    jump_search(arr,n,key);
    return 0;
}