#include<bits/stdc++.h>
using namespace std;

void NextGreaterElement(int arr[],int n)
{
    int next,i,j;
    for(int i=0;i<n;i++){
            next=-1;
        for (int j = i+1; j < n; j++)
        {
             if(arr[i] < arr[j]){
                 next=arr[j];
                 break;
             }
        }
        cout<<arr[i]<<"-->"<<next<<endl;
    }
        
}
int main()
{
    int arr[]={4,6,2,3,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    NextGreaterElement(arr,n);
    return 0;
}