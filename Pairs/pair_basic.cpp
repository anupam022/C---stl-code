#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p0;
    pair<int,int> p1(10,20);
    //here u use below constructor to give the value of p2
    pair<int,string> p2(10,"Anupam");

    cout<<p0.first<<" "<<p0.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second;
    return 0;
}