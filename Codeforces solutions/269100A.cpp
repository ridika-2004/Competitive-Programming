#include<iostream>
#include<vector>
#define ll long long
#define m(x) cout<<x<<" ";
using namespace std;

vector<ll> suffix_array(string &s){
    s+="$";
	ll n = s.size(), alph = 256;
	vector<ll> cnt(max(n, alph)), p(n), c(n);

	for(auto c : s) cnt[c]++;
	for(ll i = 1; i < alph; i++) cnt[i] += cnt[i - 1];
	for(ll i = 0; i < n; i++) p[--cnt[s[i]]] = i;
	for(ll i = 1; i < n; i++) 
		c[p[i]] = c[p[i - 1]] + (s[p[i]] != s[p[i - 1]]);

	vector<ll> c2(n), p2(n);

	for(ll k = 0; (1 << k) < n; k++){
		ll classes = c[p[n - 1]] + 1;
		fill(cnt.begin(), cnt.begin() + classes, 0);

		for(ll i = 0; i < n; i++) p2[i] = (p[i] - (1 << k) + n)%n;
		for(ll i = 0; i < n; i++) cnt[c[i]]++;
		for(ll i = 1; i < classes; i++) cnt[i] += cnt[i - 1];
		for(ll i = n - 1; i >= 0; i--) p[--cnt[c[p2[i]]]] = p2[i];

		c2[p[0]] = 0;
		for(ll i = 1; i < n; i++){
			pair<ll, ll> b1 = {c[p[i]], c[(p[i] + (1 << k))%n]};
			pair<ll, ll> b2 = {c[p[i - 1]], c[(p[i - 1] + (1 << k))%n]};
			c2[p[i]] = c2[p[i - 1]] + (b1 != b2);
		}
		c.swap(c2);
	}
	return p;
}
int main()
{
    string s;
    cin>>s;
    vector<ll> v = suffix_array(s);
    for(ll i: v)
    {
        m(i)
    }
    return 0;
}