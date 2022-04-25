#include<bits/stdc++.h>
using namespace std;

struct Student
{
    string f_name,l_name;
};

int main()
{
    vector<Student> v;
    Student s1,s2;
    v.push_back(s1);
    v.push_back(s2);

    for( Student &s:v){
        s.f_name="Geek";

    }

    
    // cout<<;
    return 0;
}