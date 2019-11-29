#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        //stack<int> s1;
        cin>>s;
        stack<int> s1;
        int i=0;
        int one_count=0;
        while(s[i] != '\0')
        {
            if(s[i] == '(' || s[i] == '{' || s[i]=='[')
            {
                one_count++;
                cout<<one_count<<" ";
                s1.push(one_count);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
               int tope=s1.top();
               cout<<tope<<" ";
               s1.pop();
            }
            else{}
            i++;
        }
        cout<<"\n";
    }
    return 0;
}