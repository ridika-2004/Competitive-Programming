#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

void printVector(const vector<ll>& v) {
    for (ll i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<pair<ll, ll>> v(n);
    ll max_deadline = 0;
    for(ll i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
        max_deadline = max(max_deadline, v[i].second);
    }

    vector<ll> ans(max_deadline+1,0);

    sort(v.begin(), v.end(), [](pair<ll, ll> a, pair<ll, ll> b){
        return a.first > b.first;
    });

    for(ll i=0;i<n;i++){
        ll profit = v[i].first;
        ll deadline = v[i].second;

        for(ll j=deadline; j>=1; j--){
            if(ans[j] == 0){
                ans[j] = profit;
                break;
            }
        }
    }

    ll sum = accumulate(ans.begin(), ans.end(), 0LL);
    p(sum);

    return 0;
}
