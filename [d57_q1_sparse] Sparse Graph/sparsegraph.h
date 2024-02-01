#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
#include <set>
#include <vector>

// Your code here

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        n=3;
        for (int i=0;i<n;i++){
            set<int> s;
            edges.push_back(s);
        }
    }

    SparseGraph(int n_in) {
        n=n_in;
        for (int i=0;i<n;i++){
            set<int> s;
            edges.push_back(s);
        }
    }

    SparseGraph(const SparseGraph& G) {
        n=G.n;
        edges=G.edges;
    }

    void AddEdge(int a, int b) {
        edges[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        edges[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        return edges[a].find(b)!=edges[a].end();
    }

    SparseGraph Transpose() const {
        SparseGraph result = SparseGraph(n);
        for (int i=0;i<n;i++){
            for (auto&x:edges[i]){
                result.AddEdge(x,i);
            }
        }
        return result;
    }

protected:
    int n;
    std::vector<std::set<int>> edges;
};
#endif // __SPARSE_GRAPH_H__

