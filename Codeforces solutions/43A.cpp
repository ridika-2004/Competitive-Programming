#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll t;
    cin>>t;
    map<string,ll> m;
    while(t--){
        string s;
        cin>>s;
        m[s]++;
    }
    string res;
    ll index =0;
    for(auto &i:m){
        if(i.second>index){
            res = i.first;
            index = i.second;
        }
    }
    p(res)
    return 0;
}