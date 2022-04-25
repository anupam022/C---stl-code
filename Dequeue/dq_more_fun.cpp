#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq={10,20,30};
    auto it = dq.begin();
    it++;
    dq.insert(it,40);
    dq.pop_front();
    dq.pop_back();
    
    for(auto x:dq)
    {
        cout<<x<<" ";
        
    }
    cout<<endl;
    cout<<dq.size();
    return 0;
}