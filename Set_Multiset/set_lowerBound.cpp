#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(6);
    s.insert(5);
    s.insert(7);
    s.insert(9);
    // s.insert(4);

    // auto it=s.lower_bound(8);//If element is not present then the iterator gives the just greater the given element.
    auto it=s.upper_bound(5);//It gives element next to element and if not present the it gives just greater element next to this.
    if(it!=s.end())
        cout<<(*it)<<" ";
    else 
           cout << "The element entered is larger than the "
                "greatest element in the set";



    return 0;
}