#include<stdio.h>
void print(int arr[], int n){
    printf("array is: ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionsort(int arr[], int n){
int count =0, temp, count1=0;
int min =0;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            count1++;
            if(arr[j]<arr[min]){
                temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
    }
    print(arr, n);
    printf("no. of comparisons : %d \n",count1 );
    printf("no. of swaps : %d \n", count);
}


int main(){

int arr[100];
int n;
printf("enter the size of array  ");
scanf("%d",&n);
    printf("enter the element: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

print(arr, n);
selectionsort(arr, n);
return 0;
}
