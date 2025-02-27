#include<bits/stdc++.h>
#include<thread>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){

    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
                cout<<"Swapping "<<v[j]<<" and "<<v[j+1]<<endl;
                this_thread::sleep_for(chrono::seconds(1));
            }
        }

        for(ll i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}