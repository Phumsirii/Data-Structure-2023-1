#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> v1={};
    set<int> s={};
    for (int i=0;i<n;i++){
        int e;
        cin>>e;
        v1.push_back(e);
    }
    for (int i=0;i<m;i++){
        int e;
        cin>>e;
        if (find(v1.begin(),v1.end(),e)!=v1.end()){
            s.insert(e);
        }
    }
    for (auto &x:s){
        cout<<x<<" ";
    }
}
