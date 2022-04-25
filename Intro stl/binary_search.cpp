#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,8,15};
    sort(arr,arr+4);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" "<<endl;

    }
    if(binary_search(arr,arr+4,8))
    {
        cout<<"Present";

    }
    else{
        cout<<"Not present";
    }
    
} 