#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;
    int currentSum = 0;
    int count = 0;

    for (int num : nums) {
        currentSum += num;

        if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[currentSum - k];
        }
        prefixSumCount[currentSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {2, 1, 1, 3, 1,2};
    int k = 3;
    cout << "Number of subarrays: " << subarraySum(nums, k) << endl;
    return 0;
}
