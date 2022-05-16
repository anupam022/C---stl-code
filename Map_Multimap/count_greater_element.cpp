// Count Greater Element
// I/p: arr[]={10,5,8,20,30,8}
// O/p: 2 5 3 1 0 3
#include<bits/stdc++.h>
using namespace std;
//Naive soln  O(n^2)
// void printGreater(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int count=0;
//         for(int j=0;j<n;j++)
//         if(j!=i && arr[j]>arr[i])
//             count++;
//         cout<<count<<" ";
//     }
// }

//Efficient soln  O(nlogn)
void printGreater(int arr[],int n){ 
    map<int,int> m;
    for(int i=0;i<n;i++)      //O(nlogn)
        m[arr[i]]++;

    int cum_freq=0;
    for(auto it=m.rbegin();it!=m.rend();it++)
    {
        int freq = it->second;
        it->second = cum_freq;             //O(n)
        cum_freq +=freq;
    }
    for(int i=0;i<n;i++){
        cout<<m[arr[i]]<<" ";        //O(nlogn)
}
}
int main()
{
    int arr[]={10,5,8,20,30,8};
    int n=sizeof(arr) / sizeof(arr[0]);
    printGreater(arr,n);
    
    return 0;
}