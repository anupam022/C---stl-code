#include<bits/stdc++.h>  //O(log n)
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50,60};
    int x=20;
    if(binary_search(v.begin(),v.end(),x) == true)
    cout<<"Found";
    else
    cout<<"Not found";
    return 0;
}