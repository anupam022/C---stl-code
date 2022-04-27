#include<bits/stdc++.h>
using namespace std;

void printGreaterEle(int arr[] , int n){
    stack<int> s;

    s.push(arr[0]);

    for(int i=1;i<n;i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(!s.empty() && s.top()<=arr[i])
        {
            cout<<s.top()<<" --> "<<arr[i]<<endl;
            s.pop();
        }

        s.push(arr[i]);
    }
        while (s.empty() == false) {
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}
 
int main()
{   
    int arr[]={4,6,2,3,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    printGreaterEle(arr,n);
    
    return 0;
}


// #include<bits/stdc++.h>

// using namespace std;
// class Solution {
//   public:
//     vector < int > nextGreaterElements(vector < int > & nums) {
//       int n = nums.size();
//       vector < int > nge(n, -1);
//       stack < int > st;
//       for (int i = 2 * n - 1; i >= 0; i--) {
//         while (!st.empty() && st.top() <= nums[i % n]) {
//           st.pop();
//         }

//         if (i < n) {
//           if (!st.empty()) nge[i] = st.top();
//         }
//         st.push(nums[i % n]);
//       }
//       return nge;
//     }
// };
// int main() {
//   Solution obj;
//   vector < int > v {5,7,1,2,6,0};
//   vector < int > res = obj.nextGreaterElements(v);
//   cout << "The next greater elements are" << endl;
//   for (int i = 0; i < res.size(); i++) {
//     cout << res[i] << " ";
//   }
// }