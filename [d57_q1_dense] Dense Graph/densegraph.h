#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        n=3;
        vector<vector<bool>> v(3,vector<bool>(3,false));
        edges=v;
    }

    DenseGraph(int n_in) {
        n=n_in;
        vector<vector<bool>> v(n,vector<bool>(n,false));
        edges=v;
    }

    DenseGraph(const DenseGraph& G) {
        n=G.n;
        edges=G.edges;
    }

    void AddEdge(int a, int b) {
        edges[a][b]=true;
    }

    void RemoveEdge(int a, int b) {
        edges[a][b]=false;
    }

    bool DoesEdgeExist(int a, int b) const {
        return edges[a][b];
    }

    DenseGraph Transpose() const {
        DenseGraph result(n);
        for (int i=0;i<n;i++){
            for (int e=0;e<n;e++) (result.edges)[i][e]=edges[e][i];
        }
        return result;
    }

protected:
    int n;
    vector<vector<bool>> edges; //<initial><terminal>
};
#endif // __DENSE_GRAPH_H__
