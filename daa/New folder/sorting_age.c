#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    int i,count=0;
    for(i=0;i<5;i++){
        printf("enter age of person\n");
        scanf("%d",&arr[i]);
        count++;

        if(i>0){
            int key=arr[i];
            int j=i-1;
            while(arr[j]>key&&j>=0){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        printf("\nlist after new entry\n");
        for(int k=0;k<count;k++){
            printf("  %d  ",arr[k]);
        }
        printf("\n");
    }
}