#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x <<" ";
using namespace std;

int main() {
    ll n;
    m("Number of input words : ")
    cin>>n;

    set<string> st;
    for(ll i=1;i<=n;i++){
        string s;
        m("Enter word "<<i<<" : ")
        cin>>s;
        reverse(s.begin(),s.end());
        st.insert(s);
    }

    ll q;
    m("Number of words to search : ")
    cin>>q;

    for(ll i=1;i<=q;i++){
        string c;
        m("Enter letter "<<i<<" : ")
        cin>>c;
        reverse(c.begin(),c.end());
        bool found = 0;
        for(auto i: st){
            if(i.find(c)==0){
                found = 1;
                break;
            }
        }
        if(found){
            p('T')
        } else {
            p('F')
        }
    }
    return 0;
}