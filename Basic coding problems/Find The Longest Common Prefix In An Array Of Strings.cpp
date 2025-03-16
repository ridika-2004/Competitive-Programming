#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x <<" ";
using namespace std;

string commonPrefix(string s1, string s2) {
    int i = 0;
    string res;
    while (i < s1.size() && i < s2.size() && s1[i] == s2[i]) {
        i++;
    }
    res = s1.substr(0,i);
    if(res.empty()){
        return "null";
    } else {
        return res;
    }
}

string longestCommonPrefix(vector<string>& dict) {
    if (dict.empty()) {
        return "";
    }

    string prefix;
    for(ll i=0;i<dict.size()-1;i++){
        prefix = commonPrefix(dict[i],dict[i+1]);
        if(prefix=="null"){
            break;
        }
    }
    return prefix;
}

int main() {
    vector<string>dict;
    ll n;
    m("Enter the number of words in dictionary : ")
    cin >> n;

    while (n--) {
        m("Enter word : ")
        string s;
        cin >> s;
        dict.push_back(s);
    }

    string lcp = longestCommonPrefix(dict);
    p(lcp)

    // string res = commonPrefix("hello", "world");
    // p(res)

    return 0;
}