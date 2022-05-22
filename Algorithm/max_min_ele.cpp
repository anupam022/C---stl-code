#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,5,7,200};
    auto it = max_element(v.begin(),v.end());
    cout<<(*it)<<endl;

    auto it1 = min_element(v.begin(),v.end());
    cout<<(*it1)<<endl;
    return 0;
}