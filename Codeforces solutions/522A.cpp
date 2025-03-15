#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

void to_lowercase(string &s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,ll> m;

    string polycarp = "Polycarp";
    to_lowercase(polycarp);
    m[polycarp] = 1;

    ll max_depth = 1;

    ll t;
    cin>>t;
    while(t--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;

        to_lowercase(s1);
        to_lowercase(s3);

        m[s1] = m[s3]+1;
        max_depth = max(max_depth, m[s1]);

    }

    p(max_depth)
    return 0;
}