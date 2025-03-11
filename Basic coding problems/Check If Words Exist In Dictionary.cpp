#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define m(x) cout << x <<" ";
#define px cout << endl;
using namespace std;

int main(){

    ll n,q;
    m("Number of words you want to set in your dictionary : ")
    cin>>n;
    m("Number of words you want to find : ")
    cin>>q;
    set<string> dict;
    while(n--){
        string s;
        m("Enter words to set in dictionary : ")
        cin>>s;
        dict.insert(s);
    }

    while(q--){
        m("Enter words you want to find : ")
        string s;
        cin>>s;
        if(dict.find(s) != dict.end()) {
            p("Yes! "+s+" exists in your dictionary!")
        } else {
            p("No! "+s+" doesn't exist in your dictionary!")
        }
    }
    return 0;
}