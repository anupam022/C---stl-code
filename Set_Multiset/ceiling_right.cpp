// Ceiling of every item on right: Least greater element on its right.The element on right side closest greater
// I/p: arr[]={10,100,200,30,120,120}
// O/p:  30 120 -1 120 120 -1

// I/p: arr[]={10,20 30,40}
// O/p: 20 30 40 -1 
// The element which have minimum difference (diff value) we add to arr[i] at last and that will be our ans.

 #include<bits/stdc++.h>
 using namespace std;


// void printCeiling(int arr[],int n){                  //O(n^2)
//     for(int i=0;i<n;i++)
//     {
//         int diff = INT_MAX;
//         for(int j=i+1;j<n;j++)
        
//             if(arr[j]>=arr[i])
//                 diff = min(diff,arr[j]-arr[i]);
        
//         if(diff == INT_MAX)
//             cout<<-1<<" ";
//         else
//             cout<<(arr[i]+diff)<<" ";
//     }
// }

void printCeiling(int arr[],int n){
    set<int> s;
    int res[n];
    for(int i=n-1;i>=0;i--){
        auto it = s.lower_bound(arr[i]);
        if(it == s.end())
            res[i] = -1;
        else
            res[i] = *it;
        s.insert(arr[i]);
    }
    for(int i = 0;i<n;i++)
        cout<<res[i]<<" ";
    
}

 int main()
 {
     int arr[]={10,100,200,30,120,120};
     int n=sizeof(arr) /sizeof(arr[0]);
     printCeiling(arr,n);
     
     return 0;
 }