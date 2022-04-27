// Reverse a first K items of a queue
// I/p: Q={10,20,30,40,50}
//      K=3
// O/p: Q={30,20,10,40,50}

#include<bits/stdc++.h>
using namespace std;
void reverseFirstK(queue<int> &q , int K){
    if(q.empty()==true || K>q.size() || K<=0)
        return;


    stack<int> s; 
    
    /* Push the first K elements into a Stack*/                 
                                     //k=3
    for(int i=0;i<K;i++){          //q={40->front,50->back}
        s.push(q.front());         //s={10,20,30->top}
        q.pop();
    }

/* Enqueue the contents of stack 
       at the back of the queue*/
    while(!s.empty()){              //Till stack is not empty we are pushing all value from stack to queue                                     
        q.push(s.top());            //q={40,50,30,20,10}
        s.pop();                    //s={}->empty
    }

/* Remove the remaining elements and  
       enqueue them at the end of the Queue*/
    for(int i=0;i<q.size()-K;i++){        
        q.push(q.front());            //bringig out value which is at front and put to end of queue
        q.pop();                      //q={30,20,10,40,50}
    }
}
void Print(queue<int>& q)
{
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}
 

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    int K=3;
    reverseFirstK(q,K);
    Print(q);
    
    return 0;
}