// Purchasing Maximum Items
// i/p: cost[]={1,12,5,111,200}
// sum=10
// o/p:2
//using heap(Priority Queue)
#include<bits/stdc++.h>
using namespace std;
int purchaseMaxItems(int arr[] , int n, int sum){
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    int res=0;
    while(sum>= 0 && !pq.empty() && pq.top()<=sum ){
        sum=sum-pq.top();
        pq.pop();
        res++;
    }
    return res;
}
int main()
{
    int arr[]={1,12,5,111,200};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=10;
    cout<<purchaseMaxItems(arr,n,sum);

    return 0;
}