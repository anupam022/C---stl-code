#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}

// PS D:\Courses\C++ stl code\Priority Queue> cd "d:\Courses\C++ stl code\Priority Queue\" ; if ($?) { g++ pq_basic.cpp -o pq_basic } ; if ($?) { .\pq_basic }
// 3
// 30
// 30 20 10 