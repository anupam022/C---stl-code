//implementing priority queue using array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30};
    priority_queue<int> pq(arr,arr+3);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}