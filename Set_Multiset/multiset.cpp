#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(12);
    ms.insert(11);
    ms.erase(10);//It erases all instances key of multiset
    for(auto x: ms){

    cout<<x<<" ";
    }
    return 0;
}