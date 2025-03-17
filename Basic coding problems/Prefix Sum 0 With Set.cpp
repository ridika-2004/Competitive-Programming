#include <bits/stdc++.h>
#define ll long long
#define m(x) cout << x << " ";
#define p(x) cout << x << endl;
using namespace std;

unordered_set<ll> hasZeroSumSubarray(vector<ll>& arr) {
    unordered_set<ll> prefixSums;
    int sum = 0;

    for (int num : arr) {
        sum += num;

        // If sum is 0 or we have seen this sum before, subarray exists
        if (sum == 0 || prefixSums.find(sum) != prefixSums.end()) {
            return prefixSums;
        }
        prefixSums.insert(sum);
    }

    return unordered_set<ll>();
}

int main() {
    return 0;
}
