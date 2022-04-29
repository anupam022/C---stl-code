#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
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

//Output PS D:\Courses\C++ stl code> cd "d:\Courses\C++ stl code\Priority Queue\" ; if ($?) { g++ min_heap_pq.cpp -o min_heap_pq } ; if ($?) { .\min_heap_pq }
// 3
// 10
// 10 20 30 