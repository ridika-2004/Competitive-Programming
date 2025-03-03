#include<bits/stdc++.h>
#include<thread>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

void heapify(vector<ll> &a, ll n, ll i){
    ll largest = i;
    ll left = 2*i+1;
    ll right = 2*i+2;

    p("Largest: "<<largest)
    p("Left: "<<left)
    p("Right: "<<right)

    this_thread::sleep_for(chrono::seconds(2));

    if(left<n && a[left]>a[largest]){
        largest = left;
        p("Left: "<<left)

        this_thread::sleep_for(chrono::seconds(2));
    }

    if(right<n && a[right]>a[largest]){
        largest = right;
        p("Right: "<<right)
        this_thread::sleep_for(chrono::seconds(2));
    }

    if(largest!=i){
        swap(a[i],a[largest]);
        p("Swapped: "<<a[i]<<" "<<a[largest])
        this_thread::sleep_for(chrono::seconds(2));
       
        heapify(a,n,largest);
        p("Heapify: "<<largest)
        this_thread::sleep_for(chrono::seconds(2));
    }
}

int main(){

    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=n/2-1;i>=0;i--){
        p("Heapify: "<<i)
        heapify(a,n,i);
    }

    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}