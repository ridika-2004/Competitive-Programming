#include <bits/stdc++.h>
#include <chrono>
#include <thread>
#define ll long long
using namespace std;
using namespace std::chrono;

void print(const vector<ll>& v) {
    cout << "Current Array: [ ";
    for (ll num : v) {
        cout << num << " ";
    }
    cout << "]\n";
    cout << "---------------------------------\n";
}

vector<ll> merge(const vector<ll>& a1, const vector<ll>& a2) {
    cout << "\n🔷 Merging: ";
    print(a1);
    cout << "🔷 With: ";
    print(a2);
    
    vector<ll> a3;
    ll i = 0, j = 0;

    while (i < a1.size() && j < a2.size()) {
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

    cout << "✅ Merged Result: ";
    print(a3);
    this_thread::sleep_for(chrono::seconds(3)); // Pause to visualize merging
    return a3;
}

vector<ll> mergesort(vector<ll>& v) {
    if (v.size() <= 1) {
        return v;
    }

    ll mid = v.size() / 2;
    vector<ll> left(v.begin(), v.begin() + mid);
    vector<ll> right(v.begin() + mid, v.end());

    cout << "\n🔹 Splitting: ";
    print(v);
    this_thread::sleep_for(chrono::seconds(2));

    cout<<"🔹 Left Array: ";
    print(left);
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"🔹 Right Array: ";
    print(right);
    this_thread::sleep_for(chrono::seconds(2));
    
    left = mergesort(left);
    right = mergesort(right);

    return merge(left, right);
}

int main() {
    ll n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin >> v[i];
    }

    this_thread::sleep_for(chrono::seconds(1));

    cout << "\n🚀 Starting Merge Sort...\n";
    auto start = high_resolution_clock::now(); // Start timer

    vector<ll> sorted = mergesort(v);

    auto stop = high_resolution_clock::now(); // Stop timer

    cout << "\n🎉 Merge Sort Completed!\n";
    cout << "✅ Final Sorted Array: ";
    print(sorted);

    return 0;
}
