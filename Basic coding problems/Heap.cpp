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

    void remove(){
        if(size==0){
            p("Heap is empty")
            return;
        }
        arr[1] = arr[size];
        size--;
        ll i =1;
        while(i<size){
            ll leftindex = 2*i;
            ll rightindex = 2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            } else if(rightindex<size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i = rightindex;
            } else {
                return;
            }
        }
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
    h.remove();
    h.print();
    return 0;
}