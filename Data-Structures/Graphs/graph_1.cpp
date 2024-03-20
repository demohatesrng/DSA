#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>

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
     void print(){
    for(auto i = adj.begin(); i != adj.end(); ++i){
        cout << i->first << "->";
        for (auto j = i->second.begin(); j != i->second.end(); ++j)
            cout << *j << " ";
        }
    cout << endl;
    }
};
int main(){
    int n;
    cout<<"enter number of nodes"<<endl;
    cin>> n;

    int m;
    cout<<"enter number of edges"<<endl;
    cin>> m;

    Graph G;
    for (int i = 0; i < m; i++){
        int u , v;
        cin >> u >> v;
        G.addEdge(u,v,0);
    }
    G.print();
    
}