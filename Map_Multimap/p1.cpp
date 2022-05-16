//Design a ds  for item prices
// 1. add(price,item)
// 2. find(price)
// 3.  printSorted()
// 4. printGreaterSorted(price)
// 5. printSmallerSorted(price)
// add(10,"abc"),add(5,"xyz"),add(100,"pqr")
// find(5) : xyz
// printSorted()  xyz   5            printGreaterSorted(7): abc 10
//                abc   10                                  pqr 100
//                pqr   100

#include<bits/stdc++.h>
using namespace std;
class DS{
map<int,string> m;
public:

void add(int price,string name)
{
    m.insert({price,name});
    for(auto &x:m){
        cout<<x.first<<"\t"<<x.second<<endl;
    }
}
string find(int price)
{
    auto res = m.find(price);
    if(res == m.end())
        return "";
    else
        return res->second;
}
void printSorted()
{
    for(auto x :m)
        cout<<x.second<<"\t"<<x.first<<endl;
}

void printGreaterSorted(int price)
{
    auto it = m.upper_bound(price);
    while(it!=m.end())
    {
        cout<<it->second<<" "<<it->first<<endl;
    it++;
    }
}

void printSmallerSorted(int price)
{
    auto it1 = m.lower_bound(price);
    while(it1!=m.end())
    {
        cout<<it1->second<<" "<<it1->first<<endl;
    it1++;
    }
}
};
int main()
{
    DS data;
    // int price;
    // string name;
    
    // cout<<"Enter price and name: "<<endl;
    // for(int i=1;i<=4;i++){
    // cin>>price>>name;
    // }
    // cout<<"Price \t Name"<<endl;
    // for(int i=1;i<=4;i++){
    // data.add(price,name);}
    cout<<"After Inserting: "<<endl;
  
   data.add(20,"pqr");
   data.add(40,"abc");
   data.add(10,"xyz");
cout<<"After sorting: "<<endl;
    data.printSorted();

    data.printGreaterSorted(30);
    data.printSmallerSorted(20);
    return 0;
}