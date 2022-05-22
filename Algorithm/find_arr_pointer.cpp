#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,30,10};
    int *ptr = find(arr,arr+5,10);
    if(ptr==(arr+6))
    {
        cout<<"Not found";
    }
    else{
    cout<<"Found at Pos "<<(ptr-arr)<<endl;
    }
    return 0;
}