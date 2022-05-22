#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={20,20,30,10,40,10};
    
    auto it = find(v.begin(),v.end(),10);
    if(it==v.end())
    {
        cout<<"Not found";

    }   
    else{
        cout<<"Found at "<<(it-v.begin())<<endl;
    }
  

     
    return 0;
}