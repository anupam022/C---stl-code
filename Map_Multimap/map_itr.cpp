#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert({10,200});
    m.insert({20,300});
    m.insert({30,400});

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    m.clear();
    cout<<m.size();
    return 0;
}