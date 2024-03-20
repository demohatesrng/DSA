#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <vector>
#include <set>
using namespace std;

class Graph{
    public:
     unordered_map<int, list<int> > adj;

     void addEdge(int u , int v , bool direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
     }

     void DFS(int start) {
        vector<bool> visited(adj.size(), false);
        DFSUtil(start, visited);
        cout << endl;
    }

    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true;
        cout << v << " ";

        for (int u : adj[v]) {
            if (!visited[u]) {
                DFSUtil(u, visited);
            }
        }
    }

    void BFS(int start) {
        vector<bool> visited(adj.size(), false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int v = q.front();
            q.pop();
            cout << v << " ";

            for (int u : adj[v]) {
                if (!visited[u]) {
                    visited[u] = true;
                    q.push(u);
                }
            }
        }
        cout << endl;
    }
};
int main(){
    int n;
    cout << "enter number of nodes" << endl;
    cin >> n;

    int m;
    cout << "enter number of edges" << endl;
    cin >> m;

    Graph G;
    for (int i = 0; i < m; i++){
        int u , v;
        cin >> u >> v;
        G.addEdge(u,v,0);
    }

    int startNode;
    cout << "enter starting node for DFS and BFS" << endl;
    cin >> startNode;

    cout << "DFS traversal starting from node " << startNode << ": ";
    G.DFS(startNode);

    cout << "BFS traversal starting from node " << startNode << ": ";
    G.BFS(startNode);

}