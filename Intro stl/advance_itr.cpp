//Advance function is used to move iterator n position
//ahead.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    auto i=v.begin();
    advance(i,3);
    cout<<(*i)<<" ";
    return 0;
}