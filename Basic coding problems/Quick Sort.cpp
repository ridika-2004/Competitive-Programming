#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll partition(vector<ll> &v, ll low, ll high){
    ll pivot = v[low];
    ll i = low;

    for(ll j=low+1;j<=high;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i],v[low]);
    return i;

}

void quicksort(vector<ll> &v, ll low, ll high){
    if(low<high){
        ll loc = partition(v,low,high);
        quicksort(v,low,loc-1);
        quicksort(v,loc+1,high);
    }
}

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    quicksort(v,0,n-1);
    for(ll i: v){
        cout<<i<<" ";
    }
    return 0;
}
