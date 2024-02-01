#include <iostream>
#include <set>
#include <queue>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,nt;
    string t1,t2;
    cin>>n>>m;
    set<pair<string,string>> tickets;
    for(int i=0;i<n;i++){
        cin>>t1>>t2;
        tickets.insert(make_pair(t1,t2));
    }
    queue<pair<string,string>> pending_tickets;
    for(int i=0;i<m;i++){
        bool success=true;
        cin>>nt;
        for (int e=0;e<nt;e++){
            cin>>t1>>t2;
            pending_tickets.push(make_pair(t1,t2));
            if (tickets.count(make_pair(t1,t2))==0){
                success=false;
            }
        }
        if (success){
            while (!pending_tickets.empty()){
                tickets.erase(pending_tickets.front());
                pending_tickets.pop();
            }
            cout<<"YES\n";
        }
        else{
            while (!pending_tickets.empty()){
                pending_tickets.pop();
            }
            cout<<"NO\n";
        }
    }
}
