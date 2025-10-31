#include <bits/stdc++.h>
using namespace std;

void bfs(unordered_map<string, vector<string>>& graph, string start) {
    // bfs - goes level by level
    unordered_set<string> visited;
    queue<string> q;
    q.push(start);

    while (!q.empty()) {
        string node = q.front(); q.pop();

        if (!visited.count(node)) {
            cout << node << " ";
            visited.insert(node);

            // add all connected nodes
            for (auto& neighbor : graph[node]) {
                if (!visited.count(neighbor))
                    q.push(neighbor);
            }
        }
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

    cout << "BFS starting from A:\n";
    bfs(graph, "A");
}
