#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        double f,db,ta,bs;
        cin>>f>>db>>ta>>bs;
        
        double t1 = f/bs;
        double t2 = sqrt((2.0*(db+f))/ta);
        
        if(t1<t2){
            p("Bolt")
        } else {
            p("Tiger")
        }
    }
	return 0;
}
