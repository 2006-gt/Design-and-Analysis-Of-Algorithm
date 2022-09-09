/*given an unsorted array of integers design an algorithm and implement a 
program to sort array by dividing this array in sub array and combining each of 
them.

Also find no. of comparison during sorting of array
*/

#include <stdio.h>  
 static int count =0;
void merge(int a[], int strt, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - strt + 1;    
    int n2 = end - mid;    
      
    int lArray[n1], rArray[n2];  
     
    for (int i = 0; i < n1; i++)    
    lArray[i] = a[strt + i];    
    for (int j = 0; j < n2; j++)    
    rArray[j] = a[mid + 1 + j];    
      
    i = 0;  
    j = 0;  
    k = strt;   
      
    while (i < n1 && j < n2)    
    {    
        if(lArray[i] <= rArray[j])    
        {    
            a[k] = lArray[i];    
            i++;
            count++;    
        }    
        else    
        {    
            a[k] = rArray[j];    
            j++;    
            count++;
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = lArray[i];    
        i++;    
        k++;    
    }      
    while (j<n2)    
    {    
        a[k] = rArray[j];    
        j++;    
        k++;    
    }    
}    
void mergeSort(int a[], int strt, int end)  
{  
    if (strt < end)   
    {  
        int mid = (strt + end) / 2;  
        mergeSort(a, strt, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, strt, mid, end);  
    }  
}   
void disp(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}  
int main()  
{  
    printf("Enter size of array\n");
    int n ;  
    scanf("%d",&n); 
    int a[n];
    printf("\nEnter elements of array \n"); 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    printf("\nBefore sorting array elements\n");
    disp(a, n);  
    mergeSort(a, 0, n - 1);  
    printf("\n\nAfter sorting array elements are - \n");  
    disp(a, n);  

    printf("\nnumber of comparison %d\t",count);
    return 0;  
}