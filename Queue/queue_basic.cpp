#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(45);
    q.push(40);

    while(!q.empty()){    
    cout<<q.front()<<" "<<q.back()<<endl;

    q.pop();
    }// it removes the first element
    //cout<<q.front()<<" "<<q.back()<<endl;
    cout<<q.size();
    return 0;
}