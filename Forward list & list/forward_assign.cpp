#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l;
    // l.assign({10,20,30,40,103});
    // forward_list<int> l2;
    // l2.assign(l.begin(),l.end());
    l.assign(5,10);//It will print 5 times 10
    //l.remove(10);
    for(auto it=l.begin();it!=l.end();it++)
        cout<<(*it)<<" ";
    return 0;
}