#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
       double a,b,c;
       cin>>a>>b>>c;

       ll r1 = ceil(c/a);
       ll r2 = ceil(c/b);

       // p(r1<<" "<<r2)
       ll m1 = r1*a;
       ll m2 = r2*b;

       // p(m1<<" "<<m2)

       ll res = a*b-min(m1,m2);

       if(res<0){
        p(0)
       } else {
        p(res)
       }
    }
    return 0;
}
