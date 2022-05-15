#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({1,"practice"});

    for(auto &x:m)
    {
        cout<<x.first<<" "<<x.second<<" "<<endl;;
    }
    for(auto it =m.find(2);it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<" "<<"\n";
    }
    
    // if(m.find(5) == m.end())
    // {
    //     cout<<"Not found";
    // }
    // else{
    //     cout<<"Found";
    // }
    
    return 0;
}