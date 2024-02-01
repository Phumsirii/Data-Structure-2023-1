#include <iostream>
#include <vector>

using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
    v.erase(it);
    for (int i=0;i<k;i++){
        if ((it==v.end())or(it==v.begin()-1)){
            break;
        }
        else{
            v.erase(it);
        }
    }
    it--;
    for (int i=0;i<k;i++){
        if ((it==v.end())or(it==v.begin()-1)){
            break;
        }
        else{
            v.erase(it);
            it--;
        }
    }
    return v;
}

int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}
