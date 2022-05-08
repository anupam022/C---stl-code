//An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized.
//Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(11);
    s.insert(12);

    for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"Size of unordered set: "<<s.size()<<endl;

    s.clear();
    cout<<"Size of unordered set after clearing : "<<s.size()<<endl;
    
    return 0;
}