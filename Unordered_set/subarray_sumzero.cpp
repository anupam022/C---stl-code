#include<bits/stdc++.h>
using namespace std;
// bool isSum(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int curr_Sum=0;
//         for(int j=i;j<n;j++)
//         {
//             curr_Sum += arr[j];
//             if(curr_Sum == 0)
//                 return true;
//         }   
//         return false;
        
//     }
// }

bool isSubArrayZero(int arr[], int n)
{
    unordered_set<int> Set;
    int sum = 0;
    for (int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
        if (sum == 0 || Set.find(sum) != Set.end())
            return true;
        Set.insert(sum);
    }
    return false;
}

int main()
{
    int arr[]={1,4,13,-3,-10,5};
    int n=sizeof(arr) / sizeof(arr[n]);
    //cout<<isSum(arr,n);
    if (isSubArrayZero(arr, n))
        cout << "Yes, a sub-array with sum 0 exist";
    else
        cout << "No, a sub-array with sum 0 does not exist";
 
    return 0;
}