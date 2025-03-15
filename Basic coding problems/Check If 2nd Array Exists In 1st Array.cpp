#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
using namespace std;

int main(){

    map<ll,ll> m;
    while(1){
        ll n;
        cin>>n;
        if(n==-1){
            break;
        } else {
            m[n]++;
        }
    }

    while(1){
        ll n;
        cin>>n;
        if(n==-1){
            break;
        } else {
            if(m[n]==0){
                p("No")
                return 0;
            }
        }
    }

    p("Yes")
    return 0;
}