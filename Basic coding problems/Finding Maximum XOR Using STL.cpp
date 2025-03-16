#include <bits/stdc++.h>
using namespace std;

int findMaximumXOR(vector<int>& nums) {
    int maxXOR = 0;
    int mask = 0;

    // Iterate through all the bits (32 bits for int)
    for (int i = 31; i >= 0; i--) {
        mask |= (1 << i);  // Create a mask for the first i bits
        unordered_set<int> prefixes;

        // Store all prefixes for the current mask
        for (int num : nums) {
            prefixes.insert(num & mask);
        }

        // Try to maximize the XOR by checking if there's a prefix that
        // when XORed with the current number, gives a larger result
        int candidate = maxXOR | (1 << i);

        for (int prefix : prefixes) {
            if (prefixes.count(candidate ^ prefix)) {
                maxXOR = candidate;
                break;
            }
        }
    }

    return maxXOR;
}

int main() {
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    cout << "Maximum XOR: " << findMaximumXOR(nums) << endl;
    return 0;
}
