#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define br cout<<endl;
#define mod 998244353
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        string s;
        cin>>s;

        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0') p("YES")
        else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') p("YES")
        else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') p("YES")
        else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0') p("YES")
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0') p("YES")
        else p("NO")
    }

    return 0;
}

