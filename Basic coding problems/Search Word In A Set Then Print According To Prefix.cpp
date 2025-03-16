#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define m(x) cout << x <<" ";
using namespace std;

void printword(set<string> dict, string s){
    ll count=0;
    bool found=0;
    for(auto i: dict){
        if(i.find(s)==0 && count<3){
            found =1;
            m(i)
            count++;
        }
    }
    //p("")
    if(!found){
        m("null")
    }
}

int main(){

    ll n;
    cin>>n;
    set<string> dict;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        dict.insert(s);
    }

    string word;
    cin>>word;

    for(ll i=0;i<word.size();i++){
        //m(word.substr(0,i+1))
        printword(dict,word.substr(0, i+1));
        p("")
    }
    return 0;
}