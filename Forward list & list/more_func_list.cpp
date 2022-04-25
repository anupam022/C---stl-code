#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l= {10,20,30};
    auto it = l.begin();
    it++;
    l.insert(it,10);
    l.insert(it,2,7);//It will print 2 times 7
    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<" "<<l.size();
    return 0;
}