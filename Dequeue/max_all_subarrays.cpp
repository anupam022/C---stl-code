//Sliding window problem
// Maximum in all subarrays of size
// i/p : arr[]={10,8,5,12,15,7,6}
// o/p: 10 12 15 15 15    k=3

#include<bits/stdc++.h>
using namespace std;

// int printMaxk(int arr[],int n,int k)
// {
//     for(int i=0;i<n-k+1;i++){
//         int mx=arr[i];
//     for(int j=i+1;j<i+k;j++){
//         mx=max(arr[j],mx);}
//                                         //Naive soln(O n^2)
//     cout<<mx<<" ";
// }
// }
vector < int > maxSlidingWindow(vector < int > & nums, int k) {
  deque < int > dq;
  vector < int > ans;
  for (int i = 0; i < nums.size(); i++) {
    if (!dq.empty() && dq.front() == i - k) dq.pop_front();

    while (!dq.empty() && nums[dq.back()] < nums[i])
      dq.pop_back();

    dq.push_back(i);
    if (i >= k - 1) ans.push_back(nums[dq.front()]);
  }
  return ans;
}
int main()
{
    // int arr[]={10,8,5,12,15,7,6};
    // int k=3;
    // int n=sizeof(arr)/sizeof(arr[0]);
    // printMaxk(arr,n,k);
  int i, j, n, k = 3, x;
  vector < int > arr {4,0,-1,3,5,3,6,8};
  vector < int > ans;
  ans = maxSlidingWindow(arr, k);
  cout << "Maximum element in every " << k << " window " << endl;
  for (i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";

    
    
    return 0;
}