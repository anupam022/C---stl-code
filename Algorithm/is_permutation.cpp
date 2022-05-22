#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40};
    vector<int> v2={40,30,10,20};
    if(is_permutation(v1.begin(),v1.end(),v2.begin()))
    {
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}