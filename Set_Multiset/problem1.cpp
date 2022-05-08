// Inserting elements into the DS:
// insert(1) insert(37) insert(40) insert(45) insert(2) insert(18)  insert(): Inserts an element into the Data Structure
// DS: {1, 37, 40, 45, 2, 18}

// Deleting elements: delete(1) delete(37)         delete(): Delete an element from the Data Structure
// DS: {40, 45, 2, 18}

// Inserting back elements: insert(1) insert(37)
// DS: {40, 45, 2, 18, 1, 37}

// Searching elements: search(2) : TRUE search(3) : FALSE   search(): Search for an element in the Data Structure

// Finding next greater element: NextGreater(18) : 37 NextGreater(): Given an element, finding the just next greater element

// Finding the rank: getRank(18) : 3          getRank(): When sorted in an ascending manner, the position of the given element.
// For this, the DS is sorted in an ascending manner.
#include<bits/stdc++.h>
using namespace std;
set<int> s;

void insert(int x){
    s.insert(x);
}
void Delete(int x)
{
    cout<<"Deleted elements: "<<x<<endl;
    s.erase(x);
}
bool search(int x){
    cout<<"Searching for "<<x<<":";
    if(s.find(x) !=s.end())
        return true;
    return false;
}
void next_greater(int x){
    auto it=s.upper_bound(x);
    cout<<*it<<endl;
}

void getRank(int x){
   
    
    auto it=s.lower_bound(x);
    int p=distance(s.begin(),it);
    cout<<"Rank of "<<x<<" is: "<<p+1<<endl;       
}

int main()
{
    insert(1);
    insert(37);
    insert(40);
    insert(45);
    insert(2);
    insert(18);

    cout<<"The set is : "<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
        
    }
    cout<<endl;
    Delete(1);
    Delete(37);

    
    cout<<"The set is : "<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    insert(1);
    insert(37);

    
    cout<<"The new set is : "<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
cout<<endl;
    cout<<search(2)<<endl;
    cout<<search(3)<<endl;

    next_greater(18);
    getRank(18);
    

    return 0;
}
