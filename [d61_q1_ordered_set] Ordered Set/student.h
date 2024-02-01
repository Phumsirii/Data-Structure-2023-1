#include <vector>
using namespace std;

#include <map>

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<T,int> m;
    for (auto&x:A){
        m[x]=1;
        v.push_back(x);
    }
    for (auto&x:B){
        if (m[x]==0){
            v.push_back(x);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<T,int> m;
    for (auto&x:B){
        m[x]=1;
    }
    for (auto&x:A){
        if (m[x]==1){
            v.push_back(x);
        }
    }
    return v;
}
