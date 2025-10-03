#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define p(x) cout << x << "\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<ll, pair<ll,ll>> m;
    m[32] = {4,8};
    m[60] = {4,15};
    m[64] = {4,16};
    m[92] = {4,23};
    m[168] = {4,42};
    m[120] = {8,15};
    m[128] = {8,16};
    m[184] = {8,23};
    m[336] = {8,42};
    m[240] = {15,16};
    m[345] = {15,23};
    m[630] = {15,42};
    m[368] = {16,23};
    m[672] = {16,42};
    m[966] = {23,42};

    ll sum = 108;

    ll n1,n2,n3,n4,n5,n6;

    p("? 1 2")
    cout.flush();

    ll ans1;
    cin>>ans1;

    map<ll,ll> freq;

    ll a1 = m[ans1].first;
    ll a2 = m[ans1].second;

    freq[a1]++;
    freq[a2]++;

    p("? 2 3")
    cout.flush();

    ll ans2;
    cin>>ans2;

    ll a3 = m[ans2].first;
    ll a4 = m[ans2].second;

    freq[a3]++;
    freq[a4]++;

    if(freq[a1]==2) n2 = a1;
    else if(freq[a2]==2) n2 = a2;
    else if(freq[a3]==2) n2 = a3;
    else if(freq[a4]==2) n2 = a4;

    n1 = ans1/n2;
    n3 = ans2/n2;

    p("? 3 4")
    cout.flush();

    ll ans3;
    cin>>ans3;

    n4 = ans3/n3;

    p("? 4 5")
    cout.flush();

    ll ans4;
    cin>>ans4;

    n5 = ans4/n4;
    n6 = sum - (n1+n2+n3+n4+n5);

    p("! " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << n6)

    return 0;
}
