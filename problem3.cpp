#include<iostream>
#include<algorithm>
using namespace std;
#define SIZE 10000
class MyQueue
{
    private:
    int arr[SIZE];
    int front;
    int rear;
    public:
    MyQueue()
    {
        front = rear = -1;
    }
    bool is_full()
    {
        if(rear == SIZE -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool is_empty()
    {
        if(front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int x)
    {
        if(is_empty())
        {
           front=front+1;
           rear=rear+1; 
           arr[rear]=x;
        }
        else if(is_full())
        {
            cout<<"OverFlow"<<"\n";
        }
        else{
            rear=rear+1;
            arr[rear]=x;
        }
    }
    int dequeue()
    {
        if(is_empty())
        {
            return -1;
        }
        else
        {
            int p = arr[front];
            front = front+1;
            return p;
        }
    }
};
int main()
{
    int t;
    cin>>t;
    int Q; 
    while(t--)
    {
        MyQueue obj;
        cin>>Q;
        int choice;
        while(Q--)
        {
           cin>>choice;
        if(choice == 1 )
        {
           int a;
           cin>>a;
           obj.enqueue(a);
        }
       if(choice == 2)
       {
          cout<<obj.dequeue()<<"\n";
       }
       }
    }
    return 0;
}