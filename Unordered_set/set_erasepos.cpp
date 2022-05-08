#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(5);
    s.insert(6);
    s.insert(7);
     
    // auto it = s.find(5);
    // s.erase(it,s.end());
    s.erase(s.begin(),s.end());
    cout<<"Size of set: "<<s.size()<<endl;
    for(auto x:s){
        cout<<x<<" ";
    }
    
    return 0;
}