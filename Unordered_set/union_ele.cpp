// Intersection of Two Arrays
// Input: arr1[] = {7, 2, 9, 15, 10}
//        arr2[]: {5, 10, 7, 3, 2, 20, 9}
// Output: {7, 10, 2, 9} 

// Input: arr1[] = {7, 1, 5, 2, 3, 6}
//        arr2[] = {3, 8, 6, 20, 7}
// Output: {7, 3, 6}
#include<bits/stdc++.h>
using namespace std;

//Naive soln O(n^2)
// void printintersection(int arr1[],int arr2[],int m,int n)
// {
    
//     for (int i =0;i<m;i++)
//     {
//         bool flag=false;
//         for(int j=0;j<n;j++)
//         {
//             if(arr1[i] == arr2[j])
//             {
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag==true)
//             cout<<arr1[i]<<" ";
//     }
// }

void printintersection(int arr1[],int arr2[],int m,int n)
{
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(arr1[i]);    
    }
    for(int j=0;j<n;j++)
    {
        if(s.find(arr2[j])!=s.end())
        {
            cout<<arr2[j]<<" ";
        }
    }

}
int main()
{
    int arr1[]={10,20,2,4,5,1};
    int arr2[]={11,20,6,1,5,2};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);

    printintersection(arr1,arr2,m,n);
    return 0;
}