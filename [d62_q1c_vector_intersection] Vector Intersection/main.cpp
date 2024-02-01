#include <iostream>
#include <set>

using namespace std;

int main()
{
    int m,n,r;
    cin>>m>>n;
    set<int> a;
    for (int i=0;i<m;i++){
        cin>>r;
        a.insert(r);
    }
    set<int> b;
    for (int i=0;i<n;i++){
        cin>>r;
        if (a.find(r)!=a.end()){
            b.insert(r);
        }
    }
    for (auto&x:b){
        cout<<x<<" ";
    }
}
