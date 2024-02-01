#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k,v,tmp;
    cin>>n>>k>>v;
    list<int> l1,l2;
    for (int i=0;i<n;++i){
        cin>>tmp;
        if (i<k) l1.push_front(tmp);
        else l2.push_back(tmp);
    }
    bool done=false;
    list<int>::iterator i1=l1.begin();
    list<int>::iterator i2=l2.begin();
    if ((v==*i1 && v==*i2)||(v==*i1 && v==*(++i1))||(v==*i2 && v==*(++i2))){
        while(v==*l1.begin()) l1.erase(l1.begin());
        while (v==*l2.begin()) l2.erase(l2.begin());
        tmp=*i1;
        list<int>::iterator i1=l1.begin();
        list<int>::iterator i2=l2.begin();
        list<int>::iterator i12=l1.begin(); ++i12;
        list<int>::iterator i22=l2.begin(); ++i22;
        while ((*i1==*i2 && *i1==*i12) || (*i2==*i1 && *i2==*i22)){
            while(tmp==*l1.begin()) l1.erase(l1.begin());
            while (tmp==*l2.begin()) l2.erase(l2.begin());
            if (l1.empty()||l2.empty()) break;
            tmp=*l1.begin();
            i1=l1.begin();
            i2=l2.begin();
            i12=l1.begin(); ++i12;
            i22=l2.begin(); ++i22;
        }
        done=true;
    }
    list<int>::iterator it=l1.end();
    for (--it;it!=l1.begin();--it) cout<<*it<<" ";
    if (!l1.empty()) cout<<*l1.begin()<<" ";
    if (!done) cout<<v<<" ";
    for (list<int>::iterator it=l2.begin();it!=l2.end();++it) cout<<*it<<" ";
}
