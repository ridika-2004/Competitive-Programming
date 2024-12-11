#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    string s;
    cin>>s;
    map<char, ll> m;
    for(char c: s){
        m[c]++;
    }
    vector<pair<ll,char>>v;
    for(auto &i:m){
        v.push_back({i.second,i.first});
    }
    sort(v.rbegin(),v.rend());
    string t="";
    for(auto i:v){
        ll n = i.first;
        char c = i.second;
        while(n--){
            t+=c;
        }
    }
    p(t)
    return 0;
}