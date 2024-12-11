
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector < vector < int >> adjMatrix(n, vector < int > (n, 0));

    int u, v;
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;

        adjMatrix[u][v] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << "\n";
    }
}
