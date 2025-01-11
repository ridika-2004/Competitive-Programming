#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> merge(const vector<ll>& a1, const vector<ll>& a2) {
    vector<ll> a3;
    ll i = 0, j = 0;

    while (i < a1.size() && j < a2.size()) {
        if (a1[i] <= a2[j]) {
            a3.push_back(a1[i]);
            i++;
        } else {
            a3.push_back(a2[j]);
            j++;
        }
    }

    while (i < a1.size()) {
        a3.push_back(a1[i]);
        i++;
    }

    while (j < a2.size()) {
        a3.push_back(a2[j]);
        j++;
    }

    return a3;
}

vector<ll> mergesort(vector<ll>& v) {
    if (v.size() <= 1) {
        return v;
    }

    ll mid = v.size() / 2;

    vector<ll> left(v.begin(), v.begin() + mid);
    vector<ll> right(v.begin() + mid, v.end());

    left = mergesort(left);
    right = mergesort(right);
    return merge(left, right);
}

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<ll> sorted = mergesort(v);

    for (ll num : sorted) {
        cout << num << " ";
    }

    return 0;
}
