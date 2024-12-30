#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    string s;
    cin>>s;
    if(s.size()<2){
        p(s)
    } else {
    for(ll i=0;i<s.size()-2;){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s.erase(s.begin()+i);
            s.erase(s.begin()+i+1);
            s[i] = ' ';
        } else {
            i++;
        }
    }
    ll in =0;
    for(ll i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            in = i;
            break;
        }
    }
    for(ll i=in;in<s.size();in++){
        cout<<s[in];
    }
    p(" ")
}
    return 0;
}