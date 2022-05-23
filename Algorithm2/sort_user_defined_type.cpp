#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x;
    int y;
};
bool mycomp(Point p1, Point p2)
{
    return p1.x<p2.x;
}
int main()
{
    vector<Point> v = {{2,100},{10,123},{1,234}};
    sort(v.begin(),v.end(),mycomp);   
    for(auto i:v)
        cout<<i.x<<" "<<i.y<<endl;
    return 0;
}