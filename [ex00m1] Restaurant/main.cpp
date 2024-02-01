#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n,m,t,current_t,nt;
    cin>>n>>m;
    priority_queue<pair<int,int>> q; //current_time and time per queue
    for (int i=0;i<n;i++){
        cin>>t;
        q.push(make_pair(0,t));
    }
    current_t=0;
    nt=0;
    while (nt<m){
        if (q.top().first==current_t){
            cout<<-q.top().first<<"\n";
            q.push(make_pair(q.top().first-q.top().second,q.top().second));
            q.pop();
            nt++;
        }
        else{
            current_t--;
        }
    }
}
