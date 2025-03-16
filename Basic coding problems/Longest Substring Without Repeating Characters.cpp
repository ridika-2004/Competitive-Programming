#include <bits/stdc++.h>
#define ll long long
#define m(x) cout << x << " ";
#define p(x) cout << x << endl;
using namespace std;

int main() {

    string s;
    m("Enter String : ")
    cin>>s;
    unordered_map<char,ll> um;
    for(ll i=0;i<s.size();i++){
        um[s[i]]++;
    }

    string res ="";
    unordered_map<char,ll> um2;
    for(auto i: um){
        char c = i.first;
        //p(c)
        if(um2[c]>0){
            break;
        }
        res+=c;
        um2[c]++;
        um[c]--;
    }
    reverse(res.begin(),res.end());
    p("Output : "<<res);
    return 0;
}
