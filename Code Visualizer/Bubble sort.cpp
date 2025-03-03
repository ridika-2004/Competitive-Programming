#include <bits/stdc++.h>
#include <thread>
#define ll long long
#define p(x) cout << x << endl;
using namespace std;

void print(vector<ll> v) {
    cout << "Current Array: [ ";
    for (ll i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    ll n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<ll> v(n);
    cout << "Enter the elements:\n";
    for (ll i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "\nStarting Bubble Sort Animation...\n";
    print(v);
    this_thread::sleep_for(chrono::seconds(2));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                cout << "⚡ Swapping: " << v[j] << " ↔ " << v[j + 1] << endl;
                swap(v[j], v[j + 1]);

                this_thread::sleep_for(chrono::seconds(2)); // Delay to visualize swap
                print(v);
                this_thread::sleep_for(chrono::seconds(3)); // Extra delay
            }
        }
        cout << "✔ Pass " << i + 1 << " completed!\n";
    }

    cout << "🎉 Sorting Completed! Final Sorted Array:\n";
    print(v);

    return 0;
}
