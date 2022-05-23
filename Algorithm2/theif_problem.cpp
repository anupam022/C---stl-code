// I/p arr[]={10,2,3,47,8};
// k=3                     //The thief has to pick elments in such a way that the resultant sum will be maximum at given k value.
// O/p=>65
#include<bits/stdc++.h>
using namespace std;
int getMaxVal(int arr[], int k,int n)
{
    sort(arr,arr+n,greater<int>());
    int res=0;
    for(int i=0;i<k;i++)
    {
        res = res + arr[i];
    }
    return res;
}

int main()
{
    int arr[]={10,20,2,1,2,11};
    int k=3;
    int n= sizeof(arr) /sizeof(arr[0]);    
    cout<<getMaxVal(arr,k,n)<<" ";
    return 0;
}