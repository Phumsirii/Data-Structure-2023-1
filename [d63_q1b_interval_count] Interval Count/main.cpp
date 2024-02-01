#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    int x,z;
    vector<int> mini(n);
    vector<int> maxi(n);
    for (int i=0;i<n;i++){
        cin>>x;
        mini[i]=(x-k);
        maxi[i]=(x+k);
    }
    sort(mini.begin(),mini.end());
    sort(maxi.begin(),maxi.end());
    vector<int> result;
    for (int i = 0; i < m; i++) {
        cin >> x;
        int count_mini = upper_bound(mini.begin(), mini.end(), x) - mini.begin();
        int count_maxi = lower_bound(maxi.begin(), maxi.end(), x) - maxi.begin();
        result.push_back(count_mini - count_maxi);
    }
    for (auto&x:result){
        cout<<x<<" ";
    }
}
