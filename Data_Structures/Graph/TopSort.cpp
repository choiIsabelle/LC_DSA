#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph {
    int V;                       // number of vertices
    vector<vector<int>> adj;     // adjacency list

    void dfs(int v, vector<bool>& visited, stack<int>& Stack) {
        visited[v] = true;

        // Visit all the neighbors
        for (int neighbor : adj[v]) {
            if (!visited[neighbor])
                dfs(neighbor, visited, Stack);
        }

        // Push current vertex to stack after visiting all neighbors
        Stack.push(v);
    }

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);  // directed edge u → v
    }

    void topologicalSort() {
        stack<int> Stack;
        vector<bool> visited(V, false);

        // Call DFS for all unvisited vertices
        for (int i = 0; i < V; i++) {
            if (!visited[i])
                dfs(i, visited, Stack);
        }

        // Print the contents of stack (topological order)
        cout << "Topological Sort: ";
        while (!Stack.empty()) {
            cout << Stack.top() << " ";
            Stack.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    g.topologicalSort();

    return 0;
}
