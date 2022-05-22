#include<bits/stdc++.h>
using namespace std;
int main()              //O(n)
{
    vector<int> v = {10,20,30,40,50};
    fill(v.begin()+3,v.end(),5);
    for(auto x :v){
    cout<<x<<" ";
    }
    return 0;
}