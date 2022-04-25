// Keep index after sorting
// I/P:arr[]={10,20,4,7,9,1}
//     index={0,1,2,3,4,5}
// O/P  : 1       5
//        4       2
//        7       3
//        9       4
//        10      0
//        20      1

#include<bits/stdc++.h>
using namespace std;
void printSortedIndex(int arr[],int n)
{
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end());

    cout<<"Keeping Index after sorting: "<<endl;
    cout<<"Element\t"<<"index"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<"\t"<<v[i].second<<endl;
    }
    
}
int main()
{
    int arr[]={10,20,4,7,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);   
    printSortedIndex(arr,n);
    return 0;
}