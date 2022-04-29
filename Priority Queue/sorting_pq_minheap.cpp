//Sorting an array using priority queue 
// Input: arr[] = {1, 3, 7, 2, 4}
//        n = 5
// Output: {1, 2, 3, 4, 7}

// Input: arr[] = {2, 7, 1, 3, 9, 5, 4}
//        n = 7
// Output: {1, 2, 3, 4, 5, 7, 9}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,5,20};
    int n=sizeof(arr) / sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}