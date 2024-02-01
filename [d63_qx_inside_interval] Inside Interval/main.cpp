#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,a,b,t;
    cin>>n>>m;
    set<int> s;
    map<int,int> ma;
    vector<int> result;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        s.insert(b);
        ma[b]=a;
    }
    for (int i=0;i<m;i++){
        cin>>t;
        auto it=s.lower_bound(t);
        if (it==s.end()){
            result.push_back(0);
            continue;
        }
        if (ma[*it]<=t){
            result.push_back(1);
        }
        else{
            result.push_back(0);
        }
    }
    for (auto &x:result){
        cout<<x<<" ";
    }
}
