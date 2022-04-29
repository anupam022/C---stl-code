// Kth largest element in an array 
// I/p: arr[]={5,10,15,20,8}
//  k=2
// O/p: 15 20
#include<bits/stdc++.h>
using namespace std;

void kthLargest(int arr[],int n,int k){
    priority_queue<int> pq(arr,arr+n);
    while(k>0){
        cout<<pq.top()<<" ";
        pq.pop();
        k--;
    }

}

int main()
{
    int arr[]={5,15,10,20,8};
    int n=sizeof(arr) / sizeof(arr[0]);

    kthLargest(arr,n,3);
    

    return 0;
}