#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int Q;
    while(t--)
    {
    cin>>Q;

    if(Q & ( Q>>1 ))
    {
        cout<<"Not Sparse"<<"\n";
    }
    else{
        cout<<"Sparse"<<"\n";
    }
    }
    return 0;
}