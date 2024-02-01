#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    queue<int> q;
    vector<int> v;
    q.push(m);
    v.push_back(m);
    while (!q.empty()){
        q.pop();
        if (2*m+1<n){
            q.push(2*m+1);
            v.push_back(2*m+1);
        }
        if (2*m+2<n){
            q.push(2*m+2);
            v.push_back(2*m+2);
        }
        if (q.empty()) break;
        m=q.front();
    }
    cout<<v.size()<<"\n";
    for (auto&x:v){
        cout<<x<<" ";
    }
}
