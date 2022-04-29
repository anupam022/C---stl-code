// // Find k most frequent numbers 
// Input: arr[] = {3, 1, 4 , 4, 5, 2, 6, 1}
//         n = 8
//         k = 2
// Output: 1 4
// Explanation: As 1 and 4 occurs 2 times

// Input: arr[] = {1, 1, 4, 4}
//         n = 8
//         k = 1
// Output: 1
// Explanation: Although both 1 and 4 occurs 2 times, 
// but priority would be given to the lesser number
// which is 1 in this case.
#include<bits/stdc++.h>
using namespace std;

struct mycomp {
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        // if frequencies of two elements are same
        // then the larger number should come first
        if (p1.second == p2.second)
            return p1.first < p2.first;
  
        // insert elements in the priority queue on the basis of
        // decreasing order of frequencies
        return p1.second < p2.second;
    }
};

void PrintMostFreq(int arr[] ,int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;


    priority_queue<pair<int,int>,vector<pair<int,int> >,mycomp> pq(m.begin(),m.end());

     cout << k << " numbers with most occurrences are:\n";
    for (int i = 1; i <= k; i++) {
        cout << pq.top().first << " ";
        pq.pop();
    }

}

int main()
{
    
    int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    PrintMostFreq(arr, n, k);
    
    
    return 0;
}