#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

vector<ll> tree[1005];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<tuple<int, string, float>> vt;

    for(ll i=0;i<5;i++){
        int a;
        string b;
        float c;
        cin >> a >> b >> c;
        vt.push_back(make_tuple(a, b, c));
    }

    sort(vt.begin(), vt.end());

    for(const auto& t : vt) {
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    }
    return 0;
}
