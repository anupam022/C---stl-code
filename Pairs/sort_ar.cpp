//Sort an array according to other
//I/P: a[]={3,1,2}
//     b[]={'G','E','K'}
//     pa[]={(3,'G'),(1,'E'),(2,'K')}
//O/P: b[]={'E','K','G'}

#include<bits/stdc++.h>
using namespace std;

void sortChar(int a[],char b[],int n)
{
    pair<int,char> pa[n];
    for (int i = 0; i < n; i++)
    {
        pa[i] = {a[i],b[i]};// forming an pa array

    }
    sort(pa,pa+n);
    for(int i=0; i<n; i++)
        cout<<"("<<pa[i].first<<","<<pa[i].second<<")"<<" ";  
}
int main()
{
    int a[]={3,1,2};
     int n = sizeof(a)/ sizeof(a[0]);
    char b[]={'G','E','K'};
   

    sortChar(a,b,n);
    
    return 0;
}