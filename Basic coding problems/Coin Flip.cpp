#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

void flip(int n, string s){
    if(n==0){
        cout << s << endl;
        return;
    } else {
        flip(n-1, s+"H");
        flip(n-1, s+"T");
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of coin flips(n):" << flush;
    cin>>n;

    flip(n, "");
    return 0;
}