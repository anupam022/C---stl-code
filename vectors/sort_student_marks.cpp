//Sort students by marks
//I/p:roll[]={101,108,103,105}
//marks[]={70,80,40,90}
   //O/p: 105  90
    //    108  80
    //    101  70
    //    103  40

#include<bits/stdc++.h>
using namespace std;

// bool myComp(pair <int,int> &p1,const pair<int,int> p2)
// {
//      return p1.second>p2.second;
// }

void sort_marks(int roll[],int marks[],int n)
{
 vector <pair<int,int>> vec ;
  for (int i = 0; i < n; i++)
  {
      vec.push_back(make_pair(roll[i],marks[i]));
  }
  cout<<"Vector pair before sorting: ";
  for (int i = 0; i < n; i++)
  {
      cout<<"("<<vec[i].first<<","<<vec[i].second<<")"<<" ";
  }
  cout<<endl;
  
  //sort(vec.begin(),vec.end(),myComp);
  sort(vec.begin(),vec.end(),greater<pair<int,int>>());
  
  cout<<"Vector pair after sorting: "<<endl;
  for(int i=0;i<n;i++)
    cout<<vec[i].first<<" "<<vec[i].second<<" "<<endl;
    
  
}


int main()
{
    int roll[]={101,108,103,105};
    int n=sizeof(roll)/sizeof(roll[0]);
    int marks[]={70,80,40,90};
    sort_marks(roll,marks,n);
    return 0;
}