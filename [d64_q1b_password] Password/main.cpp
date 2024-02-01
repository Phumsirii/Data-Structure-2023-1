#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,l,k,a;
    cin>>n>>m>>l;
    vector <int> kis;
    for (int i=0;i<l;i++){
        cin>>k;
        kis.push_back(k%26);
    }
    set<string> s;
    string pw,chr,target;
    for (int i=0;i<n;i++){
        cin>>chr;
        s.insert(chr);
    }
    for (int i=0;i<m;i++){
        pw="";
        cin>>target;
        for (int e=0;e<l;e++){
            a=((char)target[e]-'a'+kis[e])%26;
            pw+="abcdefghijklmnopqrstuvwxyz"[a];
        }
        if (s.find(pw)==s.end()){
            cout<<"Unknown\n";
        }
        else{
            cout<<"Match\n";
        }
    }
}
