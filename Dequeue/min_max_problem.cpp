// Design a data structure  that supports the following operations in O(1) time
// complexity.
// I/P:insertMin(5)          O/P: 2
//     insertMax(10)              15  
//     insertMin(3)               1
//     insertMax(15)              20
//     insertMin(2)
//     getMin()
//     getMax()
//     insertMin(1)
//     getMin()
//     insertMax(20)
//     getMax()

#include<bits/stdc++.h>
using namespace std;

deque<int> dq;
void insertMin(int x){ dq.push_front(x); }
void insertMax(int x) {dq.push_back(x);}
int getMin(){return dq.front();}
int getMax(){ return dq.back();}
void extractMin(){ return dq.pop_front();}
void extractMax(){ return dq.pop_back(); }
int main()
{
    insertMin(10);
    insertMax(15);
    insertMin(3);
    extractMin();
    extractMax();
    insertMin(8);
    for(auto x:dq){
        cout<<x<<endl;
    }
    // cout<<;
    return 0;
}