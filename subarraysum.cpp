#include<iostream>
using namespace std;
int sub_array(int arr[],int n,int sum)
{
    int sum_existing;

    for(int i=0;i<n;i++)
    {
        sum_existing=arr[i];

        for(int j=i+1;j<n;j++)
        {
            if(sum_existing ==sum)
            {
                cout<<"sum is there between"<< i <<" and "<<j-1<<"\n";
                return 1;
            }

            if(sum_existing > sum || j == n)
            break;

            sum_existing=sum_existing+arr[j];
        }
    }
    cout<<"No subarray exist"<<"\n";
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