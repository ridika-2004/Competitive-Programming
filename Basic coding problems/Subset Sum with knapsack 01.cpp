#include <iostream>
#include <vector>
using namespace std;

bool knapsackSubsetSum(int n, int k, const vector<int>& arr) {
    vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, false));

    for (int i = 0; i <= n; i++)
        dp[i][0] = true; // Sum 0 is always possible

    for (int i = 1; i <= n; i++) {
        for (int sum = 1; sum <= k; sum++) {
            if (arr[i - 1] <= sum)
                dp[i][sum] = dp[i - 1][sum] || dp[i - 1][sum - arr[i - 1]];
            else
                dp[i][sum] = dp[i - 1][sum];
        }
    }

    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (knapsackSubsetSum(n, k, arr))
        cout << "YES\n";
    else
        cout << "NO\n";
}
