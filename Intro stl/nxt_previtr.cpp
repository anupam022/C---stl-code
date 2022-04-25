#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    auto i=v.begin();
    i=next(i);
    cout<<(*i)<<" ";
    i=next(i,2);
    cout<<(*i)<<" ";
    i=prev(i);
    cout<<(*i)<<" ";

}