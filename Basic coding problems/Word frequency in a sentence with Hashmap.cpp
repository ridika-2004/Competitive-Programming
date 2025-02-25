#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<string,int> m;
    string sentence,word;
    getline(cin,sentence);

    stringstream ss(sentence);

    while(ss >> word){
        string s="";
        for(char c: word){
            if((c>='A' && c<='Z') || c>='a' && c<='z'){
                s+=c;
            }
        }
        if(!s.empty()){
            m[s]++;
        }
    }

    for(auto i: m){
        if(i.second>1){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }

    // for(string s: v){
    //     cout<<s<<endl;
    // }

    //cout<<sentence<<endl;
    cout<<endl;
    return 0;
}