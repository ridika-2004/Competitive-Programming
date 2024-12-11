#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(ll i=1;i<s.size();i++){
            ll j=i;
            while(1){
                if(j==0){ break; }
                if(s[j-1]>=s[j]-1){ break; }
                s[j]-=1;
                swap(s[j-1],s[j]);
                j--;
            }
        }
        p(s)
    }  
    return 0;
}