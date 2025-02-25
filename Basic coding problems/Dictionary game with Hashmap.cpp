#include<bits/stdc++.h>
using namespace std;
int main(){

    string a,b;
    unordered_map<string,string> m;
    while(1){
        cin>>a>>b;
        if(a=="-1" || b=="-1"){
            break;
        }
        m[b]=a;
    }

    string s;
    vector<string> v;
    while(1){
        cin>>s;
        if(s=="-1"){
            break;
        }
        if(m[s].empty()){
            v.push_back("eh");
        } else {
            v.push_back(m[s]);
        }
    }

    for(string v1: v){
        cout<<v1<<endl;
    }

    // if(m["a"].empty()){
    //     cout<<0;
    // }

    cout<<endl;
    return 0;
}