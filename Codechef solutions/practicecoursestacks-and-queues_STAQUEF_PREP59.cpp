
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>

#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#define ll long long
using namespace std;

bool valid_parenthesis_checker(string s)
{
    stack <char> st;//taking an empty stack
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]==')')
        {
            if(st.empty() || st.top()==')')//if it doesn't have the opening bracket to make a pair
            {
                return false;
            }
            else//if it has an opening bracket clear that one
            {
                st.pop();
            }
        }
        else//if it's the opening bracket, push it
        {
            st.push(s[i]);
        }
    }
    if(st.empty())//after finishing the entire pop/top/push things, i it's empty that means it was valid
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    ll t;
    cin>>t;//number of test cases
    while(t--)
    {
        string s;
        cin>>s;

        ll res = valid_parenthesis_checker(s);//passing it in a function
        p(res)
    }
    return 0;
}
