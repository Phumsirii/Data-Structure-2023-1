#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m;
    while (m--){
        cin>>a>>b;
        bool d=true;
        if (a==b){
            cout<<"a and b are the same node\n";
            continue;
        }
        if (a<b){
            while (a<b){
                b=(b-1)/2;
                if (a==b){
                    cout<<"a is an ancestor of b\n";
                    d=false;
                    break;
                }
            }
        }
        else{
            while (b<a){
                a=(a-1)/2;
                if (a==b){
                    cout<<"b is an ancestor of a\n";
                    d=false;
                    break;
                }
            }
        }
        if (d){
            cout<<"a and b are not related\n";
        }
    }
}
