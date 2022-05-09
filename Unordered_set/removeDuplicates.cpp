#include<iostream>
#include<vector>
using namespace std;

vector<int> removeduplicate(vector<int> &arr)
{
    int n=arr.size();
    int current=arr[0];
   vector <int> result;
    result.push_back(arr[0]);

    for(int i=1;i<n;i++)
    {
        if(current != arr[i]){
        result.push_back(arr[i]);   
        current=arr[i];
        }
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> result = removeduplicate(arr);
    cout<<result.size()<<"\n";
    for(auto r:result)
    {
        cout<<r<<" ";
    }
    
    return 0;
}