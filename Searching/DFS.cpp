#include <bits/stdc++.h>
using namespace std;

void dfs(unordered_map<string, vector<string>>& graph, string node, unordered_set<string>& visited) {
    // dfs - dives deep before going wide
    cout << node << " ";
    visited.insert(node);

    for (auto& neighbor : graph[node]) {
        if (!visited.count(neighbor))
            dfs(graph, neighbor, visited);
    }
}

int main() {
    unordered_map<string, vector<string>> graph = {
        {"A", {"B", "C"}},
        {"B", {"D", "E"}},
        {"C", {"F"}},
        {"D", {}},
        {"E", {"F"}},
        {"F", {}}
    };

    unordered_set<string> visited;
    cout << "DFS starting from A:\n";
    dfs(graph, "A", visited);
}
