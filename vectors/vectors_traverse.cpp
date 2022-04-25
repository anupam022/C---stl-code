#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec;
    //vector<int> v{10,20,30};
    // vec.push_back(20);
    // vec.push_back(30);
    // vec.push_back(40);
    int ele;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter an element to insert: "<<" ";
        cin>>ele;
        vec.push_back(ele);
    }
    
    for(int x : vec){

        cout<<"Vector elements are: "<<x<<endl;
    }
    return 0;
}