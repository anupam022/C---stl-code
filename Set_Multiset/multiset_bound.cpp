#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    auto it1=ms.lower_bound(10);
    auto it2=ms.upper_bound(10);

    cout<<(*it1)<<" "<<(*it2);
    return 0;
}