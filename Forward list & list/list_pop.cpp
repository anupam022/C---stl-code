#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30};
    l.pop_back();
    l.pop_front();
    // for(int x: l)
    for(auto it =l.begin();it!=l.end();it++)
        cout<<(*it)<<" ";
    return 0;
} 