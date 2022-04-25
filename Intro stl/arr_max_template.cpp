#include<bits/stdc++.h>
using namespace std;
template<typename T>
T arrMax(T arr[],int n)
{
    T res=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>res)
        res=arr[i];
return res;
}
int main()
{
    int ar[5];
    for (int i = 0; i < 4; i++)
    {
        cout<<"enter elements of array arr["<<i<<"]: "<<endl;
        cin>>ar[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<"arr["<<i<<"]: "<<ar[i]<<endl;
    }
      cout<<"largest element: "<<arrMax<int>(ar,3);
    return 0;
}