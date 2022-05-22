#include<bits/stdc++.h>
using namespace std;         //O(log n)
int main()
{
    vector<int> v={10,20,30,40,10};
    auto it = lower_bound(v.begin(),v.end(),11);
    cout<<(*it)<<endl;
    cout<<(it-v.begin())<<endl;
    
    return 0;
}