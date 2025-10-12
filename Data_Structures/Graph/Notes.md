Topological sort: A topological sort is a linear ordering of vertices in a graph such that for every edge u -> v, u appears before v in the ordering.

Properties:
* A topological sort is only defined for DAGs (directed acyclic graph)
* A toplogical sort cannot be produced for graphs with a cycle.
* Time complexity: O(V + E)  where V = #vertices and E = #edges
* Space complexity: O(V), the size of the recursion stack for tracking indegrees, visited flags

### Algorithms producing a Topological sort
Kahn's Algorithm (BFS/ Indegree)
* Compute indegree for every  vertex
* Start with all vertices of indegree 0 in a queue
* Repeatedly remove vertex u from the queue
* Appended u to the output
* Decrement indegree of all neighbors of u
* If a neighbor's indegree becomes 0, add it to the queue
* If you output all V's vertices, the result is a topological order

DFS (reverse postorder)
* Run DFS and push each vertex onto a stack after visiting all its descendants
* The reverse of the finishing order (or popping fomr the stack) gies a topological order
* If you detect a back edge during DFS, the graph has a cycle 
