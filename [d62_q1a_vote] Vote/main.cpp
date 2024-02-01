#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k,sum;
    string e;
    cin>>n>>k;
    map<string,int> s;
    for (int i=0;i<n;i++){
        cin>>e;
        s[e]++;
    }
    vector<int> v;
    for (auto&x:s){
        v.push_back(x.second);
    }
    sort(v.begin(),v.end());
    if (k>=v.size()){
        cout<<v[0];
    }
    else{
        cout<<v[v.size()-k];
    }
}
