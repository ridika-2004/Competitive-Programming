#include<iostream>
#include<queue>
#define m(x) cout<<x;
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    int t=9;
    queue<int> q;
    while(t--){
        int input;
        cin>>input;
        q.push(input);

        queue<int> dummy = q;
        while(!dummy.empty() && dummy.front() < input - 3000){
            dummy.pop();
        }

        p(dummy.size())
    }
    return 0;
}