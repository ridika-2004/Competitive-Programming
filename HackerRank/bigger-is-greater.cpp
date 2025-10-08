#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define p(x) cout<<x<<"\n";

string biggerIsGreater(string w){
    if(next_permutation(w.begin(), w.end())){
        return w;
    } else {
        return "no answer";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        p(biggerIsGreater(s));
    }


    return 0;
}
