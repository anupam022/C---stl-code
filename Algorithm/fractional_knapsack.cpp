// Knapsack Problem:
// Input -> W=50
// pair<int,int> arr[] = {{120,30},{100,20},{60,10}}
// After Sorting:Maximum value per weight
// arr[]={{60,10},{100,20},{120,30}}
// i=0  res=60, W=40
// i=1  res = 160, W=20
// i=2  res= 160+(20/30*120) =240
#include <bits/stdc++.h>
using namespace std;
bool mycomp(pair<int, int> a, pair<int, int> b)
{
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;

    return r1 > r2;
}

double fknap(int W, pair<int, int> arr[], int n)
{
    sort(arr, arr + n, mycomp);
    double res = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= W)
        {
            res += arr[i].first;
            W = W - arr[i].second;
        }
        else
        {
            res += arr[i].first * ((double)W / arr[i].second);
            break;
        }
    }
    return res;
}

int main()
{
    pair<int, int> arr[] = {{600, 50}, {500, 20}, {400, 30}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int W = 70;
    cout << "Fractional knapsack value: " << fknap(W, arr, n);
    return 0;
}



