#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && b+c>a && a+c>b){
        p("Yes")
    } else {
        p("No")
    }
    return 0;
}
