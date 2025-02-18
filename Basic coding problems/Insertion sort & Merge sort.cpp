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

int insertionSortChecks = 0;

void InsertionSort(vector<int>& arr, int n){
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            insertionSortChecks++;
            swap(arr[j], arr[j-1]);
            j--;
        }
        if (j > 0) {
            insertionSortChecks++;
        }
    }
}

int mergeSortChecks = 0;

vector<int> merge(vector<int>& a1, vector<int>& a2) {
    vector<int> a3;
    int i = 0, j = 0;

    while (i < a1.size() && j < a2.size()) {
        mergeSortChecks++;
        if (a1[i] <= a2[j]) {
            a3.push_back(a1[i]);
            i++;
        } else {
            a3.push_back(a2[j]);
            j++;
        }
    }

    while (i < a1.size()) {
        a3.push_back(a1[i]);
        i++;
    }

    while (j < a2.size()) {
        a3.push_back(a2[j]);
        j++;
    }

    return a3;
}

vector<int> mergesort(vector<int>& v) {
    if (v.size() <= 1) {
        return v;
    }

    int mid = v.size() / 2;

    vector<int> left(v.begin(), v.begin() + mid);
    vector<int> right(v.begin() + mid, v.end());

    left = mergesort(left);
    right = mergesort(right);
    return merge(left, right);
}

int main(){

    //srand(1);

    int n1=10,n2=100,n3=1000;
    vector<int> v1 = RandGenerator(n1);
    vector<int> v4 = v1;
    vector<int> v2 = RandGenerator(n2);
    vector<int> v5 = v2;
    vector<int> v3 = RandGenerator(n3);
    vector<int> v6 = v3;

    cout<<endl;

    cout<<"v1 array              : ";

    for(int i: v1){
        cout<<i<<" ";
    }
    cout<<endl;
    InsertionSort(v1, v1.size());
    cout<<"after insertion sort  : ";
    for(int i: v1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"insertion sort checks : "<<insertionSortChecks<<endl;
    v4 = mergesort(v4);
    cout<<"after merge sort      : ";

    for(int i: v4){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"merge sort checks     : "<<mergeSortChecks<<endl;

    cout<<endl;
    cout<<endl;

    // cout<<"v2 array              : ";

    // for(int i: v2){
    //     cout<<i<<" ";
    // }
    cout<<"n2=100"<<endl;
    InsertionSort(v2, v2.size());
    // cout<<"after insertion sort  : ";
    // for(int i: v2){
    //     cout<<i<<" ";
    // }
    //cout<<endl;
    cout<<"insertion sort checks : "<<insertionSortChecks<<endl;
    v5 = mergesort(v5);
    // cout<<"after merge sort      : ";

    // for(int i: v5){
    //     cout<<i<<" ";
    // }
    //cout<<endl;
    cout<<"merge sort checks     : "<<mergeSortChecks<<endl;

    cout<<endl;
    cout<<endl;

    // cout<<"v3 array              : ";

    // for(int i: v3){
    //     cout<<i<<" ";
    // }
    cout<<"n3=1000"<<endl;
    InsertionSort(v3, v3.size());
    // cout<<"after insertion sort  : ";
    // for(int i: v3){
    //     cout<<i<<" ";
    // }
    //cout<<endl;
    cout<<"insertion sort checks : "<<insertionSortChecks<<endl;
    v6 = mergesort(v6);
    // cout<<"after merge sort      : ";

    // for(int i: v6){
    //     cout<<i<<" ";
    // }
    //cout<<endl;
    cout<<"merge sort checks     : "<<mergeSortChecks<<endl;
    return 0;
}