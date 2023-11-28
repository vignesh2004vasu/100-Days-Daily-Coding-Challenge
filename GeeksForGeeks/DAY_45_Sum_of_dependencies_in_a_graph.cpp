Given a directed graph with V nodes and E edges, if there is an edge from u to v, then we will say that u depends on v. Number of Dependencies (NoD) for a node x is the total count of nodes that x depends upon. Find out the sum of number of dependencies of every node.
Example 1:

Input:
V = 4
E = 4
Edges = { {0,2}, {0,3}, {1,3}, {2,3} }

Output:
4
Explanation:
For the graph in diagram, 
A depends on C and D i.e. A's NoD is 2, 
B depends on D i.e. B's NoD is 1,
C depends on D i.e. D's NoD is 1,
and D depends on none.
Hence answer -> 0 + 1 + 1 + 2 = 4
Example 2:

Input:
V = 4
E = 3
Edges = { {0,3}, {0,2}, {0,1} }
Output:
3
Explanation:
The sum of dependencies=3+0+0+0=3.
Answer:
class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int V) {
        int sum = 0;
        for (int i = 0; i < V; ++i) {
            sum += adj[i].size();
        }
        return sum;
    }
};
