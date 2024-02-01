#include <iostream>
#include <map>

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
    for (auto&x:names){
        if (x.second>1){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}
