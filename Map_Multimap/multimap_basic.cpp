#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mp;
    mp.insert({10,200});
    mp.insert({10,200});
    mp.insert({20,400});

    cout<<"Count for 10 is "<<mp.count(10)<<endl;
    
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;

    mp.erase(10);//It deletes all occurence of key
    cout<<"now count for 10 is :"<<mp.count(10)<<endl;
    return 0;
}