#include <iostream>
#include <vector>
#include <map>

using namespace std;

void insert_into_sv(map<int,int> &v, int pos, int value) {
    if (v.empty() ||v.rbegin()->first<pos){ //pos is the greatest
        v[pos]=value;
    }
    else{
        auto it=v.rbegin();
        while (it!=v.rend() && it->first>=pos){
            int a=(it->first)+1;
            v[a]=it->second;
            it++;
            v.erase(next(it).base());
        }
        v[pos]=value;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    map<int,int> v;

    cin >> n;
    for (int i = 0;i < n;i++) {
        int a,b;
        cin >> a >> b;
        insert_into_sv(v,a,b);
    }

    cout << v.size() << "\n";
    for (auto &x : v) {
        cout << x.first << ": " << x.second << "\n";
    }
}
