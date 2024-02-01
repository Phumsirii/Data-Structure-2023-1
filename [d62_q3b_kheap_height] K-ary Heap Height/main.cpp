#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n,k,m;
    cin>>n>>k;
    m=0;
    if (k==1){
        cout<<n-1;
        return 0;
    }
    while ((pow(k,m+1)-1)/(k-1)<n) m++;
    cout<<m;
}
