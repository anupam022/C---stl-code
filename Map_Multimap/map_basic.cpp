#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert({10,200});
    m[5] = 100;//another way of inserting of key and values.

    m.insert({3,300});
    m.insert({3,100});// It will be ignored
    
    for(auto &x : m)
        cout<<x.first<<" "<<x.second<<" ";
    return 0;

}