#include <bits/stdc++.h>
#include <chrono>
#include <thread>
#define ll long long
using namespace std;
using namespace std::chrono;

void print(ll arr[], ll size) {
    cout << "Current Array: [ ";
    for (ll i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void heapify(ll arr[], ll n, ll i) {
    ll largest = i;
    ll left = 2 * i + 1;
    ll right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        cout<< "Left: " << arr[left] << " > " << arr[largest] << endl;
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        cout<< "Right: " << arr[right] << " > " << arr[largest] << endl;
        largest = right;
    }
    if (largest != i) {
        cout << "Swapping " << arr[i] << " and " << arr[largest] << " (heapify step)\n";
        swap(arr[i], arr[largest]);
        this_thread::sleep_for(chrono::seconds(3));
        print(arr, n);
        heapify(arr, n, largest);
    }
}

void heapsort(ll arr[], ll n) {
    auto start = high_resolution_clock::now();

    cout << "\n🔷 Building Max Heap...\n";
    for (ll i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
        this_thread::sleep_for(chrono::seconds(3));
    }

    cout << "\n✅ Max Heap Built: ";
    print(arr, n);
    cout << "---------------------------------\n";

    cout << "\n🔷 Sorting Process Begins...\n";
    for (ll i = n - 1; i > 0; i--) {
        cout << "\nSwapping Root (" << arr[0] << ") with Last Element (" << arr[i] << ")\n";
        swap(arr[0], arr[i]);
        print(arr, n);
        this_thread::sleep_for(chrono::seconds(3));

        cout << "Heapifying the remaining heap...\n";
        heapify(arr, i, 0);
        this_thread::sleep_for(chrono::seconds(3));
    }

    auto stop = high_resolution_clock::now();

    cout << "\n🎉 Heap Sort Completed!\n";
    cout << "✅ Final Sorted Array: ";
    print(arr, n);
}

int main() {
    ll arr[] = {10, 20, 1, 5, 100};
    ll n = sizeof(arr) / sizeof(arr[0]);

    cout << "🔹 Initial Array: "<<endl;
    print(arr, n);
    cout << "---------------------------------\n";

    heapsort(arr, n);

    return 0;
}
