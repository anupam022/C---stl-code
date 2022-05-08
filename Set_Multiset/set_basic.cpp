#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> s;
    set<int,greater<int>> s ; //decreasing order
    s.insert(23);
    s.insert(13);
    s.insert(3);
    s.insert(3);//ignored coz it's duplicate

    // for(int x:s){
    //     cout<<x<<" ";
    // }
    for(auto it=s.rbegin();it!=s.rend();it++){
        cout<<(*it)<<" ";                           //prints 3 12 23
    }
    return 0;
}