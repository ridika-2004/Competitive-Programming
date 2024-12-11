#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define ll long long
#define m(x) cout<<x<<" ";
#define p(x) cout<<x<<endl;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        char c;
        string s;
        map<char,ll>m;
        for(ll i=0;i<n;i++){
            cin>>c;
            s+=c;
            m[c]++;
        }
        vector<pair<char,ll>> v;
        for(auto &i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        char c1,c2;
        for(auto i:v){
            c1 = i.second;
            break;
        }
        for(auto i:v){
            c2 = i.second;
        }
        for(ll i=0;i<n;i++){
            if(s[i]==c1){
                s[i]=c2;
                break;
            }
        }
        p(s)
    }
    return 0;
}