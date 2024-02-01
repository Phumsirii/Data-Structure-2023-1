#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<long long,long long> r;
    int n,m;
    long long f,s,a,b;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>f>>s;
        r[s]=f;
    }
    for (int i=0;i<m;i++){
        cin>>a>>b;
        if ((a==b)or(r.find(a)==r.end())or(r.find(b)==r.end())){
            cout<<"NO\n";
            continue;
        }
        if ((r.find(r[a])==r.end())or(r.find(r[b])==r.end())){
            cout<<"NO\n";
            continue;
        }
        if (r[r[a]]!=r[r[b]]){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }
}
