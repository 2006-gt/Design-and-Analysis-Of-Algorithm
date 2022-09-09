#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int num;
    cout<<"Enter number of test cases \n"<<endl;
    cin>>num;
    for (int k = 0; k < num; k++)
    {
        vector<int> ans;
        int arr[100], size, i, s = 0, f = 1;

        cout << "\nEnter the size of array ";
        cin >> size;

        cout << "\nEnter the elements into the array ";

        for (i = 0; i < size; i++)
            cin >> arr[i];

        sort(arr, arr + size);

        while (1)
        {
            if (f >= size)
                break;
            else if (arr[s] == arr[f])
            {
                ans.push_back(arr[s]);
                while ((arr[s] == arr[f]) && (f < size))
                {
                    f++;
                }
                s = f;
                f = f + 1;
            }
            else
            {
                s++;
                f++;
            }
        }

        i = 0;
        if (ans.size() == 0)
            cout << "\nNo duplicates are present in the given array ";
        else
        {
            cout << "\nDuplicate elements are: ";
            while (i < ans.size())
            {
                cout << ans[i] << " ";
                i++;
            }
        }
    }
    return 0;
}