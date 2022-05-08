#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    if(s.find(15) == s.end())
        cout<<"Not found";
    else
        cout<<"Found "<< (*s.find(15));
    return 0;
}