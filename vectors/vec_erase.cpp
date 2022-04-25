#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{10,20,30};
    v.erase(v.begin());
    for (int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin(),v.end()-1);
    for( int x :v ){
        cout<<x<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{5,10,15,20};
    v.clear();
    cout<<v.size()<<" ";
    if(v.empty()==true){
        cout<<"Empty";
    }
    else{
        cout<<"Not empty";
    }
    return 0;
}