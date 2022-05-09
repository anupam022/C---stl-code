//Efficient soln of Paired sum
//Input: arr[] = {5, 9, 8, 13, 2, 4}
//         n = 6
//         sum = 7
// Output: True
// Explanation: 5 + 2 = 7
#include<bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int n,int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-arr[i]) != s.end())
        
            return true;
        s.insert(arr[i]);    
    }
    return false;
}
int main()
{
    int arr[]={3,5,7,1,2};
    int n=sizeof(arr) /sizeof(arr[0]);
    int sum=1;
    cout<<isPair(arr,n,sum)<<endl;
    if(isPair(arr,n,sum)){
        cout<<"Valid pair exists"<<endl;
    }
    else{
    cout<<"Valid Pair not exist";
    }
    return 0;
}