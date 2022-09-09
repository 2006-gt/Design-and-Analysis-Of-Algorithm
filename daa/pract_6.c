#include <stdio.h>

int main()
{
    
    int num;
    printf("Enter number of test cases \n");
    scanf("%d", &num);
    for (int j = 0; j < num; j++)
    {
        int n;
        printf("Enter Size of array \n");
        scanf("%d", &n);
        int arr[n];
        printf("Enter elements of array \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int key;
        printf("Enter your key element \n");
        scanf("%d", &key);
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] - arr[j] == key)
                {
                    counter++;
                }
            }
        }
        printf("Number of pair are %d \n", counter);
    }
    return 0;
}