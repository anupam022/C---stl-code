#include<bits/stdc++.h>
using namespace std;
int myfun(int x,int y)//O(n)
{
    return x*y;
}
int main()
{
    // vector<int> v = {10,20,30};
    // int init_res = 0;
    
    // cout<<accumulate(v.begin(),v.end(),init_res);

    // vector<int> v={10,20,30};
    // int init_res=100;
    // cout<<accumulate(v.begin(),v.end(),init_res,minus<int>());

    int arr[]={10,20,30};
    int init_res=1;
    cout<<accumulate(arr,arr+3,init_res,myfun);


    return 0;
}