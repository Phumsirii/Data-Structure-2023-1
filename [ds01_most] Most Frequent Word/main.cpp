#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> names;
    for (int i=0;i<n;i++){
        string name;
        cin>>name;
        names[name]++;
    }
    set<pair<int,string>> s;
    for (auto &x:names){
        pair<int,string> y;
        y=make_pair(x.second, x.first);
        s.insert(y);
    }
    auto it=s.end();
    it--;
    cout<<(*it).second<<" "<<(*it).first<<endl;
}
