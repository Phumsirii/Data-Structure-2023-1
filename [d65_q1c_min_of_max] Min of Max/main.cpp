#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m;
    queue<int> ans,reserve;
    for (int i=0;i<m;i++){
        ans.push(1);
    }
    vector<int> inp;
    for (int i=0;i<n;i++){
        cin>>k;
        inp.push_back(k);
    }
    for (int i=0;i<n;i++){
        cin>>k;
        for (int i=0;i<k;i++){
            reserve.push(ans.front());
            ans.pop();
        }
        if (ans.front()<inp[k]){
            ans.pop();
            ans.push(inp[k]);
        }
        int mini=ans.front();
        while (!reserve.empty()){
            ans.push(reserve.front());
            if (reserve.front()<mini){
                mini=reserve.front();
            }
            reserve.pop();
        }
        for (int i=0;i<m-k;i++){
            ans.push(ans.front());
            if (ans.front()<mini){
                mini=ans.front();
            }
            ans.pop();
        }
        cout<<mini<<" ";
    }
}
