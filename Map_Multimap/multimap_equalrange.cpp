#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mp;
    mp.insert({10,200});
    mp.insert({30,300});
    mp.insert({40,500});
    mp.insert({10,100});

    auto it=mp.equal_range(10);
    for(auto itr=it.first;itr!=it.second;itr++)
        cout<<itr->first<<" "<<itr->second<<endl;
    return 0;
}