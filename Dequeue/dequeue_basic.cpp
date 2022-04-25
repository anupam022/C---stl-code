#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq={10,20,30};
    dq.push_back(4);
    dq.push_back(6);
    dq.push_front(7);
    dq.pop_back();
    for(auto x :dq){
        cout<<x<<" ";
        }

    return 0;
}