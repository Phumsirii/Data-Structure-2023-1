#include <iostream>
#include <map>
#include<set>
#include <queue>

using namespace std;

int main()
{
    int n,m,a,nm,u,i,v,user_id,nt;
    string s;
    cin>>n>>m>>a;
    map<int,int> ma; //goods id and no. of items
    for (int e=1;e<=n;e++){
        cin>>nm;
        ma[e]=nm;
    }
    map<int,map<int,int>> m0; //goods id to user to price
    map<int,priority_queue<pair<int,int>>> m1; //goods id to price and id
    map<int,set<int>> m2; //users to goods id they've bought
    map<int,set<int>> m3; //goods id to users who have withdrawn
    for(int e=0;e<a;e++){
        cin>>s;
        if (s=="B"){
            cin>>u>>i>>v;
            m1[i].push(make_pair(v,u));
            m0[i][u]=v;
        }
        else{
            cin>>u>>i;
            m3[i].insert(u);
        }
    }
    for (int e=1;e<=m;e++){
        m2[e]={};
    }
    for (auto&x:m1){
        nt=0;
        while (nt<ma[x.first]){ //see who can buy the goods
            user_id=x.second.top().second;
            if (m0[x.first][user_id]==x.second.top().first &&m2[user_id].find(x.first)==m2[user_id].end() && m3[x.first].find(user_id)==m3[x.first].end()){
                m2[user_id].insert(x.first);
                nt++;
            }
            x.second.pop();
        }
    }
    for (auto&x:m2){
        if (x.second.empty()){
            cout<<"NONE\n";
            continue;
        }
        for (auto&y:x.second){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}
