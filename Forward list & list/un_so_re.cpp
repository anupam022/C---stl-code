//Unique,Sort,Reverse
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,4,5,9,11,11,56};
    l.unique();//{10,4,5,9,11,56}
    l.sort();//{4,5,9,10,11,56}
    l.reverse();//{56,11,10,9,5,4}
    for(auto x : l)
        cout<<x<<" ";
    return 0;
}