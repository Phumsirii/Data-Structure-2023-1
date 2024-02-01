#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,a,b,type;
    cin>>n;
    set<pair<int,int>> s;
    while (n--){
        cin>>type;
        if (type==1){
            cin>>a>>b;
            auto it=s.lower_bound(make_pair(a,b));
            while(it!=s.begin()){
                auto tmp=it--;
            }
        }
        else{
            cout<<s.size()+"\n";
        }
    }
}
