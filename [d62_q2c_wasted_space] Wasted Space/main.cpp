#include <iostream>

using namespace std;

int main()
{
    size_t target,n;
    cin>>target;
    n=1;
    while (n<target){
        n*=2;
    }
    cout<<n-target;
}
