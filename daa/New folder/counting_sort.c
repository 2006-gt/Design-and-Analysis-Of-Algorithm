#include<stdio.h>

void countingsort(int arr[],int n,int max){
int a[500]={0};

for(int i=0;i<n;i++){
    a[arr[i]]++;
}

printf("sorted elements\n");
for(int i=0;i<=max;++i)
for(int j=1;j<=a[i];++j)
printf("%d ",i);
}
int main(){
    int arr[50],n,i,max=0;

    printf("Enter no. of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }

    countingsort(arr,n,max);
}

