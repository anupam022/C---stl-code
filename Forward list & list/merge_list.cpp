#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1  = {10,20,30,4};
    list<int> l2 = {4,5,6};
    l1.merge(l2); 
    for(auto x : l1)
        cout<<x<<" ";
    return 0;
}