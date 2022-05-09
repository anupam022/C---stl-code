// Longest consecutive sequence
// I/p: arr[]={1,9,3,4,2,20}
// O/p: 4
// After sorting we can see longest consecutive elements
// arr={1,2,3,4,9,10,13}

#include<bits/stdc++.h>
using namespace std;

int findlongest(int arr[],int n)
{
    int res=1, curr=1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
            curr++;
        else{
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}
int main()
{
    int arr[]={1,9,3,4,2,20};
    int n=sizeof(arr) / sizeof(arr[0]);
    cout<<findlongest(arr,n);
    
    return 0;
}