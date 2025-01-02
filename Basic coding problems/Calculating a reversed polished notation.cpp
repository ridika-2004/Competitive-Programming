#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    string s;
    cin>>s;
    stack<ll> st;
    ll ans=0;
    for(char x : s){
        if(x=='+' || x=='-' || x=='*' || x=='/'){
            ll n1 = st.top();
            st.pop();
            ll n2 = st.top();
            st.pop();
            ll res =0;
            if(x=='+'){
                res = n1+n2;
            } else if(x=='-'){
                res = n2-n1;
            } else if(x=='*'){
                res = n1*n2;
            } else if(x=='/'){
                res = n2/n1;
            }
            st.push(res);
        } else {
            st.push(x-'0');
        }
    }
    p(st.top())
    return 0;
}