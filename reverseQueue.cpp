#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Queue
{
    queue<int> q;
    queue<int> s;
    public:
    void push(int x)
    {
        if(q.empty())
        {
            q.push(x);
        }
        else
        {
            while(!q.empty())
            {
                int p=q.front();
                s.push(p);
                q.pop();
            }
            q.push(x);
            while(!s.empty())
            {
                int p=s.front();
                q.push(p);
                s.pop(); 
            }
        }
    }
    int pop()
    {
        int p=q.front();
        q.pop();
        return p;
    }
    void free()
    {
        while(!q.empty())
        {
            q.pop();
        }
    }
    void print_all()
    {
        while(!q.empty())
        {
        int p=q.front();
        cout<<p<<" ";
        q.pop();
        }
        cout<<"\n";
        free();
    }
};
int main()
{
    int t;
    cin>>t;
    int Q; 
    while(t--)
    {
       Queue obj;
       cin>>Q;
       int arr[Q];
       for(int i=0;i<Q;i++)
       {
           cin>>arr[i];
           obj.push(arr[i]);
       }
       obj.print_all();
    }
    return 0; 
}