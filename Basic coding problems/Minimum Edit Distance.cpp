#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    int m = s1.size();
    int n = s2.size();

    int dp[1001][1001];
    ll del = 1, ins = 1, sub = 2;

    // Initialize base cases: empty string conversions
    for (int i = 0; i <= m; i++)
        dp[i][0] = i * del;  // delete i characters from s1

    for (int j = 0; j <= n; j++)
        dp[0][j] = j * ins;  // insert j characters to s1

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];  // no cost if characters match
            } else {
                dp[i][j] = min({
                    dp[i - 1][j] + del,      // delete s1[i-1]
                    dp[i][j - 1] + ins,      // insert s2[j-1]
                    dp[i - 1][j - 1] + sub   // substitute s1[i-1] -> s2[j-1]
                });
            }
        }
    }

    p(dp[m][n])

    return 0;
}
