#include<bits/stdc++.h>
using namespace std;

//Naive soln O(n^2)

bool pairedSum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] ==sum){
                cout<<"Pair with given sum "<<sum<<" is ("<<arr[i]<<","<<arr[j]<<")"<<endl;
                return true;
        }
    }
    }
    return false;
}

int main()

{

    int arr[]={2,4,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
   int  sum=11;
    if(pairedSum(arr,n,sum)){
        cout<<"Pair exist"<<endl;
    }
    else
    {
        cout<<"Pair not exist";
    }
    return 0;
}