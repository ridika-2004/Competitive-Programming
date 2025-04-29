#include<iostream>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        
        ll s = a+b+c;
        if(s%3==0){
            if(c>=s/3 && a<=s/3 && b<=s/3){
                p("YES")
            } else {
                p("NO")
            }
        } else {
            p("NO")
        }
    }
    return 0;
}
