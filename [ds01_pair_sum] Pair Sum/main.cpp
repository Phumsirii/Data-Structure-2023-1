#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,target;
    cin>>n>>m;
    vector<int> v(n);
    map<int,bool> nm;
    for (int i=0;i<n;i++){
        cin>>v[i];
        nm[v[i]]=true;
    }
    sort(v.begin(),v.end());
    while (m--){
        cin>>target;
        bool found=false;
        for (int e=0;e<n;e++){
            if (2*v[e]==target){
                if (find(v.begin()+e+1,v.end(),v[e])!=v.end()){
                    found=true;
                    break;
                }
                else break;
            }
            if (nm.find(target-v[e])!=nm.end() && nm.find(target-v[e])!=next(nm.begin(),e)){
                found=true;
                break;
            }
        }
        if (found) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
