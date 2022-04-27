#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq={10,2,3,4,5};
    auto it = dq.begin();
    it++;
    dq.insert(it,5);
    cout<<"Deque size:"<<dq.size()<<endl;
    
    cout<<"Iteration pointing to : "<<(*it)<<endl;

    dq.insert(it,2,3);
    dq.pop_back();
    dq.pop_front();

    cout<<endl;
    for (int i = 0; i < dq.size(); i++)//printing element using random access
    {
        cout<<dq[i]<<" ";
    }
    

    return 0;
}