#include<bits/stdc++.h>     
using namespace std;
int main()
{

    int arr[]={10,3,4,5,1,100};
    int n =sizeof(arr) /sizeof(arr[0]);
    sort(arr,arr+n);
    for(int x:arr)
        cout<<x<<" ";
    cout<<"\n";
    sort(arr,arr+n,greater<int>());
     for(int x:arr)
        cout<<x<<" ";

    return 0;
}
//It uses quick sort internally . It is hybrid of Quick Sort , Heap Sort and Insertion Sort.
// Worst case and average case: O( n log n)










