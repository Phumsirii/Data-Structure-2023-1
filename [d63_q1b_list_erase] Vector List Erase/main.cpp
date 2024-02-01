#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void list_erase(vector<int> &v, vector<int> &pos) {
    int n,nd,x;
    nd=0;
    n=0;
    sort(pos.begin(),pos.end());
    x=v.size();
    for (int i=0;i<x;i++){
        if ((pos[nd]-nd==n)){
            v.erase(v.begin()+n);
            nd++;
            n--;
        }
        if (nd==pos.size()){
            break;
        }
        n++;
    }
}
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) cin >> pos[i];
    list_erase(v,pos);
    cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}
