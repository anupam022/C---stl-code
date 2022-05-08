#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(40);

    auto it = ms.equal_range(20);//Equalrange makes pair of iterators first part is lower bound and second pair is upper bound.

    cout<<"\nThe lower bound for key 20 is : "<<*it.first;
    cout<<"\nThe upper bound for key 20 is : "<<*it.second;
    return 0;
}