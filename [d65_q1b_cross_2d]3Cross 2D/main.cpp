#include <iostream>
#include <vector>

using namespace std;

void cross_2d(vector<vector<int>> &m ,int r1, int r2, int c1, int c2) {
    if (m.size()==0){
        return;
    }
    if (r2>m.size()){
        r2=m.size();
    }
    if (c2>m[0].size()){
        c2=m[0].size();
    }
    if (r1<=r2){
        for (int e=0;e<=r2-r1;e++){
            m.erase(m.begin()+r1);
        }
    }
    if (c1<=c2){
        for (auto&x:m){
            for (int e=0;e<=c2-c1;e++){
                x.erase(x.begin()+c1);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    vector<vector<int>> m;
    int r,c,r1,r2,c1,c2;
    cin>> r >> c;
    cin >> r1 >> r2 >> c1 >> c2;
    m.resize(r);
    for (int i =0;i < r;i++) {
        m[i].resize(c);
        for (int j = 0;j < c;j++) {
            cin >> m[i][j];
        }
    }

    cross_2d(m,r1,r2,c1,c2);
    for (int i =0;i < m.size();i++) {
        for (int j = 0;j < m[i].size();j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
