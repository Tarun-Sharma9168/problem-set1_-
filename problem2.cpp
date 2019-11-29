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
       for(int i=0;i<N;i++)
       {
           arr[i]=arr[i]*arr[i];
       }
       sort(arr,arr+N);
       bool flag=false;
       for(int i=N-1 ; i>=2 ; i--)
       {
           for(int j=0,k=i-1 ; j<k ;)
           {
                if(arr[j]*arr[j] + arr[k]*arr[k] == arr[i]*arr[i])
                {
                      flag=true;
                      break;
                }
                else if(arr[j]*arr[j] + arr[k]*arr[k] < arr[i]*arr[i])
                {
                      j++;
                }
                else if(arr[j]*arr[j] + arr[k]*arr[k] > arr[i]*arr[i])
                {
                      k--;
                }
           }
           if(flag)
           {
               break;
           }
       }
       if(flag)
       {
           cout<<"Pythagorean Triplet"<<"\n";
       }
       else
       {
           cout<<"No Pythagorean Tripet Exist"<<"\n";
       }
    }
    return 0;
}