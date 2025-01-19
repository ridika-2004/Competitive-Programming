#include <bits/stdc++.h>
#define p(x) cout<<x<<endl;
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;//1 3 2 1
        ll a31 = a1+a2;//4
        ll a32 = a5-a4;//-1
        ll c1=1,c2=1;
        if(a2+a31==a4){
            c1++;
        }
        if(a31+a4==a5){
            c1++;
        }
        if(a1+a2==a32){
            c2++;
        }
        if(a2+a32==a4){
            c2++;
        }
        p(max(c1,c2))
    }
    return 0;
}