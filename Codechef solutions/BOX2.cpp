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
        ll a,b,k;
        cin>>a>>b>>k;

        ll count = 0;

        if(k<abs(a-b)){
            if(a>b){
                while(1){
                    a--;
                    b++;
                    count++;

                    if(a-b==k){
                        break;
                    }
                    if(b>a){
                        count = -1;
                        break;
                    }
                }
            } else {
                while(1){
                    b--;
                    a++;
                    count++;
                    if(b-a==k){
                        break;
                    }
                    if(a>b){
                        count = -1;
                        break;
                    }
                }
            }
        } else if(k>abs(a-b)){
            if(a>b){
                while(1){
                    a++;
                    b--;
                    count++;

                    if(a-b==k){
                        break;
                    }
                    if(b<0){
                        count = -1;
                        break;
                    }
                }
            } else {
                while(1){
                    b++;
                    a--;
                    count++;
                    if(b-a==k){
                        break;
                    }
                    if(a<0){
                        count = -1;
                        break;
                    }
                }
            }
        } else if(k==abs(a-b)){
            count  =0;
        }

        p(count)
    }
    return 0;
}
