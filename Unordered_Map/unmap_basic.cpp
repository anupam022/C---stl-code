#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> um;
    um["gfg"] = 20;
    um["practice"] = 30;
    um.insert({"ide",10});
    // for(auto x: um)
    //     cout<<x.first<<"\t"
    //     <<x.second<<endl;

    if(um.find("ide") !=um.end())
        cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;

    for(auto it = um.begin();it!=um.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}