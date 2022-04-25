#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int ele;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements: ";
        cin>>ele;

        v.push_back(ele);
    }

    cout<<v.size()<<" "<<v.capacity()<<" ";
    return 0;
}