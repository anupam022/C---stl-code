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
    s.erase(6);
    cout<<"Size is: "<<s.size()<<endl;
    for(int x:s){
        cout<<x<<" ";
    }
    return 0;
}