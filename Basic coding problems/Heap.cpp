#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

class heap{
    public:
    ll arr[10000];
    ll size;

    heap(){
        arr[0] = -1;
        size=0;
    }
    void insert(ll val){
        size++;
        ll index = size;
        arr[index] = val;
        while (index>1)
        {
            ll parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            } else {
                return;
            }
        }
        
    }

    void print(){
        for (ll i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        p("")
    }
};

int main(){
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(1);
    h.insert(5);
    h.insert(100);
    h.print();
    return 0;
}