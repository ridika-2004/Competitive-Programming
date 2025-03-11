#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool wordBreak(string& s, unordered_set<string>& trie) {
    int n = s.length();
    vector<bool> v(n+1, false);
    v[0] =true;
    for (int i=1;i<=n;++i) {
        for (int j= 0;j<i;++j) {
            if (v[j] && trie.find(s.substr(j, i - j)) != trie.end()) {
                v[i] = true;
                break;
            }
        }
    }

    return v[n];
}

int main() {
    string line;

    unordered_set<string> trie;
    while (true) {
        cin>>line;
        if (line=="-1") {
            break;
        }
        trie.insert(line);
    }


    cin>>line;
    if (wordBreak(line, trie)) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    return 0;
}
