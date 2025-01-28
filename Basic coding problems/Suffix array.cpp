#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

class suffix{
    public:
    ll index;
    string s;
};

bool comparator(suffix &a, suffix &b)
{
    return a.s<b.s;
}

vector<ll> buildSuffixArray(string s)
{
    ll n = s.size();
    vector<suffix> suffixes(n);
    for(ll i=0;i<n;i++)
    {
        suffixes[i] = {i,s.substr(i)};
    }

    sort(suffixes.begin(), suffixes.end(), comparator);
    vector<ll> suffixArray(n);
    for(ll i=0;i<n;i++)
    {
        suffixArray[i] = suffixes[i].index;
    }

    return suffixArray;
}
int main(){

    vector<ll> v = buildSuffixArray("ridika");
    for(ll i:v)
    {
        p(i)
    }
    return 0;
}
