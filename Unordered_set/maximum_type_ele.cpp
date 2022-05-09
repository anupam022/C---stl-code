// Problem: Given an array of candies, the goal is to distribute the candies between a brother and a sister such that the sister gets the maximum types of candies. Assume that there is an even number of candies and the sister must not get the minimum type of candies in comparison the brother.
// Note: If all the candies are distinct, then distribute an equal number of candies between the brother and the sister, as that would mean equal distribution of type too.
// Input: {1, 1, 2, 2, 3, 3}
// Output: 3
// Explanation: In the array, there are 6 candies
// and there are 3 types i.e., Type 1, Type 2 and Type 3. So the
// sister can get maximum 3 types of candies.
// brother = {1, 2, 3}
// sister = {1, 2, 3}

// Input: {1, 1, 1, 5}
// Output: 2
// Explanation: In the array, there are 4 candies
// and there are 2 types i.e., Type 1 and Type 5. So the sister
// can get maximum 2 types of candies.
// brother = {1, 1}
// sister = {1, 5}
// Algo-> Count distinct elements . Let this count be d.
// If d>=n/k
// return n/k
// else
// return d
#include<bits/stdc++.h>
using namespace std;
int maxDistinct(int arr[],int n,int k)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);//s{1,2,3,5} coz unordered set removes duplicates element in insertion.
    }
    int d=s.size();
    if(d>=n/k)
        return n/k;
    else
        return d;
}
int main()
{
    int arr[]={1,1,2,3,1,5,1,2};
    int n=sizeof(arr) / sizeof(arr[0]);
    int k=2;
    int result = maxDistinct(arr,n,k); 
    cout<<result<<" ";
    return 0;
}
