#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    set<int> sa;
    set<int> sb;
    for (int i=0;i<n;i++){
        cin>>m;
        sa.insert(i+1);
        sb.insert(m);
    }
    if (sa==sb){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
