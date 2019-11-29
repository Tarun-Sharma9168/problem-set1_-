#include<iostream>
#include<stack>
using namespace std;
class Queue{
    private:
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x)
    {
        if(s1.empty())
        {
           s1.push(x);
        }
        else
        {
            while(!s1.empty())
            {
                int p=s1.top();
                s2.push(p);
                s1.pop();
            }
            s1.push(x);
            while(!s2.empty())
            {
                int q = s2.top();
                s1.push(q);
                s2.pop();
            }
        }
    }
    int pop()
    {
        if(s1.empty())
        return -1;
        int w=s1.top();
        s1.pop();
        return w;
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
         int choice;
         while(Q--)
         {
            cin>>choice;
            if(choice == 1)
            {
                int a;
                cin>>a;
                obj.push(a);
            }
            if(choice == 2)
            {
                cout<<obj.pop()<<" ";
            }
         }
         cout<<"\n";
    }
    return 0;
}