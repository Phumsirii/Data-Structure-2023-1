#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,g,type,goods_type,no,target;
    cin>>n>>m;
    map<int,int> goods_types;
    map<int,set<int>> no_of_sales;
    for (int i=0;i<n;i++){
        cin>>g;
        goods_types[g]=0;
        no_of_sales[0].insert(g);
    }
    for (int i=0;i<m;i++){
        cin>>type;
        if (type==1){
            cin>>goods_type>>no;
            if (goods_types.find(goods_type)!=goods_types.end()){
                no_of_sales[goods_types[goods_type]].erase(goods_type);
                if (no_of_sales[goods_types[goods_type]].size()==0){
                    no_of_sales.erase(goods_types[goods_type]);
                }
                goods_types[goods_type]+=no;
                no_of_sales[goods_types[goods_type]].insert(goods_type);
            }
        }
        else{
            cin>>target;
            auto it=no_of_sales.lower_bound(target);
            if (it==no_of_sales.begin()){
                cout<<"NONE\n";
            }
            else{
                it--;
                if (it->first!=0){
                    cout<<*(prev(it->second.end(),1))<<"\n";
                }
                else{
                    cout<<"NONE\n";
                }
            }
        }
    }
}
