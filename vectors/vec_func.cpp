#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int ele;
    for(int i=0;i<5;i++){

    cout<<"Enter an element to insert: ";
    cin>>ele;
    v.push_back(ele);
    }
      for(int x : v){

        cout<<x<<" ";
    }
    cout<<endl;
    
     cout<<"Popped ele is: "<<v.pop_back();
     cout<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    return 0;
}



