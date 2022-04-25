#include<bits/stdc++.h>
using namespace std;

template <typename T>
struct Pair
{
    T x,y;
    Pair(T i, T j) {x=i , y=j;}
    T getFirst(){return x;}
    T getSecond(){return y;}
};


int main()
{
    Pair<int> P1(10,20),P2(30,40);
    cout<<P1.getFirst()<<" "<<P1.getSecond()<<endl;
      cout<<P2.getFirst()<<" "<<P2.getSecond();
    
    return 0;
}