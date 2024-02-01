#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,mf,ms,mc,l,c;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>mf>>ms>>mc>>l>>c;
        if (mf<mc && ms<=mc && l<mc && (mf+ms)%mc==l){
            cout<<"OK\n";
            continue;
        }
        if (c==0){
            cout<<"WRONG\n";
        }
        else if (c==1){
            cout<<"WRONG "<<(l-ms+mc)%mc<<"\n";
        }
        else if (c==2){
            cout<<"WRONG "<<(l+mc-mf)%mc<<"\n";
        }
        else if (c==3){
            cout<<"WRONG ";
            if (mf<l){
                cout<<l+1<<"\n";
            }
            else{
                cout<<ms+mf-l<<"\n";
            }
        }
        else{
            cout<<"WRONG "<<(mf+ms)%mc<<"\n";
        }
    }
}
