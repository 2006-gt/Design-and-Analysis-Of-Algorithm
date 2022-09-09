// #include<stdio.h>
// void binary_search(int arr[],int n,int key,int l,int r){
//  static int count; 
//        if(l>r){
//     printf("element not found");
//     return ;}
//     int mid =(l+r)/2;
//     if(arr[mid]==key){
//         printf("element found at index %d\n ",mid+1);
//         count++;
//         printf("No. of comparison %d\n",count);
//     }
//     else if(arr[mid]<key){
//         count ++;
//         binary_search(arr,n,key,mid+1,r);
//     }
//     else{
//         count++;
//         binary_search(arr,n,key,l,mid-1);
//     }
// }

// int main(){

//     int arr[]= {7,17,24,37,49,59,69};
//     int n=sizeof(arr)/sizeof(int);
//     int key=69;
//     int l=0,r=n-1;
//     binary_search(arr,n,key,l,r);
//     return 0;
// }


#include<stdio.h>

int main(){
for(int i;i<5;i++){
    printf("%d ",i);
}
}
