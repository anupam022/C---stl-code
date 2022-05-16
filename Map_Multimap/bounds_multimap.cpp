#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mp;
    mp.insert({20,100});
    mp.insert({50,500});
    mp.insert({30,300});
    mp.insert({20,200});

    auto it1=mp.lower_bound(20);
    auto it2=mp.upper_bound(20);
    cout<<(*it1).first<<" "<<(*it1).second<<endl;
    cout<<(*it2).first<<" "<<(*it2).second<<endl;
    return 0;
}