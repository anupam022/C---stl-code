#include<bits/stdc++.h>
using namespace std;      //O(log n) when we have random access container and random access iterator n is total no of elements in range.
int main()
{
    vector<int> v={10,20,30,29,3,2,1};
    sort(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";
    cout<<"\n";
    auto it=upper_bound(v.begin(),v.end(),21);
    cout<<(*it)<<endl;
    cout<<(it-v.begin());
    return 0;
}