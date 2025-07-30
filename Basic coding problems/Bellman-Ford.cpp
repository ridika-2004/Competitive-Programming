#include <iostream>
#include <vector>
#include <tuple>
#include <climits>
using namespace std;

void bellmanFord(int V, int E, int src, const vector<tuple<int, int, int>>& edges) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    for (int i = 0; i < V - 1; ++i) {
        for (const auto& e : edges) {
            int u = get<0>(e);
            int v = get<1>(e);
            int w = get<2>(e);

            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (const auto& e : edges) {
        int u = get<0>(e);
        int v = get<1>(e);
        int w = get<2>(e);

        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            cout << "Negative weight cycle detected!\n";
            return;
        }
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; ++i) {
        if (dist[i] == INT_MAX)
            cout << i << "\tINF\n";
        else
            cout << i << "\t" << dist[i] << "\n";
    }
}

int main() {
    int V = 5, E = 8;
    vector<tuple<int, int, int>> edges = {
        {0, 1, -1},
        {0, 2, 4},
        {1, 2, 3},
        {1, 3, 2},
        {1, 4, 2},
        {3, 2, 5},
        {3, 1, 1},
        {4, 3, -3}
    };

    int src = 0;
    bellmanFord(V, E, src, edges);

    return 0;
}
