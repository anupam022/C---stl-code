#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{10,20,30};
    v.resize(3);
    for(int x : v){
        cout<<x<<" ";

    }
    cout<<endl;
    v.resize(5);
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;

    v.resize(8,100);
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}