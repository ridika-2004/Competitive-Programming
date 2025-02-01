#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    if(m>n){
        ll res=0;
        while(n<m){
            if(m%2!=0){
                res++;
                m++;
            } else{
                m/=2;
                res++;
            }
        }
        p(res+n-m)
    } else {
        p(n-m)
    }
    return 0;
}