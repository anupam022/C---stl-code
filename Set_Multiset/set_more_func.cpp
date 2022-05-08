#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(13);
    s.insert(11);
    s.insert(9);
    s.insert(19);
    s.insert(14);
    
// find and count works same

    auto pos=s.find(13);
    if(pos==s.end()) //s.end represent element beyond
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    cout<<endl;
    cout<<"The set elements after 13 are: ";
    for(auto it = pos; it!=s.end(); it++){
        cout<<(*it)<<" ";
    }


    return 0;
}