//List of smaller elements.
//arr[]={10,20,4,6,7}
//k=10
//res={4,6,7}
#include<bits/stdc++.h>
using namespace std;

vector<int> get_smaller(int arr[],int n,int k){
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<k)
            res.push_back(arr[i]);

    }
return res;
}

int main()
{
    int n;
    int arr[n];
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //using range based for loop
    for(const int &n : arr){
        cout<<"Elements are: "<<n<<" ";
    }


    vector<int> res=get_smaller(arr,n,10);
    for(int x : res)
    {
        cout<<x<<" ";
    }
    
    return 0;
}