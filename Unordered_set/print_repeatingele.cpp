#include<bits/stdc++.h>
using namespace std;
void printRepeating(int arr[],int n){
     unordered_set<int> s;

    for(int i=0;i<n;i++){
        if(s.find(arr[i]) != s.end()){
        cout<<arr[i]<<" ";}
        else{
        s.insert(arr[i]);
        }
    }
}
int main()

{
     int arr[] = {2,2,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr,n);
    
    return 0;
}
