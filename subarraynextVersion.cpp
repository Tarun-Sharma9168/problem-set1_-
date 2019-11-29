#include<iostream>
using namespace std;
int sub_array(int *arr,int n,int sum)
{
    int start=0;
    int sum_super=arr[0];
    for(int i=1;i<=n;i++)
    {
           while(sum_super > sum && start < i-1)
           {
               sum_super=sum_super-arr[start];
               start++;
           }

           if(sum_super == sum )
           {
                cout<<"sum found between "<<start<<" "<<i-1<<"\n";
                return 1;
           }

           if( i < n)
           {
               sum_super+=arr[i];
           }
    }
 cout<<"No Subarray Found"<<"\n";
 return 0;
}
int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
         cin>>n>>k;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }

         sub_array(arr,n,k);
    }

    return 0;
}