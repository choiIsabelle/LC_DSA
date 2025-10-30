using namespace std;
#include <vector>
#include <queue>
#include <iostream>
#include <map>

void Kahns(vector<vector<int>>& adjList, map<int, int>& inDegree) {
    queue<int> q;
    for (const auto& [node, degree] : inDegree) {
        if (degree == 0) {
            q.push(node);
        }
    }

    vector<int> topoOrder;
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        topoOrder.push_back(current);

        for (int neighbor : adjList[current]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    if (topoOrder.size() != adjList.size()) {
        cout << "Graph has a cycle, topological sorting not possible." << endl;
    } else {
        cout << "Topological Order: ";
        for (int node : topoOrder) {
            cout << node << " ";
        }
        cout << endl;
    }

}


int main() {
    vector<vector<int>> adjList = {
        {1, 2},    // 0 -> 1, 0 -> 2
        {3},       // 1 -> 3
        {3},       // 2 -> 3
        {}         // 3 has no outgoing edges
    };

    map<int, int> inDegree;
    for (const auto& neighbors : adjList) {
        for (int neighbor : neighbors) {
            inDegree[neighbor]++;
        }
    }

    Kahns(adjList, inDegree);

    return 0;
}
