#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
using namespace std;

int main(){

    map<ll, ll> m;
    ll index=1;
    while(1){
        ll n;
        cin>>n;
        if(n==-1){
            break;
        } else {
            m[n] = index;
        }
        index++;
    }

    ll prev_index=0,count=1;
    while(1){
        ll n;
        cin>>n;
        if(n==-1){
            break;
        } else {
            if(m[n]==0){
                p("No")
                return 0;
            } else {
                if(count==1){
                    prev_index = m[n];
                } else {
                    ll current_index = m[n];
                    if(current_index<prev_index){
                        p("No")
                        return 0;
                    } else {
                        prev_index = current_index;
                    }
                }
                count++;
            }
        }
    }

    p("Yes")
    return 0;
}