#include <bits/stdc++.h>
#define p(x) cout << x <<endl;
using namespace std;

int main() {
    string s1 = "food";
    string s2 = "foodcourt";

    // Find the position of s2 in s1
    size_t pos = s1.find(s2);
    if (pos != string::npos){
        p(pos)
        string s = s1.substr(pos+s2.length());
        if(s.empty()){
            p("oh no!")
        } else {
            p(s)
        }
    } else {
        p("doesn't fucking exist!!")
    }
}
