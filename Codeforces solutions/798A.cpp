#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

void print(vector<char> v){
    for(char c : v){
        cout<<c<<" ";
    }
    p(" ")
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    if(s.size()&1){
        ll n = s.size()/2;
        vector<char> v1(n),v2(n);
        for(ll i=0;i<n;i++){
            v1[i] = s[i];
        }
        // print(v1);

        ll x = 0;
        for(ll i=s.size()-1;i>n;i--){
            v2[x] = s[i];
            x++;
        }

        // print(v2);

        ll res = 0;
        for(ll i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                res++;
            }
        }

        if(res==1 || res==0){
            p("YES")
        } else {
            p("NO")
        }
    } else {
        ll n = s.size()/2;
        vector<char> v1(n),v2(n);
        for(ll i=0;i<n;i++){
            v1[i] = s[i];
        }
        ll x = 0;
        for(ll i=s.size()-1;i>=n;i--){
            v2[x] = s[i];
            x++;
        }

        ll res = 0;
        for(ll i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                res++;
            }
        }

        if(res!=1){
            p("NO")
        } else {
            p("YES")
        }

    }
    return 0;
}
