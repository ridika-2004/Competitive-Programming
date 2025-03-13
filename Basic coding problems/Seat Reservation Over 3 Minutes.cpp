#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << " ";
#define px cout << endl;
using namespace std;

void print(set<ll> v){
    for(ll i: v){
        p(i)
    }
}

int main(){
    ll n;
    set<ll> v;
    while(1){
        cin>>n;
        if(n==-1){
            break;
        }
        auto it1 = find(v.begin(), v.end(), n-1);
        auto it2 = find(v.begin(), v.end(), n-2);
        auto it3 = find(v.begin(), v.end(), n-3);
        auto it4 = find(v.begin(), v.end(), n+1);
        auto it5 = find(v.begin(), v.end(), n+2);
        auto it6 = find(v.begin(), v.end(), n+3);
        if(it1==v.end() && it2==v.end() && it3==v.end() && it4==v.end() && it5==v.end() && it5==v.end() && it6==v.end()){
            v.insert(n);
            print(v);
        } else {
            print(v);
            p("(Reservation failed)")
        }
        cout<<endl;
    }
    return 0;
}
