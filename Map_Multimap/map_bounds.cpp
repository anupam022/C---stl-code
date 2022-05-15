#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string,greater<int>> m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({1,"practice"});

    // auto it=m.lower_bound(3);
    auto it=m.upper_bound(2);//it will give just greater value
    if(it!=m.end())
    {
        cout<<(*it).first;
    }
    else
        cout<<"Not equal or greater than value";
    return 0;
}
//erase() is uesd to remove key valuye pairs or set key value pairs.