#include<iostream>
#include<vector>
#define ll long long
#define m(x) cout<<x<<" ";
using namespace std;

ll getmax(vector<ll> &a, ll n){
    ll m = 0;
    for(ll i=0;i<n;i++)
    {
        m = max(a[i],m);
    }
    return m;
}

void countingsort(vector<ll> &a, ll n, ll i){
    vector<ll> v(n);//output
    vector<ll> c(10,0);//count
    for(ll j=0;j<n;j++){
        c[(a[j]/i)%10]++;
    }
    for(ll j=1;j<10;j++){
        c[j]+=c[j-1];
    }
    for(ll j=n-1;j>=0;j--){
        v[c[(a[j]/i)%10]-1] = a[j];
        c[(a[j]/i)%10]--;
    }
    for(ll j=0;j<n;j++){
        a[j]=v[j];
    }
}

void radixsort(vector<ll> &a, ll n){
    ll m = getmax(a,n);
    for(ll i=1;m/i>0;i*=10)
    {
        countingsort(a,n,i);
    }
}

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    radixsort(a, n);
    for(ll i: a)
    {
        m(i)
    }
    return 0;
}