#include <bits/stdc++.h>
using namespace std;
string findwinner(string arr[], int n)
{
    unordered_map<string, int> m;
    string winner = " ";
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
        int mx = 0;
        
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second > mx){
                mx = it->second;
                winner = it->first;
            }
            else if (it->second == mx && it->first<winner)
            {
                winner = it->first;
            }
        }
    }
    for(auto x:m)
        {
            cout<<x.first<<" "<<x.second<<endl;

        }
    return winner;
}
int main()
{
    string arr[] = {"abc", "xyz", "xyz", "abc"};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout <<"The winner is "<< findwinner(arr, n);
    return 0;
}