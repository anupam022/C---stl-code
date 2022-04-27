#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str){
    stack<char> st;
    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}

int main()
{
    string str="Anupam";
    reverseString(str);
    
    return 0;
}