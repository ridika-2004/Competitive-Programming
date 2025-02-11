#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> st;
        for(ll i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else {
                if(st.top()==s[i]){
                    while(st.size()>1){
                        st.pop();
                    }
                }
                else{
                    st.push(s[i]);
                }
            }

        }

        p(st.size())
    }
    return 0;
}