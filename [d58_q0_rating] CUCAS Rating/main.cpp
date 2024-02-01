#include <iostream>
#include <set>
#include <vector>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);
    map<int,pair<int,int>> courseid_tscore_noofinputs;
    map<string,pair<int,int>> teacher_tscore_noofinputs;
    int n,id,score;
    cin>>n;
    string teacher;
    for (int i=0;i<n;i++){
        cin>>id;
        cin>>teacher;
        cin>>score;
        courseid_tscore_noofinputs[id].first+=score;
        courseid_tscore_noofinputs[id].second++;
        teacher_tscore_noofinputs[teacher].first+=score;
        teacher_tscore_noofinputs[teacher].second++;
    }
    for (auto &x:courseid_tscore_noofinputs){
        cout<<x.first<<" "<<(x.second.first+0.0)/x.second.second<<"\n";
    }
    for (auto &x:teacher_tscore_noofinputs){
        cout<<x.first<<" "<<(x.second.first+0.0)/x.second.second<<"\n";
    }
}
