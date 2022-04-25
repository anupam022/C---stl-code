#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{10,15,20};
    auto it = v.insert(v.begin(),100);
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,300);

    vector<int> v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+2);

    for(int x :v)
    {
        cout<<x<<" ";
    }    
    cout<<endl;
    for(int x :v){
        cout<<x<<" ";
    }
    return 0;
}