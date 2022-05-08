#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    cout<<s.size()<<" "<<endl;
    s.erase(15);
    
    cout<<s.size()<<" "<<endl;
    auto it = s.find(10);
    s.erase(it);
    cout<<s.size()<<" "<<endl;
    for(auto it =s.begin();it!=s.end();it++)
    {
        cout<<"Set are : ";
        cout<<*it<<" ";
    }
    return 0;
}