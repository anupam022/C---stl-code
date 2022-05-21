// design a data structure for storing balance
// set(1,100) set(2,5000)  set(3,1000)  set(4,20)
//get(1)-->100   get(3)--> 1000
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int set(int id,int bal){
    
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].first==id)
        {
            v[i].second=bal;
            return 0;
        }
    }
    v.push_back({id,bal});
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<"\t"<<v[i].second<<endl;
    }
}
     

int get(int id)
{
    for(int i=0;i<v.size();i++)
        if(v[i].first==id)
            return v[i].second;
    return 0;
}
int main()
{
    // vector<pair<int,int>> v;
    set(1,1000);
    set(4,4000);
    set(2,2000);
    set(2,3000);

    get(2);
    // for(auto x:v)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    return 0;
}