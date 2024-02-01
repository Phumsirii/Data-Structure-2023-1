#include <iostream>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,start,p,x,a,s,tmoney,cday,dm;
    cin>>n>>m>>start;
    map<int,int> ma;
    for (int i=0;i<n;i++){
        cin>>a>>s;
        ma[a]=s;
    }
    for (int i=0;i<m;i++){
        cin>>p>>x;
        cday=0;
        tmoney=0;
        dm=start;
        while (true){
            if (ma.find(cday)!=ma.end()){
                dm=ma[cday];
            }
            tmoney+=dm;
            if (tmoney>=p){ //icecream bought
                break;
            }
            if (cday==x){
                tmoney=0;
            }
            cday++;
        }
        cout<<cday<<" ";
    }
}
