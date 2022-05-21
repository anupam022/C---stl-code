// Count distinct element in every window
// I/p arr[]={10,20,20,10,30,40,10}
// k=4
// O/p: 2 3 4 3
// I/p arr[]={10,20,30,40}
// k=3
// O/p: 3 3
//Brute force approach
#include<bits/stdc++.h>
using namespace std;
void printDistinct(int arr[] ,int  n,int k)
{
//     for(int i=0;i<=n-k;i++) //Naive soln
//     {
//         int count=0;
//         for(int j=0;j<k;j++)
//         {
//             bool flag=false;
//             for(int p=0;p<j;p++)
//                 if(arr[i+j] == arr[i+p])              //counting how many distinct elements are  there.
//                 {
//                     flag=true;
//                     break;}
                
//             if(flag==false)
//                 count++;
    
//         }
//             cout<<count<<" ";
//     }
// }

unordered_map<int,int> freq;
for(int i=0;i<k;i++)
    freq[arr[i]]++;

cout<<freq.size()<<" ";

for(int i=k;i<n;i++)
{
    freq[arr[i-k]]--;
    if(freq[arr[i-k]] ==0)
        freq.erase(arr[i-k]);
    freq[arr[i]]++;
    cout<<freq.size()<<" ";
}
}

int main()
{
    int arr[]={10,20,20,10,30,40};
    int n=sizeof(arr) /sizeof(arr[0]);
    int k=4;
    printDistinct(arr,n,k);
    return 0;
}