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
    m("Number of prefix you want to give input : ")
    cin>>q;
    set<string> dict;
    while(n--){
        string s;
        m("Enter words to set in dictionary : ")
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        dict.insert(s);
    }

    while(q--){
        m("Enter prefix you want to find words for : ")
        string s;
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int count = 0;
        for (auto& word : dict) {
            if (word.find(s) == 0) {
                p("Words start with prefix "+s+" is = "+word)
                count++;
            }
        }
        p(count)
    }
    return 0;
}