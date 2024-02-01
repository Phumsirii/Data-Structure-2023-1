#include <iostream>

using namespace std;

int main()
{
    int h,m,d;
    cin>>h,cin>>m;
    cin>>d;
    int sdh=(m+d%60)/60;
    int dh=d/60+sdh;
    h=(h+dh)%24;
    m=(m+d%60)%60;
    if (h<10 and m<10){
        cout<<0<<h<<" 0"<<m<<endl;
    }
    else if (h>9 and m<10){
        cout<<h<<" 0"<<m<<endl;
    }
    else if (h<10 and m>9){
        cout<<0<<h<<" "<<m<<endl;
    }
    else {
        cout<<h<<" "<<m<<endl;
    }
}
