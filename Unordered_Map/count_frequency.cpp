#include<bits/stdc++.h>
using namespace std;

void printFrequency(int arr[],int n)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    
        m[arr[i]]++;
    for(auto x:m)
        cout<<x.first<<"-"<<x.second<<endl;
}
int main()
{
    int arr[]={10,10,20,20,20,20,30,1,2,3};
    int n= sizeof(arr) /sizeof(arr[0]);
    printFrequency(arr,n);
    
    return 0;
}