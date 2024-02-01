#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,ye,mo;
    cin>>n>>m;
    set<pair<int,int>> s;
    vector<int> result;
    pair<int,int> target;
    for (int i=0;i<n;i++){
        cin>>ye>>mo;
        s.insert(make_pair(ye,mo));
    }
    for (int i=0;i<m;i++){
        cin>>ye>>mo;
        target=make_pair(ye,mo);
        if (target<*s.begin()){
            result.push_back(-1);
            result.push_back(-1);
            continue;
        }
        auto it =s.lower_bound(target);
        if (target==*it){
            result.push_back(0);
            result.push_back(0);
            continue;
        }
        it--;
        result.push_back(it->first);
        result.push_back(it->second);
    }
    for (auto&x:result){
        cout<<x<<" ";
    }
}
