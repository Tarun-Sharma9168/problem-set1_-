#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int N;
    while(t--)
    {
       cin>>N;
       int arr[N];
       for(int i=0;i<N;i++)
       {
           cin>>arr[i];
       }
       bool flag=false; 
       for(int i=0;i<N-2;i++)
       {
           for(int j=i+1;j<N-1;j++)
           {
              for(int k=j+1;j<N;j++)
              {
                  int x=arr[i]*arr[i];
                  int y=arr[j]*arr[j];
                  int z=arr[k]*arr[k];

                  if(x==y+z  || y==x+z  || z==x+y)
                  {
                      flag=true;
                  }
              }
              if(flag)
              {
                  break;
              }
           }
           if(flag)
           {
               break;
           }
       }
       if(flag)
       {
           cout<<"Pythagorean Triplet Exist"<<"\n";
       }
       else
       {
           cout<<"No pythagorean Triplet"<<"\n";
       }
    }
}