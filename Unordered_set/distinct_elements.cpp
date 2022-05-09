#include<bits/stdc++.h>
using namespace std;

// void printDistinct(int arr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         bool flag=false;
//         for (int j = 0; j < i; j++)
//         {
//             if(arr[j]==arr[i])
//             {
//                 flag=true;
//                 break;
//             }
//         }
//          if(flag==false){
//             cout<<arr[i]<<" ";
//         }
        
//     }
    
// }
// void printDistinct(int arr[],int n){
//     unordered_set<int> s;

//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }

//     for(auto it = s.begin();it!=s.end();it++){
//         cout<<(*it)<<" ";
//     }
    

// }
//To get output in same order of input.
void printDistinct(int arr[],int n){
    unordered_set<int> s;

    for(int i=0;i<n;i++){
        if(s.find(arr[i]) == s.end()){
        cout<<arr[i]<<" ";
        s.insert(arr[i]);
        cout<<"\n";
        cout<<s.size();
        }
    }
}

int main()
{
    int arr[] = {10,8,10,10,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int result=printDistinct(arr,n);
    // cout<<result.size()<<" \n";
    // for(auto r:result){
    //     cout<<r<<" ";
    // }
    printDistinct(arr,n);
    
    return 0;
}