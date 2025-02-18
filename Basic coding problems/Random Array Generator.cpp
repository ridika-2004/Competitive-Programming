#include<bits/stdc++.h>
using namespace std;

vector<int> RandGenerator(int n){
    vector<int> v(n);
    int min = -100;
    int max = 100;
    for(int i=0;i<n;i++){
        v[i] = min+(rand()%(max-min+1));
    }
    return v;
}

int main(){

    srand(1);

    int n;
    cin>>n;
    vector<int> v = RandGenerator(n);
    for(int i: v){
        cout<<i<<" ";
    }

    cout<<endl;
    return 0;
}