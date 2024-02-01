#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> v={};
    string x;
    for (int i=0;i<n;i++){
        cin>>x;
        if (x=="r"){
            reverse(v.begin(),v.end());
            continue;
        }
        if (x=="pb"){
            int y;
            cin>>y;
            v.push_back(y);
            continue;
        }
        if (x=="d"){
            int y;
            cin>>y;
            v.erase(v.begin()+y);
            continue;
        }
        if (x=="sa"){
            sort(v.begin(),v.end());
            continue;
        }
        if (x=="sd"){
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
            continue;
        }
    }
    for (auto x:v){
        cout<<x<<" ";
    }
}
