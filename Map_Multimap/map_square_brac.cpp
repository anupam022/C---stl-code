#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert({10,200});
    cout<<m.size()<<" ";
    cout<<m[20]<<" ";//It will check if any key of 20 present if not present then insert it.
    // m[10]=300;
    m.at(10)=300;// this function only works if key is present.
    cout<<m[10]<<" ";
    cout<<m.size()<<" ";
    return 0;
}