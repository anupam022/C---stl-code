#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> &v)//We have to pass the reference to see the change
{
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
}
int main()
{
    vector<int> v{40,50,60};
    fun(v);
    
    for(int x : v){
    cout<<x<<" ";
    }
    
    
    return 0;
}