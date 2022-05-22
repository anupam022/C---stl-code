#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x;
    int y;
    Point(int i,int j)
    {
        x=i;
        y=j;
    }
};
bool myComp(Point p1,Point p2) {
    return (p1.x<p2.x);
}
int main()
{
    vector<Point> v={{5,4},{200,5},{3,5}};
    auto it = max_element(v.begin(),v.end(),myComp);
    cout<<((*it).x)<<" "<<((*it).y)<<endl;
    
    
     auto it1 = min_element(v.begin(),v.end(),myComp);
    cout<<((*it1).x)<<" "<<((*it1).y)<<endl;
    return 0;
}