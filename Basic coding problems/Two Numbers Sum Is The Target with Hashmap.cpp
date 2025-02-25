#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    unordered_map<int,int> um;
    int n;
    while(1){
        cin>>n;
        if(n==-1){
            break;
        }
        v.push_back(n);
        um[n]++;

    }

    int target;
    cin>>target;

    bool flag =0;

    for(int i: v){
        int val = target-i;
        if(um[val]>0 && um[i]>0){
            cout<<"("<<i<<","<<val<<")"<<" ";
            um[val]--;
            um[i]--;
            flag=1;
        }
    }

    if(!flag){
        cout<<"No pairs found"<<endl;
    }


    // for(int i: v){
    //     cout<<i<<" ";
    // }

    cout<<endl;
    return 0;
}