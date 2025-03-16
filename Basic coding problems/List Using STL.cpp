#include<bits/stdc++.h>
using namespace std;
int main(){
    list <int> l;
    l.push_front(1);
    l.push_front(3);
    l.push_back(2);
    for(int i: l){
        cout<<i<<" ";
    }

    forward_list<int> fl;
    fl.push_front(2);
    fl.push_front(3);
    for(int i: fl){
        cout<<i<<" ";
    }
    fl.pop_front();
    for(int i: fl){
        cout<<i<<" ";
    }

    return 0;
}
