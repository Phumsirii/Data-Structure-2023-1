#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,w,e,r;
    cin>>n>>w;
    vector<int> v;
    queue<int> q;
    r=0;
    while (r<n){
        while (r<n && v.size()<w+1){
            cin>>e;
            q.push(e);
            v.push_back(e);
            r++;
        }
        sort(v.begin(),v.end());
        cout<<v[w/2]<<" ";
        v.erase(find(v.begin(),v.end(),q.front()));
        q.pop();
    }
}
