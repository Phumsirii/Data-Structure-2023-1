#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,target,type,app,price,norder,money;
    cin>>n>>m;
    vector<int> targets(m);
    map<int,int> ma;
    priority_queue<int> t;
    for (int i=0;i<m;i++){
        cin>>target;
        targets[i]=target;
        t.push(-target);
    }
    priority_queue<pair<int,int>> q;
    norder=0;
    money=0;
    for (int i=0;i<n;i++){
        cin>>type;
        if (type==1){
            cin>>app>>price;
            q.push(make_pair(-price,-app));
        }
        else{
            norder++;
            money+=(-q.top().first);
            while(!t.empty() && money>=-t.top()){
                ma[-t.top()]=norder;
                t.pop();
            }
            q.pop();
        }
    }
    for (auto&x:targets){
        if (ma.find(x)!=ma.end()){
            cout<<ma[x]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
}
