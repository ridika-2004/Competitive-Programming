#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define m(x) cout << x <<" ";
#define px cout << endl;
using namespace std;

bool searchInDictionary(set<string>& dict, string word) {
    if (word.empty()) return true;

    for (const string& s : dict) {
        if (word.find(s) == 0) {  // Check if word starts with dictionary word
            string remaining = word.substr(s.length());  // Remove found prefix
            if (searchInDictionary(dict, remaining)) {
                return true;  // If remaining part can be segmented, return true
            }
        }
    }
    return false;
}

int main(){
    p("Hit -1 to stop.")
    set<string> dict;

    while(1){
        string s;
        m("Enter words to set in dictionary : ")
        cin>>s;
        if(s=="-1"){
            break;
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        dict.insert(s);
    }

    string word;
    m("Enter word to search for : ")
    cin>>word;

    if (searchInDictionary(dict, word)){
        p("Yeyy...found it!")
    }
    else {
        p("Umm...no!")
    }
    return 0;
}