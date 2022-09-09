// 7
#include <stdio.h>

int main()
{
    int num;
        int n;
        printf("Enter array size\n");
        scanf("%d", &n);
        int arr[n];
        printf("Enter array elements \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int shift = 0, comp = 0;
        for (int i = 1; i < n; i++)
        {
            int current = arr[i];
            int j = i - 1;
            while (arr[j] > current && j >= 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = current;
        }
        printf("Sorted array \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        printf("Comparisons = %d \n", comp);
        printf("Shifts = %d \n", shift);
    
    return 0;
}