#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(8);
    s.insert(9);
    s.insert(1);
    // s.clear();
    auto pos= s.find(5);
    s.erase(pos,s.end());

    // for(auto it=pos;it!=s.end();it++){
    //     cout<<*it<<" ";
    // }
    

    for(int x:s){
        cout<<x<<" ";
    }
    return 0;
}