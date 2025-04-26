#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;

        ll res  = 0;
        if(s=="^") res = 1;
        else {
            if(s[0]=='_') res++;
            if(s.back()=='_') res++;
            for(ll i=0;i<s.size()-1;i++){
                if(s[i]=='_' && s[i+1]=='_') res++;
            }
        }

        p(res)

    }
    return 0;
}
